#include "Program2_11.h"
#include <iostream>
using namespace std;

Program2_11::Program2_11()
{
  int floors, rooms, suites;
  
  floors = 15;
  rooms = 300;
  suites = 30;
  
  cout << "Program 2.11\n";
  cout << "The Grande Hotel has " << floors << " floors\n";
  cout << "with " << rooms << " rooms and " << suites;
  cout << " suites.\n";
}

Program2_11::~Program2_11()
{
  cout << "Program 2.11 shows three variables defined on the same line.\n";
  getchar();
}
