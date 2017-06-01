#include "Program2_12.h"
#include <iostream>
using namespace std;

Program2_12::Program2_12()
{
  cout << "Program 2.12\n";
  
  char letter;
  letter = 'A';
  cout << letter << endl;
  letter = 'B';
  cout << letter << endl;
}

Program2_12::~Program2_12()
{
  cout << "Program 2.12 works with characters.\n";
  getchar();
}
