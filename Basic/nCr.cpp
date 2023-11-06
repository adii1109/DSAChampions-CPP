#include<iostream>
using namespace std;
  
 


        int fact (int n){

            int fact=1;
            
            for (int i=1;i<=n;i++){
                fact=fact*i;
                }

            return fact;

            }


        int nCr(int n,int r ){

                int num=fact(n);

                int denmo=fact(r)*fact(n-r);

                return num/denmo;
                
            }
    
        int main()

            {
            
            int n,r;

            cin>>n>>r;

            int ncr=nCr(n,r);

            cout<<ncr<<endl;
            
            
            return 0;
            }