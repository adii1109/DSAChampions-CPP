#include<iostream>
#include<vector>
using namespace std;



int main(){


    vector<int>arr;

    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(10);

    //first element printing

    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;


    //last element printing

    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;


    //copy value arr to a

    vector<int>a;

    a=arr;

    cout<<a.size()<<endl;

    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}