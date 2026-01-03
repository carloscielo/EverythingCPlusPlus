// chrono is a C++ Standard Library header for time-related functionality
// It provides high-resolution clocks for precise timing measurements
#include <iostream>
#include <chrono>

int main() {
    // Start timing (equivalent to tic in Python/MATLAB)
    // high_resolution_clock provides the most precise clock available
    // now() captures the current time point
    auto start = std::chrono::high_resolution_clock::now();
    
    // Your code to time goes here
    // This example loop simulates some work being done
    for (int i = 0; i < 1000000; i++) {
        // Some computational work
    }
    
    // Stop timing (equivalent to toc in Python/MATLAB)
    // Capture the end time point
    auto end = std::chrono::high_resolution_clock::now();
    
    // Calculate duration between start and end
    // duration_cast converts the duration to milliseconds
    // Other options: nanoseconds, microseconds, seconds, minutes, hours
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    // Print the execution time
    // count() returns the numerical value of the duration
    std::cout << "Execution time: " << duration.count() << " ms" << std::endl;
    
    // Alternative: Get duration in seconds as a floating-point number
    std::chrono::duration<double> duration_seconds = end - start;
    std::cout << "Execution time: " << duration_seconds.count() << " seconds" << std::endl;
    
    return 0;
}

// in order to compile this function into an executable use the line  g++ Troubleshooting/timing_example.cpp -o Troubleshooting/timing_example.exe
// inside of the MSYS2 UCRT64 Terminal remember C++ is a compiled language