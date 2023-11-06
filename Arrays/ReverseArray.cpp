#include<iostream>
using namespace std;


void print(int arr[],int size){

    for (int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int ReverseArray(int arr[],int size){

    for (int i=0, j=size-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }

    return 0;
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
    
    ReverseArray(arr,size);
    print (arr,size);
}