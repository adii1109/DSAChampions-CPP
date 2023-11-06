#include<iostream>
using namespace std;


int CountNum(int n){
    int count=0;
    while(n){
        n/=10;
        count++;
    }
    return count;

}


int pow1(int n,  int count){
    int m=n;
    for(int i=2;i<=count;i++){
        n*=m;
    }
    return n;
}

bool CheckArmStrong(int n){

    int ans,digit, m=n;
    
    while(m!=0){
        digit=m%10;
        m/=10;
        ans+=pow1(digit,CountNum(n));

    }

    if (ans==n){
        return 1;
          
    }
    else{
       return 0;
    }



}

int main(){


    int n;
    cin>>n;


    if (CheckArmStrong(n)){
        cout<<"ArmStrong-Number"<<endl;

    }
    else{
        cout<<"Not ArmStrong-Number"<<endl;
    }



    cout<<endl;

    return 0;
    // CheckArmStrong(n);
    // int powel=pow1(2,3);
    // int count=CountNum(15973);
    // cout<<"power "<<powel<<" "<<"count number "<<count<<endl;
}