# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/islam_pi/GUI/FOTA_ver1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/FOTA_ver1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FOTA_ver1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FOTA_ver1.dir/flags.make

CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o: CMakeFiles/FOTA_ver1.dir/flags.make
CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o: FOTA_ver1_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o -c /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/FOTA_ver1_autogen/mocs_compilation.cpp

CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/FOTA_ver1_autogen/mocs_compilation.cpp > CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.i

CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/FOTA_ver1_autogen/mocs_compilation.cpp -o CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.s

CMakeFiles/FOTA_ver1.dir/main.cpp.o: CMakeFiles/FOTA_ver1.dir/flags.make
CMakeFiles/FOTA_ver1.dir/main.cpp.o: /home/islam_pi/GUI/FOTA_ver1/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FOTA_ver1.dir/main.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FOTA_ver1.dir/main.cpp.o -c /home/islam_pi/GUI/FOTA_ver1/main.cpp

CMakeFiles/FOTA_ver1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FOTA_ver1.dir/main.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/islam_pi/GUI/FOTA_ver1/main.cpp > CMakeFiles/FOTA_ver1.dir/main.cpp.i

CMakeFiles/FOTA_ver1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FOTA_ver1.dir/main.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/islam_pi/GUI/FOTA_ver1/main.cpp -o CMakeFiles/FOTA_ver1.dir/main.cpp.s

CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o: CMakeFiles/FOTA_ver1.dir/flags.make
CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o: /home/islam_pi/GUI/FOTA_ver1/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o -c /home/islam_pi/GUI/FOTA_ver1/mainwindow.cpp

CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/islam_pi/GUI/FOTA_ver1/mainwindow.cpp > CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.i

CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/islam_pi/GUI/FOTA_ver1/mainwindow.cpp -o CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.s

CMakeFiles/FOTA_ver1.dir/fota.cpp.o: CMakeFiles/FOTA_ver1.dir/flags.make
CMakeFiles/FOTA_ver1.dir/fota.cpp.o: /home/islam_pi/GUI/FOTA_ver1/fota.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FOTA_ver1.dir/fota.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FOTA_ver1.dir/fota.cpp.o -c /home/islam_pi/GUI/FOTA_ver1/fota.cpp

CMakeFiles/FOTA_ver1.dir/fota.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FOTA_ver1.dir/fota.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/islam_pi/GUI/FOTA_ver1/fota.cpp > CMakeFiles/FOTA_ver1.dir/fota.cpp.i

CMakeFiles/FOTA_ver1.dir/fota.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FOTA_ver1.dir/fota.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/islam_pi/GUI/FOTA_ver1/fota.cpp -o CMakeFiles/FOTA_ver1.dir/fota.cpp.s

# Object files for target FOTA_ver1
FOTA_ver1_OBJECTS = \
"CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/FOTA_ver1.dir/main.cpp.o" \
"CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o" \
"CMakeFiles/FOTA_ver1.dir/fota.cpp.o"

# External object files for target FOTA_ver1
FOTA_ver1_EXTERNAL_OBJECTS =

FOTA_ver1: CMakeFiles/FOTA_ver1.dir/FOTA_ver1_autogen/mocs_compilation.cpp.o
FOTA_ver1: CMakeFiles/FOTA_ver1.dir/main.cpp.o
FOTA_ver1: CMakeFiles/FOTA_ver1.dir/mainwindow.cpp.o
FOTA_ver1: CMakeFiles/FOTA_ver1.dir/fota.cpp.o
FOTA_ver1: CMakeFiles/FOTA_ver1.dir/build.make
FOTA_ver1: /usr/lib/aarch64-linux-gnu/libQt5Widgets.so.5.15.2
FOTA_ver1: /usr/lib/aarch64-linux-gnu/libQt5Gui.so.5.15.2
FOTA_ver1: /usr/lib/aarch64-linux-gnu/libQt5Core.so.5.15.2
FOTA_ver1: CMakeFiles/FOTA_ver1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FOTA_ver1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FOTA_ver1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FOTA_ver1.dir/build: FOTA_ver1

.PHONY : CMakeFiles/FOTA_ver1.dir/build

CMakeFiles/FOTA_ver1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FOTA_ver1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FOTA_ver1.dir/clean

CMakeFiles/FOTA_ver1.dir/depend:
	cd /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/islam_pi/GUI/FOTA_ver1 /home/islam_pi/GUI/FOTA_ver1 /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug /home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CMakeFiles/FOTA_ver1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FOTA_ver1.dir/depend
