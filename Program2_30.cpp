#include "Program2_30.h"
#include <iostream>
using namespace std;
Program2_30::Program2_30()
{
  cout << "Program 2.30\n";
  
  double shares = 220.0;
  double avgPrice = 14.67;
  
  cout << "There were " << shares << " shares sold at $";
  cout << avgPrice << " per share.\n";
}
Program2_30::~Program2_30()
{
  cout << "Program 2.30 is much more readable that Program 2.29.\n";
  getchar();
}
