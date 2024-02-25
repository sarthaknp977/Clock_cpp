## Clock C++

This repository contains a simple C++ program that implements a digital clock and a countdown timer. The program allows users to set the initial time for the clock or timer and choose between displaying a digital clock or starting a countdown timer.

### Features

- **Digital Clock:** Displays the current time in HH:MM:SS format, updating every second.
- **Countdown Timer:** Allows users to set a specific time duration and counts down to zero, indicating when time's up.

### Usage

1. **Compilation:**
   - Compile the program using a C++ compiler such as g++:
     ```
     g++ main.cpp -o clock_cpp
     ```

2. **Execution:**
   - Run the compiled binary to start the program:
     ```
     ./clock_cpp
     ```

3. **Functionality:**
   - Choose between the digital clock and the countdown timer by entering the corresponding number.
   - Set the initial time for the clock or the countdown by entering the hours, minutes, and seconds.
   - View the clock or countdown timer as it updates in real-time.

### Dependencies

- `<iostream>`: Input and output operations.
- `<iomanip>`: Input/output manipulators for formatting.
- `<chrono>`: Provides time-related functionality.
- `<thread>`: Supports multi-threading for time delay.

### Author

Sarthak GC
