#include <iostream>
#include <string>
#include <cmath>
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
	
	
  cout << "!This is a test version!\n"; // !--! Are announcements. This will be removed at some point
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
  	// NOT DONE HERE
  	cout << "\n!This is not supported yet!";
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
  
  // Everything has been set up. Calculate and output now
  
  
 
  
  cout << "\n   End of calculation";
  
  
  
  // Debug
  // Output the settings
  cout << "\nType: " << type;
  cout << "\nRaces: " << races;
  cout << "\nLaps: " << laps;
  cout << "\nFormat: " << format;		
  cout << "\n   Data";					// Structure
  										// Output Data from here
  cout << "\nPositions: ";				// Output every position
  for (int i = 0; i < races; ++i) {		// Output every position
        cout << positions[i] << "  ";	// Output every position
    }									// Output every position
    cout << "\nTimes: ";				// Output every time
  for (int i = 0; i < laps; ++i) {		// Output every time
        cout << sectimes[i] << "  ";	// Output every time
    }									// Output every time
    cout << "\n!This is just a debug version, the stable version will be launched soon!";
  return 0;
}
