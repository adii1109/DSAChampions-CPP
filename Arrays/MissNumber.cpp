#include<iostream>
using namespace std;


// if size ==4 
// arr[size-1]={1,2,4};

// MissingNumber Size = {1+2+3+4}== 10 
// Original Array ={ 1+2+4}=7;

// Missing number == SizeAdd - Orignal array == 10 -7 ==3;




void MissingNumberInArray(int array[],int n){


        int sum1=0;
        for(int i=0;i<n;i++){
            sum1+=array[i];
        }
        
        int sum2=n*(n+1)/2;
        
        
        cout<<sum2-sum1<<endl;
       
       //Addition of Array 

      //   int Add=0 ,SizeAdd;
      //  for(int i=0;i<size-1;i++){
      //     Add+=arr[i];
          
      //     }

     
      //Addition of Size

      // for(int i=1;i<=size;i++){
      //   SizeAdd+=i;
        
      // }

      // SizeAdd=size*(size+1)/2;

     
      //MissingNumber

      // int MissingNumber=SizeAdd-Add;
      // cout<<"Missing Number is : " <<MissingNumber<<endl;

}



int main(){


  int arr[100];

    int size;

    cout<<endl;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<endl;

    cout<<"Enter the Element in the Array :"<<endl;

    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }

MissingNumberInArray(arr,size);

return 0;

}