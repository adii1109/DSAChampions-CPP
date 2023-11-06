
#include<iostream>
using namespace std;

  
 


void NumbersofBits(int a,int b){


    int bits=0;
    
    while(a!=0 || b!=0){

        if (a&1){
            bits++;
        }

       if (b&1) {
            bits ++;
        }
        a=a>>1;
        b= b>>1;
    }
    cout<<bits<<endl;
}
 
int main()
{
 
 
 int a,b;
 cin>>a>>b;

 NumbersofBits(a,b);
 
return 0;
}
