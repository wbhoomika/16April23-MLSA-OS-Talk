#include <iostream>

using namespace std;

int sum(int a, int b);

int main()
{
    int num1, num2;
    cout << "enter the first number" << endl;
    cin >> num1;
    cout << "enter the second number" << endl;
    cin >> num2;
    cout << "the sum of the number= " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
};