#include<iostream>
#include<math.h>
using namespace std;


class Solution{

public:

int isPrime(int n){

int count=0;
for(int i=1;i<=n;i++){


    if (n%i==0){
         if (isPrimenum(i)){
         count++;}
    }}

return count;

}


private:

bool isPrimenum(int num){


    if (num<=1){
        return false;
    }

    for(int i=2;i <= sqrt(num);i++){

        if (num%i==0){
            return false;
        }
    }

    return true;
}   
};



int main(){



int n;
cin>>n;


Solution ob;

cout<<ob.isPrime(n)<<endl;

    return 0;
}