# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/CLionProjects/FD/AlgorithmTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestAdd2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestAdd2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestAdd2.dir/flags.make

CMakeFiles/TestAdd2.dir/main.cpp.o: CMakeFiles/TestAdd2.dir/flags.make
CMakeFiles/TestAdd2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestAdd2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestAdd2.dir/main.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp

CMakeFiles/TestAdd2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestAdd2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp > CMakeFiles/TestAdd2.dir/main.cpp.i

CMakeFiles/TestAdd2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestAdd2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp -o CMakeFiles/TestAdd2.dir/main.cpp.s

# Object files for target TestAdd2
TestAdd2_OBJECTS = \
"CMakeFiles/TestAdd2.dir/main.cpp.o"

# External object files for target TestAdd2
TestAdd2_EXTERNAL_OBJECTS =

TestAdd2: CMakeFiles/TestAdd2.dir/main.cpp.o
TestAdd2: CMakeFiles/TestAdd2.dir/build.make
TestAdd2: lib/libgtestd.a
TestAdd2: CMakeFiles/TestAdd2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestAdd2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestAdd2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestAdd2.dir/build: TestAdd2

.PHONY : CMakeFiles/TestAdd2.dir/build

CMakeFiles/TestAdd2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestAdd2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestAdd2.dir/clean

CMakeFiles/TestAdd2.dir/depend:
	cd /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/CLionProjects/FD/AlgorithmTemplate /Users/admin/CLionProjects/FD/AlgorithmTemplate /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles/TestAdd2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestAdd2.dir/depend
