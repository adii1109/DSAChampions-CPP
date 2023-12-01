#include<iostream>

using namespace std;


int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        int size=r+1;
        
        for(int round1=1;round1<size;round1++){
            
            for(int i=l;i<size-1;i++){
                
                if (arr[i]>arr[i+1]){
                    
                    swap(arr[i],arr[i+1]);
                }
            }
        }
        
        int ans=arr[k-1];
        
        return  ans; }

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


    int l,r,k;

    cout<<"l,r,k"<<endl;

    cin>>l>>r>>k;

    kthSmallest(arr,l,r,k);
    fun(arr,size);

    cout<<endl;
}