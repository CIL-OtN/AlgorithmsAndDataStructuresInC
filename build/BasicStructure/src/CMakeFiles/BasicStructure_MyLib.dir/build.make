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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build

# Include any dependencies generated for this target.
include BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/compiler_depend.make

# Include the progress variables for this target.
include BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/progress.make

# Include the compile flags for this target's objects.
include BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/flags.make

BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj: BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/flags.make
BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj: BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/includes_C.rsp
BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj: ../BasicStructure/src/my_lib.c
BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj: BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj"
	cd C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src && C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj -MF CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj.d -o CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj -c C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/BasicStructure/src/my_lib.c

BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.i"
	cd C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src && C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/BasicStructure/src/my_lib.c > CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.i

BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.s"
	cd C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src && C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/BasicStructure/src/my_lib.c -o CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.s

BasicStructure_MyLib: BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/my_lib.c.obj
BasicStructure_MyLib: BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/build.make
.PHONY : BasicStructure_MyLib

# Rule to build all files generated by this target.
BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/build: BasicStructure_MyLib
.PHONY : BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/build

BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/clean:
	cd C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src && $(CMAKE_COMMAND) -P CMakeFiles/BasicStructure_MyLib.dir/cmake_clean.cmake
.PHONY : BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/clean

BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/BasicStructure/src C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : BasicStructure/src/CMakeFiles/BasicStructure_MyLib.dir/depend

