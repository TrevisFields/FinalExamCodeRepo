#include "Program2_24.h"
#include <iostream>
using namespace std;

Program2_24::Program2_24()
{
  cout << "Program 2.24\n";
  
  int number = 12345;
  int rightMost = number % 10;
  
  cout << "The rightmost digit in "
		<< number << " is "
  << rightMost << endl;
}

Program2_24::~Program2_24()
{
 cout << "Program 2.24 extracts the rightmost digit of a number.\n";
  getchar();
}
