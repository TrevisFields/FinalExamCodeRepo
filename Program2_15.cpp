#include "Program2_15.h"
#include <iostream>
#include <string>
using namespace std;

Program2_15::Program2_15()
{
  string movieTitle;
  
  movieTitle = "Wheels of Fury";
  cout << "Program 2.15\n";
  cout << "My favorite movie is " << movieTitle << endl;
}

Program2_15::~Program2_15()
{
  string closingMsg;
  
  closingMsg = "demonstrates the string class.\n";
  cout << "Program 2.15 " << closingMsg;
  getchar();
}
