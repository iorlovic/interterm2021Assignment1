/*
Ivan Orlovic
Dr. German
1/13/21
2352727
Problem 2
fireCapacity:
- takes in the maximum room capacity
- takes in the number of people attending a meeting
- determines if it is legal or not
- if it is not legal then it will tell the user how many people they need to exclude
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  int maxRoomCap; // gets the maximum room capacity
  int peopleAttending; // gets the people attending the meeting
  int univitedNum; // poeple who need to be uninvited to host the meeting

// code to ask for the information to determine the max room cap and peopleAttending
  cout << "Congrats on scheduling a meeting!" << endl;
  cout << "Here we will ask you a few questions and determine if can have a meeting or not, based on the fire capacity." << endl;
  cout << "How many people will be in attendance? ";
  cin >> peopleAttending;
  cout << "What is the maximum room capacity? " ;
  cin >> maxRoomCap;

// logic for uninviting people
univitedNum = (peopleAttending - maxRoomCap);
// code to determine if the meeting is legal
// if else will be used!

  if(peopleAttending > maxRoomCap){
    cout << "Unfortunately, your meeting cannot take place as you have too many people in attendance and this violated fire capacity regulations. " << endl;
    cout << "In order to have your meeting you must have less than or equal to " << maxRoomCap << " and so you must uninvite " << univitedNum << " person/people." << endl;
    cout << "Thank you." << endl;
  }
  else {
    cout << "Congratulations! Your meeting meeting fire capacity regulations." << endl;
    cout << "We will send you an email shortly with available meeting times." << endl;
    cout << "Thank you!" << endl;
  }




  return 0;
}
