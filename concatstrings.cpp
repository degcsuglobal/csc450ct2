#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// We are using the C++ string class, which is dynamically allocated,
	// to avoid buffer overflows that we might have with char[] arrays, etc. 
	string stringA, stringB;

	// Do this 3 times for varying string lengths (per assignment)
	for (int i = 0; i < 3; i++) {
		cout << "LOOP ITERATION NUMBER " << i << endl;
		
		cout << "Enter the first string: ";
		getline(std::cin, stringA);
		
		cout << "Enter the second string: ";
		getline(std::cin, stringB);
		
		string result = stringA + stringB; // Concatenate the strings!
		
		// Print the result
		cout << "Concatenated result: " << result << endl;
	}
	
	return 0;
}
