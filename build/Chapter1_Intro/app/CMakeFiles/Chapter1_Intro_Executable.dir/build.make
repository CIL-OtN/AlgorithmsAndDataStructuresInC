# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build

# Include any dependencies generated for this target.
include Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/compiler_depend.make

# Include the progress variables for this target.
include Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/flags.make

Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/flags.make
Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/includes_C.rsp
Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj: ../Chapter1_Intro/app/main.c
Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj"
	cd /d C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X8EAA8~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj -MF CMakeFiles\Chapter1_Intro_Executable.dir\main.c.obj.d -o CMakeFiles\Chapter1_Intro_Executable.dir\main.c.obj -c C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\Chapter1_Intro\app\main.c

Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chapter1_Intro_Executable.dir/main.c.i"
	cd /d C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X8EAA8~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\Chapter1_Intro\app\main.c > CMakeFiles\Chapter1_Intro_Executable.dir\main.c.i

Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chapter1_Intro_Executable.dir/main.c.s"
	cd /d C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X8EAA8~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\Chapter1_Intro\app\main.c -o CMakeFiles\Chapter1_Intro_Executable.dir\main.c.s

# Object files for target Chapter1_Intro_Executable
Chapter1_Intro_Executable_OBJECTS = \
"CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj"

# External object files for target Chapter1_Intro_Executable
Chapter1_Intro_Executable_EXTERNAL_OBJECTS = \
"C:/Users/eywiotosof/Documents/GitHub/AlgorithmsAndDataStructuresInC/build/Chapter1_Intro/src/CMakeFiles/Chapter1_Intro_MyLib.dir/my_lib.c.obj"

Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/main.c.obj
Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/src/CMakeFiles/Chapter1_Intro_MyLib.dir/my_lib.c.obj
Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/build.make
Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/linklibs.rsp
Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/objects1.rsp
Chapter1_Intro/app/Chapter1_Intro_Executable.exe: Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Chapter1_Intro_Executable.exe"
	cd /d C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Chapter1_Intro_Executable.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/build: Chapter1_Intro/app/Chapter1_Intro_Executable.exe
.PHONY : Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/build

Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/clean:
	cd /d C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app && $(CMAKE_COMMAND) -P CMakeFiles\Chapter1_Intro_Executable.dir\cmake_clean.cmake
.PHONY : Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/clean

Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\Chapter1_Intro\app C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app C:\Users\eywiotosof\Documents\GitHub\AlgorithmsAndDataStructuresInC\build\Chapter1_Intro\app\CMakeFiles\Chapter1_Intro_Executable.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter1_Intro/app/CMakeFiles/Chapter1_Intro_Executable.dir/depend

