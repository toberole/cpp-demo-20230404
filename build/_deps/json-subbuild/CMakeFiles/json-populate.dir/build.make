# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild

# Utility rule file for json-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/json-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/json-populate.dir/progress.make

CMakeFiles/json-populate: CMakeFiles/json-populate-complete

CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-install
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-mkdir
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-download
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-update
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-patch
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-configure
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-build
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-install
CMakeFiles/json-populate-complete: json-populate-prefix/src/json-populate-stamp/json-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'json-populate'"
	/Applications/CMake.app/Contents/bin/cmake -E make_directory /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles
	/Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles/json-populate-complete
	/Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-done

json-populate-prefix/src/json-populate-stamp/json-populate-update:
.PHONY : json-populate-prefix/src/json-populate-stamp/json-populate-update

json-populate-prefix/src/json-populate-stamp/json-populate-build: json-populate-prefix/src/json-populate-stamp/json-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E echo_append
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-build

json-populate-prefix/src/json-populate-stamp/json-populate-configure: json-populate-prefix/tmp/json-populate-cfgcmd.txt
json-populate-prefix/src/json-populate-stamp/json-populate-configure: json-populate-prefix/src/json-populate-stamp/json-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E echo_append
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-configure

json-populate-prefix/src/json-populate-stamp/json-populate-download: json-populate-prefix/src/json-populate-stamp/json-populate-gitinfo.txt
json-populate-prefix/src/json-populate-stamp/json-populate-download: json-populate-prefix/src/json-populate-stamp/json-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps && /Applications/CMake.app/Contents/bin/cmake -P /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/tmp/json-populate-gitclone.cmake
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps && /Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-download

json-populate-prefix/src/json-populate-stamp/json-populate-install: json-populate-prefix/src/json-populate-stamp/json-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E echo_append
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-install

json-populate-prefix/src/json-populate-stamp/json-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'json-populate'"
	/Applications/CMake.app/Contents/bin/cmake -Dcfgdir= -P /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/tmp/json-populate-mkdirs.cmake
	/Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-mkdir

json-populate-prefix/src/json-populate-stamp/json-populate-patch: json-populate-prefix/src/json-populate-stamp/json-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'json-populate'"
	/Applications/CMake.app/Contents/bin/cmake -E echo_append
	/Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-patch

json-populate-prefix/src/json-populate-stamp/json-populate-update:
.PHONY : json-populate-prefix/src/json-populate-stamp/json-populate-update

json-populate-prefix/src/json-populate-stamp/json-populate-test: json-populate-prefix/src/json-populate-stamp/json-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E echo_append
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-build && /Applications/CMake.app/Contents/bin/cmake -E touch /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/json-populate-test

json-populate-prefix/src/json-populate-stamp/json-populate-update: json-populate-prefix/src/json-populate-stamp/json-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'json-populate'"
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-src && /Applications/CMake.app/Contents/bin/cmake -P /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/json-populate-prefix/tmp/json-populate-gitupdate.cmake

json-populate: CMakeFiles/json-populate
json-populate: CMakeFiles/json-populate-complete
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-build
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-configure
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-download
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-install
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-mkdir
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-patch
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-test
json-populate: json-populate-prefix/src/json-populate-stamp/json-populate-update
json-populate: CMakeFiles/json-populate.dir/build.make
.PHONY : json-populate

# Rule to build all files generated by this target.
CMakeFiles/json-populate.dir/build: json-populate
.PHONY : CMakeFiles/json-populate.dir/build

CMakeFiles/json-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/json-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/json-populate.dir/clean

CMakeFiles/json-populate.dir/depend:
	cd /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild /Users/zhouwei10/xiaoge/code/c/cpp-demo-20230404/build/_deps/json-subbuild/CMakeFiles/json-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/json-populate.dir/depend

