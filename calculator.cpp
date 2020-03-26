#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char x;
    while(true)
    {
        cout<<"Enter the first number: "<<endl;
        cin>>num1;
        cout<<"Enter the second number: "<<endl;
        cin>>num2;

        cout<<"Press a for addition"<<endl;
        cout<<"Press s for subtraction"<<endl;
        cout<<"Press m for multiplication"<<endl;
        cout<<"Press d for division"<<endl;
        cout<<"Press r for remainder"<<endl;
        cin>>x;

        if(x=='a')
        {
            cout<<"The addition= "<<num1+num2<<endl;
        }
        else if(x=='s')
        {
            cout<<"The subtraction= "<<num1-num2<<endl;

        }
        else if(x=='m')
        {
            cout<<"The multiplication= "<<num1*num2<<endl;

        }
        else if(x=='d')
        {
            cout<<"The division= "<<num1/num2<<endl;

        }
        else if(x=='r')
        {
            cout<<"The remainder= "<<num1%num2<<endl;

        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;

}
