#include<iostream>
using namespace std;



void SecondMax(int arr[],int size){

  int maxi=INT32_MIN,secondmaxi=INT32_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);

    }

    for(int j=0;j<size;j++){
        if (maxi==arr[j]){
            continue;
        }
        else{
            secondmaxi=max(secondmaxi,arr[j]);
        }
    }

    cout<<secondmaxi<<endl;
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

    SecondMax(arr,size);

}