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
include CMakeFiles/AlgorithmTemplate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlgorithmTemplate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlgorithmTemplate.dir/flags.make

CMakeFiles/AlgorithmTemplate.dir/main.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/main.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp

CMakeFiles/AlgorithmTemplate.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp > CMakeFiles/AlgorithmTemplate.dir/main.cpp.i

CMakeFiles/AlgorithmTemplate.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/main.cpp -o CMakeFiles/AlgorithmTemplate.dir/main.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o: ../src/sort/BubbleSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/BubbleSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/BubbleSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/BubbleSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o: ../src/sort/HillSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/HillSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/HillSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/HillSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o: ../src/sort/InsertSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/InsertSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/InsertSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/InsertSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o: ../src/sort/MergeSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o: ../src/sort/MergeSortV2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSortV2.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSortV2.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/MergeSortV2.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o: ../src/sort/QuickSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/QuickSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/QuickSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/QuickSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o: ../src/sort/SelectSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/SelectSort.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/SelectSort.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/SelectSort.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o: ../src/sort/common.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/common.cpp

CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/common.cpp > CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/sort/common.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.s

CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o: CMakeFiles/AlgorithmTemplate.dir/flags.make
CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o: ../src/search/binarySearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o -c /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/search/binarySearch.cpp

CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/search/binarySearch.cpp > CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.i

CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/FD/AlgorithmTemplate/src/search/binarySearch.cpp -o CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.s

# Object files for target AlgorithmTemplate
AlgorithmTemplate_OBJECTS = \
"CMakeFiles/AlgorithmTemplate.dir/main.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o" \
"CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o"

# External object files for target AlgorithmTemplate
AlgorithmTemplate_EXTERNAL_OBJECTS =

../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/main.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/BubbleSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/HillSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/InsertSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/MergeSortV2.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/QuickSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/SelectSort.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/sort/common.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/src/search/binarySearch.cpp.o
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/build.make
../bin/AlgorithmTemplate: lib/libgtestd.a
../bin/AlgorithmTemplate: CMakeFiles/AlgorithmTemplate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ../bin/AlgorithmTemplate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlgorithmTemplate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlgorithmTemplate.dir/build: ../bin/AlgorithmTemplate

.PHONY : CMakeFiles/AlgorithmTemplate.dir/build

CMakeFiles/AlgorithmTemplate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlgorithmTemplate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlgorithmTemplate.dir/clean

CMakeFiles/AlgorithmTemplate.dir/depend:
	cd /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/CLionProjects/FD/AlgorithmTemplate /Users/admin/CLionProjects/FD/AlgorithmTemplate /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug /Users/admin/CLionProjects/FD/AlgorithmTemplate/cmake-build-debug/CMakeFiles/AlgorithmTemplate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlgorithmTemplate.dir/depend
