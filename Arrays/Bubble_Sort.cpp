#include<iostream>

using namespace std;

int BubbleSort(int arr[],int size){

    for(int round=1;round<size;round++){

        bool swapped=0;
        for(int i=0;i<size-1;i++){

            if (arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped=1;
            }
        }
        
        if (swapped==0){
            break;
        }
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
    BubbleSort(arr,size);
    fun(arr,size);
    return 0;
}