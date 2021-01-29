/*
Ivan Orlovic
Dr. German
1/13/21
2352727
Problem 1: Cereal
Write a program that will read the weight(console input)of a package of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  double cPackage;
  double metricConversion;
  double boxesNeeded;

// ask and get the input
  cout << "What is the weight of your cereal package in ounces? ";
  cin >> cPackage;

// conversion and output to user
  metricConversion = (cPackage / 35273.92);
  cout << "The weight of your cereal package in metric tons is: " << metricConversion << endl;

// Now output how many cereal boxes needed to yield one metric ton

  boxesNeeded = (35273.92 / cPackage);
  cout << "In order to fill one metric ton, you need " << boxesNeeded << " of cereal boxes." << endl;

  return 0; // end code with 0
}
