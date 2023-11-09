#include<iostream>
#include<math.h>
using namespace std;


void sqrt(int x){

    int s=0,e=x,i,mid;

    while(s<=e){

        mid=s+e-s/2;

        if (mid*mid==x){

            i=mid;
            break;
        }

        else if (mid*mid>x){
            e=mid-1;
        }
        
        else{
            i=mid;
            s=mid+1;
        }
    }

    cout<<"Squre root : "<<i<<endl;
}



 
int main(){


    int n;
    
    cout<<"Enter the Number : "<<endl;
    cin>>n;


    sqrt(n);



}