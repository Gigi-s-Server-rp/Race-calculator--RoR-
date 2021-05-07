#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;




int main() {
	// Settings for calculation
	char type;
	int format = 99;
	int races = 99;
	int laps = 99;
	// Data input from user
	int positions[30]; // 30 Positions can be used max
	int sectimes[30];
	
	int times;
	
	int s2;
	int rest;
	
	int avrs;
	int a1;
	int a2;
	
	cout << "Version:    1.0\n\n";						// Change this with every version
  cout << "Choose between position and time\n(P/T): "; // Laps are for times. Races are for positions
  cin >> type;
  
  // Get the amount of laps/races for the average and amount of inputs
  if (type == 'P' || type == 'p') {
  	cout << "Tell me the amount of races: ";
  	cin >> races;
  	cout << "Tell me every position\n";
  	for (int i = 0; i < races; i++) {
    cin >> positions[i];
}
    // Calculation for the position
  	float res;
	float sum = 0;
	for (int aa = 0; aa < races; aa++) {
		sum += positions[aa];
	}
	res = sum / races;
	cout << "\nThe average position is: " << res << " = " << round(res);
  } else if (type == 'T' || type == 't') {
  	cout << "Tell me the amount of laps: ";
  	cin >> laps;
  	cout << "Which time format will you use?\n";
  	cout << "mm:ss (1)\nStraight seconds (2)\n";
  	cin >> format;
  	// Check the time format
  if (format == 1) {
  	cout << "mm:ss format has been choosen";
  	// Just ignore the mess in here
	times = 0;
	
	
	string temp;
	int t3 = 0;

	cout << endl << "Times:\n";
	// Get all the inputs from the user
	for (int i = 0; i < laps; i++) {
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
    
    // Convert seconds to mm:ss again
	s2 = times / 60;
	rest = times % 60;
	
	avrs = times / laps;
	a1 = avrs / 60;
	a2 = avrs % 60;
	
	
  	
  	
  	// End of my bullshit
  	
  } else if (format == 2) {
  	cout << "Seconds format has been choosen";
  	cout << "\nTell me every lap time:\n";
  	for (int i = 0; i < laps; i++) {
  	cin >> sectimes[i];
  }
  	float res;
  	float sum = 0;
  	for (int aa = 0; aa < laps; aa++) {
  		sum += sectimes[aa];
	  }
	  res = sum / laps;
	  cout << "\nThe average time is: " << res << " = " << round(res);
  } else {
  	cout << "!Please choose between two options for format!";
  	return 502;
  }
  } else {
  	cout << "!Please choose between two options for type!";
  	return 501;
  }
  
  
  // Output
  
  
  if (type == 'P' || type == 'p') {
  	cout << "\nRaces: " << races;
  	cout << "\nPositions: ";			
  	for (int i = 0; i < races; ++i) {	
        cout << positions[i] << "  ";	
    }
    cout << endl;
    return 500;
  }
  
  
  if (laps >= 1 && format == 1) {
  	cout << "\nLaps: " << laps;
  	// Output1
	cout << "\n   Total:" << endl;
	cout << times << endl;				// Seconds
	cout << s2 << ":" << rest;			// mm:ss
	// Output2
	cout << endl << "   Average:" << endl;
	cout << avrs << endl;				// Seconds
	cout << a1 << ":" << a2;			// mm:ss
	cout << endl;
	return 500;
    } else if (laps >= 1 && format == 2) {
    	cout << "\nLaps: " << laps;
    	cout << "\nTimes: ";				
  		for (int i = 0; i < laps; ++i) {	
        cout << sectimes[i] << "  ";
	}
	cout << endl;
	return 500;
  }
  cout << "\n\n   Fatal error";
  return 0;
}
