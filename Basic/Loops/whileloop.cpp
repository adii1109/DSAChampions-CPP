#include<iostream>
using namespace std;


int main(){


//sum of 1 to n numbers:
    // int n;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;


    // int sum=0;
    // int i=1;

    // while(i<=n){
    //     sum+=i;
    //     i+=1;
    // }

    // cout<<" value of Sum is =\t"<<sum<<endl;
    // return 0;



//sum of even number between 1 to n:


        // int n;
        // cout<<"Enter the Number:"<<endl;
        // cin>>n;


        // int evensum=0;
        // int oddsum=0;
        // int i =1;

        // while(i<=n){
        //     if (i%2==0){
        //         evensum+=i;
        //     }
        //     else{
        //         oddsum+=i;
        //     }
        //     i+=1;
        // }

        // cout<<"Sum of all even number = "<<evensum<<endl;
        // cout<<"Sum of all odd number = "<<oddsum<<endl;





    //Check prime number or not


    // int num;
    // cout<<"Enter the number:"<<endl;
    // cin>>num;


    // int i=2;
    // int isprime=0;

    // while(i<num){
    //     if (num%i==0){
    //         isprime=1;
    //         break;
    //     }
    //     i+=1;

    // }

    // if (isprime==1){
    //     cout<<"not prime"<<endl;
    // }
    // else{
    //     cout<<"prime"<<endl;
    // }


    //Pattern question
    // int n=4
    // ****
    // ****
    // ****
    // ****

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;


    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=n){
            cout<<"*";
            col++;
        }
        cout<<endl;
        rows++;
    }

    return 0;
}