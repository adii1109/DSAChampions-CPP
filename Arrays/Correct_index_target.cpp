#include<iostream>
using namespace std;

void input(int arr[],int size){

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


void CorrectIndextarget(int arr[],int n,int target){


    int s=0,e=n-1,mid,index=n;

    while(s<=e){

        mid=s+e-s/2;

        if (arr[mid]==target){
            index=mid;
            break;
        }

        else if (arr[mid]>target){

            index=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
    }

    cout<<"Correct Index: "<<index<<endl;
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


CorrectIndextarget(arr,size,17);


}