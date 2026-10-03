#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1, num2 , num3 ;
    //here at the place of int we can use double for decimal number
    //we will not give num 1 and num 2 value bcoz user will give it the value
    cout << "enter first number :";
    cin >> num1;
    cout << "enter second number:";
    cin >> num2;
    cout << "enter third number :";
    cin>> num3;
    cout << num1 + num2 - num3<< endl;
    //we use cout << num1 + num2 to add 2 number likewise for substration, division, multiplication etc
    return 0;
}