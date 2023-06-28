#ifdef WIN32
    #include <direct.h>
    #include <io.h>
#else
    #include <sys/stat.h>
    #include <unistd.h>
#endif
#include <stdint.h>
#include <string>
#include <fstream>
#define MAX_PATH_LEN 4096

#ifdef WIN32
    #define ACCESS(fileName, accessMode) _access(fileName, accessMode)
    #define MKDIR(path)                  _mkdir(path)
#else
    #define ACCESS(fileName, accessMode) access(fileName, accessMode)
    #define MKDIR(path)                  mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
#endif

// 从左到右依次判断文件夹是否存在,不存在就创建
// example: /home/root/mkdir/1/2/3/4/
// 注意:最后一个如果是文件夹的话,需要加上 '\' 或者 '/'
int32_t createDirectory(const std::string &directoryPath)
{
    uint32_t dirPathLen = directoryPath.length();
    if (dirPathLen > MAX_PATH_LEN) {
        return -1;
    }
    char tmpDirPath[MAX_PATH_LEN] = {0};
    for (uint32_t i = 0; i < dirPathLen; ++i) {
        tmpDirPath[i] = directoryPath[i];
        if (tmpDirPath[i] == '\\' || tmpDirPath[i] == '/') {
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

bool isFileExists_ifstream(std::string& name) {
    std::ifstream f(name.c_str());
    return f.good();
}
bool isFileExists_fopen(std::string& name) {
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}
bool isFileExists_access(std::string& name) {
    return (access(name.c_str(), F_OK ) != -1 );
}
bool isFileExists_stat(std::string& name) {
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}

 
