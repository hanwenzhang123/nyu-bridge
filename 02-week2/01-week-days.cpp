Weeks and Days
if 19 days, there will be 2 weeks and 5 days
19 divide 7 = 2 R 5

19/7 = 2
19%7 = 5
  
  
//Code
#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;   //for constance, we use upper cases and seperate words with underscore 
int main() {
  int daysTraveled;
  int fullWeeks, remainingDays;
  
  cout<<"please enter the total number of days you traveled: "<<endl;
  cin>>daysTraveled;
  
  fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
  remainingDays = daysTraveled % DAYS_IN_A_WEEK;  
  
  cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days."<<endl;
  
  return 0;
}
  
