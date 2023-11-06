#include<iostream>
using namespace std;
  
 
 
int main()
{
 
            int amount ;
            cout<<"Enter a amount : "<<endl;
            cin>>amount ;


            int a,b,c,d ,e,am;

            switch (amount>=100)
            {
            case 1: a=amount/100;
                    amount=amount%100;
                break;
                }

            switch (amount>=50)
            {
            case 1: b=amount/50;
                    amount=amount%50;
                break;
                }


            switch (amount>=20)
            {
            case 1: c=amount/20;
                    amount=amount%20;
                break;
                }


            switch (amount>=10)
            {
            case 1: d=amount/10;
                    amount=amount%10;
                break;
                }


            switch (amount>=1)
            {
            case 1: e=amount/1;
                    amount=amount%1;
                break;
                }

            cout<<"100-"<<a<<endl;
            cout<<"50-"<<b<<endl;
            cout<<"20-"<<c<<endl;
            cout<<"10-"<<d<<endl;
            cout<<"1-"<<e<<endl;
            

 
 
return 0;
}