#include<iostream>
using namespace std;
  
 
 
int main()
{
 

        int firstnum,secondnum;

        cout<<"Enter First Number: "<<endl;
        cin>>firstnum;


        cout<<"Enter  Second  Number: "<<endl;
        cin>>secondnum;

        char op;
        cout<<"Enter a Charchater : "<<endl;
        cin>>op;



        switch (op)
        {
        case '+':
            cout<<"Answer: "<<firstnum+secondnum<<endl;
            break;

        case '-':
            cout<<"Answer: "<<firstnum-secondnum<<endl;
            break;
        case '*':
            cout<<"Answer: "<<firstnum*secondnum<<endl;
            break;
        case '/':
            cout<<"Answer: "<<firstnum/secondnum<<endl;
            break;

        case '%':
            cout<<"Answer: "<<firstnum%secondnum<<endl;
            break;
        
        default:
            cout<<"Error,Please Try again !"<<endl;
            break;
        }
 
 
return 0;
}