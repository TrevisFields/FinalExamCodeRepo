#include "Program2_28.h"
#include <iostream>
using namespace std;

Program2_28::Program2_28()
{
  cout << "Program 2.28\n";
  // Constants
  const double PI = 3.14159;
  const double DIAMETER = 10.0;
  
  // Variable to hold the circumference
  double circumference;
  
  // Calculate the circumference.
  circumference = PI * DIAMETER;
  
  // Display the circumference.
  cout << "The circumference is: " << circumference << endl;
}

Program2_28::~Program2_28()
{
  cout << "Program 2.28 caculates the circumference of a circle.\n";
  getchar();
}
