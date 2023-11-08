#include<iostream>

using namespace std;


void FirstLastOccurence(int arr[],int size,int target){

    int s=0,e=size-1,mid,first=-1,last=-1;

    //first Occurence

    while(s<=e){

        mid=s+(e-1)/2;


        if (arr[mid]==target){
            first=mid;
            e=mid-1;
        }

        else if (arr[mid]<target){
            s=mid+1;
        }

        else{
            e=mid-1;
        }

    }

    //last Occurence
 
    while(s<=e){

        mid=s+(e-1)/2;


        if (arr[mid]==target){
            last=mid;
            s=mid+1;
        }

        else if (arr[mid]<target){
            s=mid+1;
        }

        else{
            e=mid-1;
        }

    }

    cout<<"First Occurence : "<<first<<endl;
    cout<<"last Occurence : "<<last<<endl;
    
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

    FirstLastOccurence(arr,size,1);
    
    return 0;
}