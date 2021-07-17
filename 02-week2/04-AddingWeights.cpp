#include <iostream>

using namespace std;

const int OUNCES_IN_A_POUND = 16;
int main() {
    //declare variables
    int item1Pounds, item1Ounces;
    int item2Pounds, item2Ounces;
    int combinedWeightPounds, combinedWeightOunces;
    int tempSumOfOunces, carriedOverPounds;

    //read the input
    cout << "Please enter the weight of two items" << endl;
    cout << "For each item, give its weight in pounds ";
    cout << "and ounces, seperated by a space: " <<endl;    //endl for cout breaking the line
    cout << "Item #1: ";    //same line with input so will be no endl
    cin>>item1Pounds>>item1Ounces;  //the user will enter the space
    cout << "Item #2: ";
    cin>>item2Pounds>>item2Ounces;  //cin only for reading so we do not need endl

    //do the calculation
    tempSumOfOunces = item1Ounces + item2Ounces;
    combinedWeightOunces = tempSumOfOunces % OUNCES_IN_A_POUND; //remainder - ounces
    carriedOverPounds = tempSumOfOunces / OUNCES_IN_A_POUND;    //division - the pound carries over by ounces
    combinedWeightOunces = item1Pounds + item2Pounds + carriedOverPounds;

    //send back as output
    cout<<"The combined weight is "<<combinedWeightPounds<<" pounds";
    cout<<"and "<<combinedWeightOunces<<" ounces."<<endl;

    return 0;
}
