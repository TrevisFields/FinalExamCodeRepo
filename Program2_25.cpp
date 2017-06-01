#include "Program2_25.h"
#include <iostream>
using namespace std;

Program2_25::Program2_25()
{
  cout << "Program 2.25\n";
  
  // The total seconds is 125.
  int totalSeconds = 125;
  
  // Variables for the minutes and seconds
  int minutes, seconds;
  
  // Get the number of minutes.
  minutes = totalSeconds / 60;
  
  // Get the remaining seconds.
  seconds = totalSeconds % 60;
  
  // Display the results.
  cout << totalSeconds << " seconds is equivalent to:\n";
  cout << "Minutes: " << minutes << endl;
  cout << "Seconds: " << seconds << endl;
}

Program2_25::~Program2_25()
{
  cout << "Program 2.25 converts seconds to minutes and seconds.\n";
  getchar();
}
