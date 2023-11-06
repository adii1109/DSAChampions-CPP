#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the Number: "<<endl;
    cin>>a;

    int count=1;
    for(int i=a;i>=1;i--){

        //for space 
        int space=a-i;
        for(space;space>=1;space--){
            cout<<" ";
        }

        //for count

        for(int j=1;j<=i;j++){
            cout<<count;
        }
     count++;
        cout<<endl;
    }
   return 0;
}