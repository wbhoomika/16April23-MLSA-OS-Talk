#include<iostream>
using namespace std;
int main()
{
    int first_input, second_input;
    char operation;
    cout << "Enter first input: " << endl;
    cin >> first_input;
    cout << "Enter second input: " << endl;
    cin >> second_input;
    cout << "Enter Operation: " << endl;
    cin >> operation;
    switch(operation)
    {
        case '+':
        cout << "Addition: " << first_input + second_input<< endl;
        break;
        case '-':
        cout << "Subtract: " << first_input - second_input << endl;
        break;
        case '*':
        cout << "Multiply: " << first_input * second_input << endl;
        break;
        case '/':
        cout << "Divide: " << first_input / second_input << endl;
        break;
        default:
        cout << "Wrong input...!" << endl;
        break;
    }
    return 0;
}