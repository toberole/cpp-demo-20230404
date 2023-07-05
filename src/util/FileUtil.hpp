#pragma once

#define MAX_PATH_LEN 4096

#if defined _WIN32 || defined _WIN64
    #define FILE_SEP "\\"
    #define __FILENAME__ \
        (strrchr(__FILE__, '\\') ? (strrchr(__FILE__, '\\') + 1) : __FILE__)

    #define ACCESS(fileName, accessMode) _access(fileName, accessMode)
    #define MKDIR(path)                  _mkdir(path)
#else
    #define FILE_SEP "/"
    #define __FILENAME__ \
        (strrchr(__FILE__, '/') ? (strrchr(__FILE__, '/') + 1) : __FILE__)

    #define ACCESS(fileName, accessMode) access(fileName, accessMode)
    #define MKDIR(path)                  mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)

#endif

#ifdef _WIN32 || defined _WIN64
    #include <direct.h>
    #include <io.h>
#else
    #include <sys/stat.h>
    #include <unistd.h>
#endif
#include <fstream>
#include <stdint.h>
#include <string>

// 从左到右依次判断文件夹是否存在,不存在就创建
// example: /home/root/mkdir/1/2/3/4/
// 注意:最后一个如果是文件夹的话,需要加上 '\' 或者 '/'
int32_t createDirectory(std::string directoryPath)
{
    if (directoryPath.empty()) {
        return 0;
    }

    if (directoryPath.back() != FILE_SEP[0]) {
        directoryPath += FILE_SEP;
    }

    uint32_t dirPathLen = directoryPath.length();
    if (dirPathLen > MAX_PATH_LEN) {
        return -1;
    }
    char *tmpDirPath = new char[dirPathLen + 1];
    tmpDirPath[dirPathLen] = 0;
    for (uint32_t i = 0; i < dirPathLen; ++i) {
        tmpDirPath[i] = directoryPath[i];
        if (tmpDirPath[i] == FILE_SEP[0] && tmpDirPath[i] != 0) {
            if (ACCESS(tmpDirPath, 0) != 0) {
                int32_t ret = MKDIR(tmpDirPath);
                if (ret != 0) {
                    return ret;
                }
            }
        }
    }
    return 0;
}

bool isFileExists_ifstream(std::string &name)
{
    std::ifstream f(name.c_str());
    return f.good();
}
bool isFileExists_fopen(std::string &name)
{
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}
bool isFileExists_access(std::string &name)
{
    return (access(name.c_str(), F_OK) != -1);
}
bool isFileExists_stat(std::string &name)
{
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}
