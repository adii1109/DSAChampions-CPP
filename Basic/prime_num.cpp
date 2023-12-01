
#include<iostream>
#include<math.h>
using namespace std;


class Solution{

public:

int isPrime(int N){


    //edge case

    if (N<=1){
        return 0;
    }

   
    for(int i=2;i<N;i++){

        if (N%i==0){
             return 0;
    }}



return 1;

}
   
};



int main(){



int n;
cin>>n;


Solution ob;

cout<<ob.isPrime(n)<<endl;

    return 0;
}