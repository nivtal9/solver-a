# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/111/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/111/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nivtal9/CLionProjects/solver-a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nivtal9/CLionProjects/solver-a/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/solver-a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/solver-a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/solver-a.dir/flags.make

CMakeFiles/solver-a.dir/Demo.cpp.o: CMakeFiles/solver-a.dir/flags.make
CMakeFiles/solver-a.dir/Demo.cpp.o: ../Demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/solver-a.dir/Demo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solver-a.dir/Demo.cpp.o -c /home/nivtal9/CLionProjects/solver-a/Demo.cpp

CMakeFiles/solver-a.dir/Demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solver-a.dir/Demo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nivtal9/CLionProjects/solver-a/Demo.cpp > CMakeFiles/solver-a.dir/Demo.cpp.i

CMakeFiles/solver-a.dir/Demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solver-a.dir/Demo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nivtal9/CLionProjects/solver-a/Demo.cpp -o CMakeFiles/solver-a.dir/Demo.cpp.s

CMakeFiles/solver-a.dir/TestCounter.cpp.o: CMakeFiles/solver-a.dir/flags.make
CMakeFiles/solver-a.dir/TestCounter.cpp.o: ../TestCounter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/solver-a.dir/TestCounter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solver-a.dir/TestCounter.cpp.o -c /home/nivtal9/CLionProjects/solver-a/TestCounter.cpp

CMakeFiles/solver-a.dir/TestCounter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solver-a.dir/TestCounter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nivtal9/CLionProjects/solver-a/TestCounter.cpp > CMakeFiles/solver-a.dir/TestCounter.cpp.i

CMakeFiles/solver-a.dir/TestCounter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solver-a.dir/TestCounter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nivtal9/CLionProjects/solver-a/TestCounter.cpp -o CMakeFiles/solver-a.dir/TestCounter.cpp.s

CMakeFiles/solver-a.dir/solver.cpp.o: CMakeFiles/solver-a.dir/flags.make
CMakeFiles/solver-a.dir/solver.cpp.o: ../solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/solver-a.dir/solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solver-a.dir/solver.cpp.o -c /home/nivtal9/CLionProjects/solver-a/solver.cpp

CMakeFiles/solver-a.dir/solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solver-a.dir/solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nivtal9/CLionProjects/solver-a/solver.cpp > CMakeFiles/solver-a.dir/solver.cpp.i

CMakeFiles/solver-a.dir/solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solver-a.dir/solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nivtal9/CLionProjects/solver-a/solver.cpp -o CMakeFiles/solver-a.dir/solver.cpp.s

CMakeFiles/solver-a.dir/Test.cpp.o: CMakeFiles/solver-a.dir/flags.make
CMakeFiles/solver-a.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/solver-a.dir/Test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solver-a.dir/Test.cpp.o -c /home/nivtal9/CLionProjects/solver-a/Test.cpp

CMakeFiles/solver-a.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solver-a.dir/Test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nivtal9/CLionProjects/solver-a/Test.cpp > CMakeFiles/solver-a.dir/Test.cpp.i

CMakeFiles/solver-a.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solver-a.dir/Test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nivtal9/CLionProjects/solver-a/Test.cpp -o CMakeFiles/solver-a.dir/Test.cpp.s

# Object files for target solver-a
solver__a_OBJECTS = \
"CMakeFiles/solver-a.dir/Demo.cpp.o" \
"CMakeFiles/solver-a.dir/TestCounter.cpp.o" \
"CMakeFiles/solver-a.dir/solver.cpp.o" \
"CMakeFiles/solver-a.dir/Test.cpp.o"

# External object files for target solver-a
solver__a_EXTERNAL_OBJECTS =

solver-a: CMakeFiles/solver-a.dir/Demo.cpp.o
solver-a: CMakeFiles/solver-a.dir/TestCounter.cpp.o
solver-a: CMakeFiles/solver-a.dir/solver.cpp.o
solver-a: CMakeFiles/solver-a.dir/Test.cpp.o
solver-a: CMakeFiles/solver-a.dir/build.make
solver-a: CMakeFiles/solver-a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable solver-a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/solver-a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/solver-a.dir/build: solver-a

.PHONY : CMakeFiles/solver-a.dir/build

CMakeFiles/solver-a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/solver-a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/solver-a.dir/clean

CMakeFiles/solver-a.dir/depend:
	cd /home/nivtal9/CLionProjects/solver-a/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nivtal9/CLionProjects/solver-a /home/nivtal9/CLionProjects/solver-a /home/nivtal9/CLionProjects/solver-a/cmake-build-debug /home/nivtal9/CLionProjects/solver-a/cmake-build-debug /home/nivtal9/CLionProjects/solver-a/cmake-build-debug/CMakeFiles/solver-a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/solver-a.dir/depend

