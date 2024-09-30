#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to append user input to provided file
void appendToFile(const std::string& fileName) {
    // Open the file in append mode, meaning data will be added to the already existing file
    std::ofstream outFile(fileName, std::ios::app);

    // Check to make sure the file was opened properly
    if(!outFile) {
        std::cerr << "Error opening file for writing..." << std::endl;
        return;
    }

    // Get user input
    std::string userInput;
    std::cout << "Enter text to append to file: ";
    // Using 'getline' to capture input
    std::getline(std::cin, userInput);

    // Write the user input to the file
    outFile << userInput << std::endl;

    // Close file after writing
    outFile.close();

    std::cout << "Data successfully appended." << std::endl;
}

// Function to reverse the contents of the file, and write to new file
void reverseFileContents(const std::string& inputFileName, const std::string& outputFileName) {
    // Open file for reading
    std::ifstream inFile(inputFileName);

    // Check to make sure file was successfully opened
    if(!inFile) {
        std::cerr << "Error opening file for reading..." << std::endl;
        return;
    }

    // Read the entire content of the input file to a string
    std::string content((std::istreambuf_iterator<char>(inFile)), (std::istreambuf_iterator<char>()));

    // Close file after reading
    inFile.close();

    // Reverse the string contents
    std::reverse(content.begin(), content.end());

    // Open the output file for writing
    std::ofstream outFile(outputFileName);

    // Check if the output file was opened correctly
    if(!outFile) {
        std::cerr << "Error opening file for writing..." << std::endl;
        return;
    }

    // Write the reversed content to the output file
    outFile << content;

    // Close output file after writing
    outFile.close();

    // Inform the user that the reversed content was successfully written
    std::cout << "Reversed data successfully written." << std::endl;
}

int main() {
    // Define the input and output files...
    const std::string inputFileName = "CSC450_CT5_mod5.txt";
    const std::string outputFileName = "CSC450-mod5-reverse.txt";

    // Call the function to append data to the file
    appendToFile(inputFileName);

    // Call the function to reverse the contents of the file
    reverseFileContents(inputFileName, outputFileName);

    return 0; // Successfully exit!
}