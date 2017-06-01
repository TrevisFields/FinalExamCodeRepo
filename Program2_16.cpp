#include "Program2_16.h"
#include <iostream>
using namespace std;

Program2_16::Program2_16()
{
  float distance;
  double mass;
  
  distance = 1.495979E11;
  mass = 1.989E30;
  cout << "Program 2.16\n";
  cout << "The Sun is " << distance << " meters away.\n";
  cout << "The Sun\'s mass is " << mass << " kilograms.\n";
}

Program2_16::~Program2_16()
{
  cout << "Program 2.16 uses floating point data types.\n";
  getchar();
}
