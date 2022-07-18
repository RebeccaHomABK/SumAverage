#include <iostream>

using namespace std;

int main()
{
    //  Asks the user for a number
    cout << "Please enter a number: ";

    //  Gets the first number
    int a;
    cin >> a;

    //  Asks the user for a second number
    cout << "Please enter a second number: ";

    //  Gets the second number
    int b;
    cin >> b;

    //  Asks the user for a third number
    cout << "Please enter a third number: ";

    //  Gets the third number
    int c;
    cin >> c;

    //  Gets the sum of the numbers
    int sum = a + b + c;

    //  Gets the average of the numbers
    float average = sum / 3.0f;

    //  Displays the sum and average to the user
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << average << endl;
}