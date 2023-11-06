#include<iostream>
using namespace std;


int main(){

    cout<<"Enter Your age : "<<endl;
    int age;
    cin>>age;

    if (age<18){
        cout<<"You Cant drive"<<endl;
    }
    else if (age==18){
        cout<<"We can think about You"<<endl;
    }
    else{
        cout<<"YOu can drive"<<endl;
    }
    return 0;
}