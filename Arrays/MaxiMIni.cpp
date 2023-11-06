#include<iostream>
using namespace std;


void MinMax(int arr[],int size){


    // Max 

    cout<<"Maximum Element in array is : "<<endl;

    int maxi=INT32_MIN;
    // int maxi;
    for (int i=0 ; i<size;i++){
        maxi=max(maxi,arr[i]);
    }

    cout<<maxi<<endl;
    cout<<endl;


    // Mini

    cout<<"Minimum Element in array is : "<<endl;
    int mini=INT32_MAX;
    // int mini;
    for (int i=0 ; i<size;i++){
        mini=min(mini,arr[i]);
    }

    cout<<mini<<endl;
    cout<<endl;

}


int main(){


    int arr[100];

    int size;

    cout<<endl;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<endl;

    cout<<"Enter the Element in the Array :"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    MinMax(arr,size);
    cout<<endl;


  
  return 0;
}