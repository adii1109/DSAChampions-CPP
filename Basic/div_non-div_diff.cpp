#include<iostream>
using namespace std; 



void differecnceOfSum(int n, int m){

    int div=0, non_div=0;

    for(int i=1;i<=n;i++){
        if(i%m==0){
            div+=i;
        }
        else{
            non_div+=i;
        }
    }

    cout<<non_div-div<<endl;
}

int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    differecnceOfSum(n,m);
    return 0;
}