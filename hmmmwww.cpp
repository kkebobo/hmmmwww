#include <iostream>

using namespace std;

int main()
{
    float first_variable;
    float second_variable;

    cout << "Enter the value of the first variable: ";
    cin >> first_variable;

    cout << "Enter the value of the second variable: ";
    cin >> second_variable;

    
    first_variable += second_variable;
    second_variable = first_variable - second_variable;
    first_variable -= second_variable;

    cout << "\nThe value of the first variable: " << first_variable << "\n";
    cout << "The value of the second variable: " << second_variable << "\n";
}

#include <iostream>

using namespace std;

int main()
{
    float first_variable;
    float second_variable;
    float third_variable;

    cout << "Enter the value of the first variable: ";
    cin >> first_variable;

    cout << "The value of the second variable: ";
    cin >> second_variable;

    third_variable = first_variable;
    first_variable = second_variable;
    second_variable = third_variable; 

    cout << "\nThe value of the first variable: " << first_variable << "\n";
    cout << "The value of the second variable: " << second_variable << "\n";
}