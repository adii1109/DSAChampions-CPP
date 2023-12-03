#include<iostream>
using namespace std;

void input(int arr[],int size){

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


void Sum(int arr[], int size){

    int sum =0;
    for(int i=0;i<size;i++){

        sum+=arr[i];
    }


    cout<<"Sum of All array Element is : "<<sum<<endl;
}

int main(){


  int arr[100];


    int size;
    cout<<"Enter The size of array : "<<endl;
    cin>>size;


    cout<<"Enter the element in the array "<<endl;


    input(arr,size);
    Sum(arr,size);


    return 0;





}