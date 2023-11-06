#include<iostream>
using namespace std;


int main(){

//Pattern Question:


    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    



    // int n;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     int count=n;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



// 2 ]

    // #
    // ##
    // ###
    // ####

    // int n;
    // cout<<"Enter a number:"<<endl;
    // cin>>n;

    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<"#";
    //     }
    //     cout<<endl;
    // }


// 3] 



    // 9 8 7
    // 6 5 4
    // 3 2 1   for n=3;

    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    int count=n*n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<count<<" ";

        }
    }
    
    return 0;
}