#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter Number to check prime or not"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime";
            break;
        }
    }
    if(i==n)
    cout<<"Prime Number";
    return 0;
}