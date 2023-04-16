#include <iostream>
using namespace std;

//function prototype
//type function-name (arrgument);
int sum(int a, int b);  //accepetable
// int sum(int ,int);   //accepetable
// int sum (int a,b); //not-acceptable
void g(void);
int main(){
    int num1,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    //num1 and num2 is actual parameters 
    cout<<"the sum of the number= "<<sum(num1,num2);
    g();

    return 0;
}
int sum(int a,int b)
{
    // formal parameters a, b will take the value from actual parameters
    int c=a+b;
    return c;
};
void g()
{
    cout<<"\nthak you:)";
}