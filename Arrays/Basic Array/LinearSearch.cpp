#include<iostream>
using namespace std;



bool LinearSearch(int arr[],int size,int search){

    for (int i=0;i<size;i++){
        if (arr[i]==search){
            return 1;
        }
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

    cout<<endl;
    int search;
    cout<<"Enter Search Element"<<endl;
    cin>>search;
    cout<<endl;


    if(LinearSearch(arr,size,search)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    return 0;
}