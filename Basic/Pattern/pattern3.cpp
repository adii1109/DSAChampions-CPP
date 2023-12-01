#include<iostream>
using namespace std;


int main(){

    cout<<"Enter the Number: "<<endl;
    int n;
    cin>>n;

    int count=1;
    //for structure
    for(int i=1;i<=n;i++){

        // for space
        int space=n-i;
        for(space;space>=1;space--){
            cout<<" ";
        }

         
        for(int j=1;j<=i;j++){
            cout<<count;
        }
      
       cout<<endl;
        count++;
    }
   
  

   
}