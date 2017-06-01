#include "Program2_18.h"
#include <iostream>
using namespace std;

Program2_18::Program2_18()
{
  long double apple;
  
  cout << "Program 2.18\n";
  cout << "The size of an integer is " << sizeof(int);
  cout << " bytes.\n";
  cout << "The size of a long integer is " << sizeof(long);
  cout << " bytes.\n";
  cout << "An apple can be eaten in " << sizeof(apple);
  cout << " bytes!\n";
}

Program2_18::~Program2_18()
{
  cout << "Program 2.18 determines the size of integers, long integers, and long doubles.\n";
  getchar();
}
