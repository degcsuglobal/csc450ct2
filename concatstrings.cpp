#include <iostream>

int main(int argc, char **argv) {

	// We are using the C++ string class, which is dynamically allocated,
	// to avoid buffer overflows that we might have with char[] arrays, etc. 
	std::string stringA, stringB;

	// Do this 3 times for varying string lengths (per assignment)
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter the first string: ";
		std::getline(std::cin, stringA);
		
		std::cout << "Enter the second string: ";
		std::getline(std::cin, stringB);
		
		std::string result = stringA + stringB; // Concatenate the strings!
		
		// Print the result
		std::cout << "Concatenated result: " << result << std::endl;
	}
	
	return 0;
}
