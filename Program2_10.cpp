#include "Program2_10.h"
#include <iostream>
using namespace std;

Program2_10::Program2_10()
{
  cout << "Program 2.10\n";
  int checking;
  unsigned int miles;
  long days;
  
  checking = -20;
  miles = 4276;
  days = 189000;
  cout << "We have a long journey of " << miles;
  cout << " miles.\n";
  cout << "Our checking account balance is " << checking;
  cout << "\nAbout " << days << " days ago Columbus ";
  cout << "stood on this spot.\n";
}

Program2_10::~Program2_10()
{
  cout << "Program 2.10 has variables of several of the integer types.\n";
  getchar();
}
