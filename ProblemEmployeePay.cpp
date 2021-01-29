/*
Ivan Orlovic
Dr. German
1/13/21
2352727
Problem 3
- take in number of hours worked in a week
- output that as the workers gross pay
- output each withholding amount
- output net take home pay for the week

- $16 per hour, 1.5 times that for overtime = gross pay
- 6% withheld for ss tax
- 14% withheld for federal income tax
- 5% witheld for state income tax
- $10 per week is withheld for medical insurance
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  double hoursWorked;
  double overtimeWorked;

  double grossPay;
  double sSTax;
  double fITax;
  double sITax;
  double medInsur = 10.00;
  double netPay;

  //// asking for hours and overtime
  cout << "How many regular hours have you worked this week? " << endl;
  cin >> hoursWorked;
  cout << "How many overtime hours have you worked this week? " << endl;
  cin >> overtimeWorked;

// calculating gross Pay
  grossPay = (hoursWorked * 16.00) + (overtimeWorked * (16.00 * 1.5));
// calculate social security tax
  sSTax = (grossPay * (0.06));
// calculate federal income tax
  fITax = (grossPay * (0.14));
// calculate state income tax
  sITax = (grossPay * (0.05));
// calculate net pay
  netPay = (grossPay - (sSTax + fITax + sITax + medInsur));


// print out all of your data collected
  cout << "Your total gross income over the week is: $" << grossPay << endl;
  cout << "The amount deducted (6%) from your gross income for Social security tax is: $" << sSTax << endl;
  cout << "The amount deducted (14%) from your gross income for Federal income tax is: $" << fITax << endl;
  cout << "The amount deducted (5%) from your gross income for State income tax is: $" << sITax << endl;
  cout << "The amount deducted from your gross income for medical insurance is: $" << medInsur << " which is a fixed amount."<< endl;
  cout << "Total net income for this week is: $" << netPay << endl;


return 0;
}
