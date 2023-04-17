#include <iostream>

using namespace std;

int power()
{
    int number, power;
    cout << "Enter the number: " << endl;
    cin >> number;
    cout << "Enter the power: " << endl;
    cin >> power;
    int answer = 1;
    for (int i = 0; i < power; i++)
    {
        answer *= number;
    }
    return answer;
}
int main()
{
    int answer = power();
    cout << "Answer: " << answer;
    return 0;
}