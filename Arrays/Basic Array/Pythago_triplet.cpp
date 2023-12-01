#include<iostream>
#include<math.h>
using namespace std;



bool CheckTriplet(int arr[],int n){
     for (int a=0;a<n;a++){
	        
	        for (int b=a+1;b<n;b++){

                for(int c=b+1;c<n;c++){

                    int x=arr[a],y=arr[b],z=arr[c];


                    if ((x*x + y*y)==z*z){
                        return 1;
                    }
                }   
            }

     }
     return 0;}

	            
void input(int arr[],int size){

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){


      int arr[100];

    int size;

    cout<<endl;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<endl;

    cout<<"Enter the Element in the Array :"<<endl;

    input(arr,size);

    int ans=CheckTriplet(arr,size);

    cout<<"Ans : "<<ans<<endl;


    return 0;

}