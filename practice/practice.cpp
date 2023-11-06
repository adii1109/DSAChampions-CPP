#include<iostream>
#include<math.h>
using namespace std;



int main(){

    //Fibbonacci Number : 0 1 1 2 3 5 8 13 

    // int n;
    // cin>>n;


    // if (n==1){
    //     cout<<0<<endl;
    // }

    // else if (n==2){
    //     cout<<0<<1;
        
    // }
    // else if (n>=3){

    //     int a =0;
    //     int b=1;

    //     cout<<a<<" "<<b<<" ";

    //     for(int j=3;j<=n;j++){

    //         int nextNum=a+b;
    //         cout<<nextNum<<" ";

    //         a=b;
    //         b=nextNum;

    //     }

    //  }

    //  else{
    //     cout<<"You Enter wrong Number , please return greater than 0"<<endl;
    //  }


    // int n ;
    // cin>>n;


   

    // if (n==1){
    //     cout<<0<<endl;
    // }

    // else if (n==2){
    //     cout<<1<<endl;
    // }

    // else if (n>=3){

    //     int a, b,nextnum;
    //     a=0;
    //     b=1;
      

    //     for(int j=3;j<=n;j++){
    //         nextnum=(a+b);
    //         a=b;
    //         b=nextnum;
            
    //     }

    //     cout<<nextnum<<endl;


    // }



// 4} Prime or not 

    // int n;
    // cin>>n;


    // if (n==1 || n==0){
    //     cout<<"Write number bigger than 2 "<<endl;
    // }


    // else {


    //     bool isprime=1;

    //     for (int j=2;j<n;j++){
    //         if (n%j==0){
    //             isprime=1;
    //         }
    // }

    // if(isprime){
    //     cout<<"prime number"<<endl;
    // }
    // else{
    //     cout<<"not prime"<<endl;
    // }

    // }



    // int n;
    // cin>>n;

    // int multi,sum;
    // multi=1;

    // while(n!=0){

    //     int lastdigit=n%10;
    //     n/=10;
    //     sum+=lastdigit;
    //     multi*=lastdigit;
    // }
    // cout<<(multi-sum)<<endl;


// 5}Numbers of bits


    // int n;
    // cin>>n;

    // int bit=0;
    // while(n!=0){

    //     if (n&1){
    //         bit++;
    //     }

    //     n=n>>1;
    // }

    // cout<<bit<<endl;




// 6 }  Decimal to binary


    // int n;
    // cin>>n;

    // int ans;
    // int i=0;

    // while(n!=0){

    //     int bit = n&1;

    //     ans=(bit*pow(10,i)+ans);
    //     n=n>>1;
    //     i++;
    // }

    // cout<<ans<<endl;



//7} Binary to decimal 

    // int n;
    // cin>>n;




    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int ls=n%10;

    //     if (ls&1){
    //         ans+=pow(2,i);
    //     }
        
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans;


//8] Reverse an number


    // int n;
    // cin>>n;


    // int ans=0;

    // while(n!=0){

    //     int lastdigit=n%10;


    //     if (ans>INT32_MAX/10 || ans<INT32_MIN/10){
    //         cout <<0<<endl;
    //     }
    //     ans=(ans*10)+lastdigit;

    //     n=n/10;

    // }
    // cout<<ans;




//9]} Signal digit addition 


        int n;
        cin>>n;


        while(n>9){
            int sum=0;
            while(n!=0){
                int ls=n%10;
                sum+=ls;
                n=n/10;
            }
            n=sum;

        }
        cout<<n<<endl;
            
        
// 10 } Leap Year :

    //Condition:

    //1.if any year divisable by 400 that year will be leap year.

    // 2.if any year divisable by 4 and not divisable by 100 that year will be leap year
    // in the condition any condition false will not be leap year

    // 3.else condition  not leap year.
        

    // int year;
    // cin>>year;


    // if (year%400==0){
    //     cout<<"Leap Year"<<endl;
    // }

    // else if (year%4==0 && year%100!=0){
    //     cout<<"Leap Year"<<endl;
    // }

    // else{
    //     cout<<"Not Leap Year"<<endl;
    // }


//11} Power of Two



//12] Squrt of 2


//13} Palidrome number;


    // int x;
    // cin>>x;


    // int n=x, ans=0, rem;

    // while(n){

    //     rem=n%10;
    //     n/=10;

    //     ans=ans*10+rem;
    // }

    // if (x==ans)
    // cout<<"Palidrome"<<endl;

    // else
    // cout<<"NOt Palidrome"<<endl;


//14:complement of base 2

    // int n;
    // cin>>n;


    // int rem ,ans,multi=1;

    // while(n){

    //     rem=n%2;
    //     rem= rem^1;
    //     n/=2;


    //     ans=ans+rem*multi;
    //     multi*=2;
    // }
    // cout<<ans<<endl;



    
}



