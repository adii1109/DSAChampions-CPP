#include<iostream>
using namespace std;
  
 
 


int countPrimes(int n) {


        if (n==0 || n==1){
            return 0;
        }

        if  (n==2){
            return 1 ;
        }


        int count=0;
        for(int i =2 ;i<=n;i++){

            int isprime=1;
            for(int j=2; j<i; j++){
                if (i%j==0){
                    isprime=0;
                    break;}

            }

            if (isprime==1){
                count+=1;
            }

        }
        return count;
    }
int main()
{
 
 int n=3;

 int ans =countPrimes(n);
 cout<<ans<<endl;
 
return 0;
}