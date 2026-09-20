#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char op;

    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;

    cout<<"enter an operator (+,-,*,/)";
    cin>>op;

    switch(op)
{
    case '+':
    cout<<"result ="<<num1+num2<<endl;
    break;
    
    case '-':
    cout<<"result is"<<num1-num2<<endl;
    break;

    case '*':
    cout<<"result is"<<num1*num2<<endl;
    break;

    case '/':
    cout<<"result is"<<num1/num2<<endl;
    break;

    
  default:
            cout << "Invalid operator!" << endl;
}
    return 0;





}