# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/src.dir/flags.make

CMakeFiles/src.dir/Main113.cpp.o: CMakeFiles/src.dir/flags.make
CMakeFiles/src.dir/Main113.cpp.o: ../Main113.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/src.dir/Main113.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/Main113.cpp.o -c /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/Main113.cpp

CMakeFiles/src.dir/Main113.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/Main113.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/Main113.cpp > CMakeFiles/src.dir/Main113.cpp.i

CMakeFiles/src.dir/Main113.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/Main113.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/Main113.cpp -o CMakeFiles/src.dir/Main113.cpp.s

CMakeFiles/src.dir/Main113.cpp.o.requires:

.PHONY : CMakeFiles/src.dir/Main113.cpp.o.requires

CMakeFiles/src.dir/Main113.cpp.o.provides: CMakeFiles/src.dir/Main113.cpp.o.requires
	$(MAKE) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/Main113.cpp.o.provides.build
.PHONY : CMakeFiles/src.dir/Main113.cpp.o.provides

CMakeFiles/src.dir/Main113.cpp.o.provides.build: CMakeFiles/src.dir/Main113.cpp.o


# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/Main113.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

src: CMakeFiles/src.dir/Main113.cpp.o
src: CMakeFiles/src.dir/build.make
src: CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable src"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/src.dir/build: src

.PHONY : CMakeFiles/src.dir/build

CMakeFiles/src.dir/requires: CMakeFiles/src.dir/Main113.cpp.o.requires

.PHONY : CMakeFiles/src.dir/requires

CMakeFiles/src.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : CMakeFiles/src.dir/clean

CMakeFiles/src.dir/depend:
	cd /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug /Users/asheshvidyut/Coding-Contests/Practice/Spoj/src/cmake-build-debug/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/src.dir/depend

