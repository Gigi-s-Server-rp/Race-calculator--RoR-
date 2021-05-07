// mm:ss average calculator
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// Build some data
	int amount;
	int times = 0;
	string temp;
	int t3 = 0;
	
	// Ask for the amount of inputs
	cout << "Amount: ";
	cin >> amount;
	cout << endl << "Times:\n";
	// Get all the inputs from the user
	for (int i = 0; i < amount; i++) {
		cin >> temp;					// Get the input in a temp. string
		// Extract every single digit needed
		int m10 = temp[0] - '0';
  	    int m01 = temp[1] - '0';
 		int s10 = temp[3] - '0';
 		int s01 = temp[4] - '0';
 		// Construct the second temp. variable
 		// Do some math and put the times in t3
 		t3 = (m10 * 10 + m01) * 60 + (s10 * 10 + s01);
		times += t3; 
	}
	
	cout << endl << endl;				// Some space
    
	
	
	// output
	cout << times << endl;
        
  return 0;
}

