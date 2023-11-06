#include<iostream>
using namespace std;


void print (int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


void  RotateArrayBy1(int arr[],int size){


  // Using Second Array first Method
    // int harr[1000];

    // int k=0;
    // for(int i=1;i<size;i++){
    //     harr[i]=arr[k];
    //     k++;
    // }

    // harr[0]=arr[size-1];
    // print (harr, size);


    //Second Method (copy)

    int temp=arr[size-1];

    for(int i=size;i>=1;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=temp;


    
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


    RotateArrayBy1(arr,size);
    print (arr,size);

}