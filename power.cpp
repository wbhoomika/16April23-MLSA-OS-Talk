#include<iostream>
using namespace std;
/* 
// without functions
int main()
{
    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "Answer: " << ans << endl;
    return 0;
    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
} */

// with functions
int power()
{
    int a,b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int answer = power();
    cout << "Answer: " << answer << endl;
    return 0;
}