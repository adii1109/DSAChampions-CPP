#include<iostream>

using namespace std;


int  SelectionSort(int arr[],int n){

    //Increasing Order: 
    
    for(int round=0;round<n-1;round++){

        int index=round;

        for(int i=round+1;i<n;i++){
            if (arr[i]<arr[index]){
                index=i;
            }
        }

        swap(arr[round],arr[index]);
    }


    return 0;
}
void fun(int arr[],int size){

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  // arr[i]=1;}
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
    SelectionSort(arr,size);
    fun(arr,size);
    return 0;
}