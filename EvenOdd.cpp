#include <iostream>

using namespace std;

bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "Enter the number to be checked: " << endl;
    cin >> num;
    if (isEven(num) == true)
        cout << "Entered number is Even" << endl;
    else
        cout << "Entered number is Odd" << endl;
}