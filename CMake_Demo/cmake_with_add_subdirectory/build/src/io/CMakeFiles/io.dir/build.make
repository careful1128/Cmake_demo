# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/cmake/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build

# Include any dependencies generated for this target.
include src/io/CMakeFiles/io.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/io/CMakeFiles/io.dir/compiler_depend.make

# Include the progress variables for this target.
include src/io/CMakeFiles/io.dir/progress.make

# Include the compile flags for this target's objects.
include src/io/CMakeFiles/io.dir/flags.make

src/io/CMakeFiles/io.dir/io.cpp.o: src/io/CMakeFiles/io.dir/flags.make
src/io/CMakeFiles/io.dir/io.cpp.o: ../src/io/io.cpp
src/io/CMakeFiles/io.dir/io.cpp.o: src/io/CMakeFiles/io.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/io/CMakeFiles/io.dir/io.cpp.o"
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/io/CMakeFiles/io.dir/io.cpp.o -MF CMakeFiles/io.dir/io.cpp.o.d -o CMakeFiles/io.dir/io.cpp.o -c /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/src/io/io.cpp

src/io/CMakeFiles/io.dir/io.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/io.dir/io.cpp.i"
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/src/io/io.cpp > CMakeFiles/io.dir/io.cpp.i

src/io/CMakeFiles/io.dir/io.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/io.dir/io.cpp.s"
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/src/io/io.cpp -o CMakeFiles/io.dir/io.cpp.s

# Object files for target io
io_OBJECTS = \
"CMakeFiles/io.dir/io.cpp.o"

# External object files for target io
io_EXTERNAL_OBJECTS =

lib/libio.a: src/io/CMakeFiles/io.dir/io.cpp.o
lib/libio.a: src/io/CMakeFiles/io.dir/build.make
lib/libio.a: src/io/CMakeFiles/io.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libio.a"
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && $(CMAKE_COMMAND) -P CMakeFiles/io.dir/cmake_clean_target.cmake
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/io.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/io/CMakeFiles/io.dir/build: lib/libio.a
.PHONY : src/io/CMakeFiles/io.dir/build

src/io/CMakeFiles/io.dir/clean:
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io && $(CMAKE_COMMAND) -P CMakeFiles/io.dir/cmake_clean.cmake
.PHONY : src/io/CMakeFiles/io.dir/clean

src/io/CMakeFiles/io.dir/depend:
	cd /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/src/io /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io /home/elvin/cpp_demo/CMake_Demo/cmake_with_add_subdirectory/build/src/io/CMakeFiles/io.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/io/CMakeFiles/io.dir/depend

