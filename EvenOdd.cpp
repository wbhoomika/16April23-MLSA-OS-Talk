#include<iostream>

using namespace std;

bool isEven(int a)
{
    if (a % 2)
        return false;
    return true;    
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
        cout << "Number is Even" << endl;
    else 
        cout << "Number is Odd" << endl;
}