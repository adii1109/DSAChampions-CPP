#include <iostream>
using namespace std;


void MinDist(int a[],int n,int x ,int y){

     int maxi=-1, mini =-1;
        
        for(int i=0;i<n;i++){
            
            if (a[i]==x)
                
                if (maxi==-1){
                    maxi=i+1;
                }
                else if (maxi>i ){
                    maxi=i+1;
                }
                   
            
            if (a[i]==y)
                
                    if (mini==-1){
                        mini=i+1;
                    }
                    else if (mini>i){
                        mini=i+1;
                    }
        }

        
        if (maxi==-1 || mini==-1)
            cout<< -1<<endl;
        
        else 
            if (maxi>mini)
                cout<< maxi-mini<<endl;
                
            else
                cout<< mini-maxi<<endl;
}

void input(int arr[],int size){

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}



int main(){

int arr[100];

cout<<"Enter the size of Array : " <<endl;

int size;
cin>>size;

cout<<"Enter the element in the Array : "<<endl;
input(arr,size);



cout<<"Enter the x and y"<<endl;
int x, y;
cin>>x>>y;

MinDist(arr,size,x,y);


}