#include<iostream>

using namespace std;



int BinarySearch(int arr[],int n,int key){

    int start=0,end=n-1,mid;

    while(start<=end){

        //mid 
        mid=start+end-start;

        if (arr[mid]==key){
            return mid;
            break;
        }

        else if (arr[mid]<key){
            end=mid-1;
        }

        else{
            start=mid+1;
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

    int ans=BinarySearch(arr,size,92);

    cout<<"Answer: "<<ans<<endl;
    return 0;
}