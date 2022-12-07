#include<iostream>
using namespace std;

int main(){
    float a,b,c,d;
    cout<<"CAUTION: operations maximum for 4 numbers/decimals"<<endl;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b>>c>>d;

    cout<<"enter the operation"<<endl;
    char op;
    cin>>op;

    switch (op)
    {
        case '+': 
        cout<<a+b+c+d<<endl;
        break;

        case '-':
        cout<<a-b-c-d<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        case '*':
        cout<<a*b*c*d<<endl;
        break;

        default:
        cout<<"User input is wrong"<<endl;
        break;
    }

    return 0;


}