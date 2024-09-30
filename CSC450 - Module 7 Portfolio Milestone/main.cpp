#include <iostream>
#include <thread>
#include <chrono>

// Function to count from 0 to 20
void countUp() {
    for(int i = 0; i <= 20; i++) {
        // This first section is used to simulate a bit of delay in the output
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "Counting up: " << i << std::endl;
    }
}

// Function to count from 20, back down to 0
void countDown() {
    for(int i = 20; i >= 0; i--) {
        // This first section is used to simulate a bit of delay in the output
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "Counting down: " << i << std::endl;
    }
}

int main() {
    // Creating the first thread to count up...
    std::thread threadOne(countUp);

    // Wait for thread one to complete before beginning thread two
    threadOne.join();

    // Create the second thread to count down...
    std::thread threadTwo(countDown);

    // Wait for thread two to complete
    threadTwo.join();

    return 0; // Successful exit
}
