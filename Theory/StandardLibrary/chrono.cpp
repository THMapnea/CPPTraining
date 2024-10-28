#include <iostream>
#include <chrono>


int main() {
    // ================================
    // Part 1: Durations
    // ================================
    // Durations represent time intervals. They can be defined using various units, like seconds, milliseconds, microseconds, etc.

    std::chrono::seconds one_second(1); // 1 second
    std::chrono::milliseconds five_hundred_millis(500); // 500 milliseconds
    std::chrono::microseconds three_micros(3); // 3 microseconds

    // Printing out durations
    std::cout << "One second: " << one_second.count() << " seconds\n";
    std::cout << "Five hundred milliseconds: " << five_hundred_millis.count() << " milliseconds\n";
    std::cout << "Three microseconds: " << three_micros.count() << " microseconds\n";

    // We can also perform arithmetic on durations
    auto total_duration = one_second + five_hundred_millis;
    std::cout << "Total duration (1s + 500ms): " << total_duration.count() << " milliseconds\n";

    // ================================
    // Part 2: Clocks
    // ================================
    // Clocks represent a source for the current time. There are three main types:
    // - `system_clock`: represents the system-wide real-time clock.
    // - `steady_clock`: a clock that never adjusts, ideal for measuring intervals.
    // - `high_resolution_clock`: the clock with the highest precision available.

    // Get the current time using system_clock
    auto start_time = std::chrono::system_clock::now();
    std::cout << "Starting a task at system time (epoch time): " << start_time.time_since_epoch().count() << " ticks\n";





    return 0;
}
