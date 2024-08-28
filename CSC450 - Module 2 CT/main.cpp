/*---
 * Pseudocode
 *---
 * Main function ()
 *      declare string(s): first string, second string, combined string
 *      for loop(to iterate three times) {
 *          output: iteration number
 *
 *          output: enter first string
 *          input: user input, first string
 *
 *          output: enter second string
 *          input: user input, second string
 *
 *          combined string: first string + second string
 *          output: combined string
 *      }
 *
 *      return 0;
 */

#include <iostream>
#include <string>

int main() {
    // Declare variables for user input
    std::string firstString, secondString, concatenatedString;

    // Loop to take inputs 3 times
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Iteration " << i << std::endl;

        // Obtain first string input from user
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        // Obtain second string input from user
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        // Combine string one and string two, then output back to user
        concatenatedString = firstString + " " + secondString;
        std::cout << "Concatenated string: " << concatenatedString << "\n\n";
    }

    return 0;
}
