
#include<iostream>
using namespace std;

int SelectionSort(int arr[],int size){

    for(int i=1;i<size;i++){

        for(int j=i;j>=1;j--){

            if (arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
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
    SelectionSort(arr,size);
    fun(arr,size);
    return 0;
}