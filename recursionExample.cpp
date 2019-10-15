//Grant LaLonde 
//Csci301 section 2
//9/26/17
//
//This program displays the number input in decending order

#include <iostream>
using namespace std;

//Function declaration
int print(int n);

//Main function
int main()
{
    //declare variable
    int num;

    //Prompt for input
    cout << "Please input an integer: \n";
    cin >> num;
    
    //Call function print to display numbers. 
    print(num);

    return 0;
};


//Pre-Condition: an array of integers is input
//Post-Condition: Call print if n >= 1
//recursive function that displays the integer in ascending order
int print(int n)
{
    if ( n >= 1 )
    {
        print(n-1);
        cout << n-1 << endl;
    }


}
