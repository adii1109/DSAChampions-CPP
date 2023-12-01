#include<iostream>

using namespace std;


int RotatedMinArray(int arr[],int size){


    int start=0,end=size-1,mid;

    while(start<=end){

        mid=start+end-start/2;


        if (arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){

            return arr[mid];
        }


        else if (arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){

            start=mid+1;
        }

        else{
            end=mid-1;
        }

    }


}


void input(int arr[],int size){

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


int main(){

    int arr[1000];

    int size;
    cout<<"Enter the size : "<<endl;
    cin>>size;

    cout<<"Enter the element in the array : "<<endl;

    input(arr,size);


    int ans=RotatedMinArray(arr,size);

    cout<<"Answer "<< ans<<endl;
    return 0;
}