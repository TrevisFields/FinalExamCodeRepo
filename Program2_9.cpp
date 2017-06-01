#include "Program2_9.h"
#include <iostream>
using namespace std;

Program2_9::Program2_9()
{
  int apples;
  apples = 20;
  cout << "Program 2.9\n";
  cout << "Today we sold " << apples << " bushels of apples.\n";
}

Program2_9::~Program2_9()
{
  cout << "Program 2.9 has literals and a variable.\n";
  getchar();
}
