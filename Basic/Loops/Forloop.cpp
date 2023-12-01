#include<iostream>
using namespace std;
  
 
 
int main()
{
 
        // int n;
        // cin>>n;

        // cout<<"Printing count 1 to n"<<endl;

        // for(int i=1;i<=n;i++){
        //         cout<<i<<endl;
        // }



//2]

    //Printing sum of all 1 to n sum

    // int n;
    // cin>>n;

    // int sum=0;

    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }

    // cout<<"The sum of 1 to n Number is : "<<sum<<endl;


//3}  Fibbonacci Series

//     int n;
//     cin>>n;

//    int a=0;
//    int b=1;

//    for(int i=1;i<=n;i++){
//     int nextNum=(a+b);
//     cout<<nextNum<<" ";
//     a=b;
//     b=nextNum;
//    }
    


//4] Prime or nOt 


    // int n;
    // cin>>n;


    // int isprime=1;

    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         isprime=0;
    //         break;
    //     }

    // }


    // if(isprime==1){
    //     cout<<"Prime"<<endl;
    // }
    // else{
    //     cout<<"not prime "<<endl;
    // }


//5. LT Question(1281)

        // int n;
        // cin >>n;

        // int sum=0;
        // int prod=1;

        // while(n!=0){
        //     int rem=n%10;
        //     sum+=rem;
        //     prod*=rem;
        //     n=n/10;
        // }


        // int result=prod-sum;
        // cout<<result<<endl;


        //5] Number of bits


        int n;
        cin>>n;

        int count=0;

        while(n!=0){
            if (n&1){
                count++;
            }
            n=n>>1;
        }

        cout<<count<<endl;
    return 0;
}