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
CMAKE_COMMAND = /opt/Clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/Clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thomas/CLionProjects/tinf19b3_calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o: calculator_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o -c /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/calculator_autogen/mocs_compilation.cpp

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/calculator_autogen/mocs_compilation.cpp > CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.i

CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/calculator_autogen/mocs_compilation.cpp -o CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.s

CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/main.cpp.o -c /home/thomas/CLionProjects/tinf19b3_calculator/main.cpp

CMakeFiles/calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/CLionProjects/tinf19b3_calculator/main.cpp > CMakeFiles/calculator.dir/main.cpp.i

CMakeFiles/calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/CLionProjects/tinf19b3_calculator/main.cpp -o CMakeFiles/calculator.dir/main.cpp.s

CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o: ../app/classes/Calculation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o -c /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculation.cpp

CMakeFiles/calculator.dir/app/classes/Calculation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/app/classes/Calculation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculation.cpp > CMakeFiles/calculator.dir/app/classes/Calculation.cpp.i

CMakeFiles/calculator.dir/app/classes/Calculation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/app/classes/Calculation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculation.cpp -o CMakeFiles/calculator.dir/app/classes/Calculation.cpp.s

CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o: ../app/classes/Calculator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o -c /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculator.cpp

CMakeFiles/calculator.dir/app/classes/Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/app/classes/Calculator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculator.cpp > CMakeFiles/calculator.dir/app/classes/Calculator.cpp.i

CMakeFiles/calculator.dir/app/classes/Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/app/classes/Calculator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/Calculator.cpp -o CMakeFiles/calculator.dir/app/classes/Calculator.cpp.s

CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o: ../app/classes/CalculatorGUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o -c /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/CalculatorGUI.cpp

CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/CalculatorGUI.cpp > CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.i

CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thomas/CLionProjects/tinf19b3_calculator/app/classes/CalculatorGUI.cpp -o CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calculator.dir/main.cpp.o" \
"CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o" \
"CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o" \
"CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

calculator: CMakeFiles/calculator.dir/calculator_autogen/mocs_compilation.cpp.o
calculator: CMakeFiles/calculator.dir/main.cpp.o
calculator: CMakeFiles/calculator.dir/app/classes/Calculation.cpp.o
calculator: CMakeFiles/calculator.dir/app/classes/Calculator.cpp.o
calculator: CMakeFiles/calculator.dir/app/classes/CalculatorGUI.cpp.o
calculator: CMakeFiles/calculator.dir/build.make
calculator: /usr/lib/libQt5Widgets.so.5.15.0
calculator: /usr/lib/libQt5Gui.so.5.15.0
calculator: /usr/lib/libQt5Core.so.5.15.0
calculator: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: calculator

.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/CLionProjects/tinf19b3_calculator /home/thomas/CLionProjects/tinf19b3_calculator /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug /home/thomas/CLionProjects/tinf19b3_calculator/cmake-build-debug/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

