#include<iostream>

using namespace std;


int PeakElement(int arr[],int n){


    int start=0, end =n-1,mid;

    while(start<=end){

        mid=end+(start-end)/2;


        // Peak Element 

        if (mid==0 || arr[mid]>arr[mid+1] && mid ==n-1 || arr[mid]>arr[mid-1]){

            return mid;
        }


        //Right side

        else if (arr[mid]>arr[mid-1]){

            start=mid+1;
        }

        else{

            end=mid-1;
        }
    }

    return -1;
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


    int ans=PeakElement(arr,size);

    cout<<"Answer "<< ans<<endl;
    return 0;
}