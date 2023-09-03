#include<iostream>
using namespace std;
  
 
 
int main()
{
 
//1]
    // ____*
    // ___**
    // __***
    // _****
    // *****


        // int n;
        // cin>>n;

        // for(int row=1;row<=n;row++){
        //     for (int space=n-row;space>=1;space--){
        //         cout<<"_";
        //     }
        //     for(int col=1;col<=row;col++){
        //         cout<<'*';
        //     }
        //     cout<<endl;
        // }
 

 //2]


        //  ****
        //   ***
        //   **
        //    *

        // int n;
        // cin>>n;


        // for(int row=n;row>=1;row--){
        //     //space
        //     for(int space=n-row;space>=1;space--){
        //         cout<<" ";
        //     }
        //     //for star
        //     for (int col=row;col>=1;col--){
        //         cout<<"*";
        //     }

        //     cout<<endl;
        // }


//3]

    //    1
    //   121
    //  12321
    // 1234321

    // int n;
    // cin>>n;

    // for(int row=1;row<=n;row++){

    //     //for space
    //     for(int space=n-row;space>=1;space--){
    //         cout<<" ";
    //     }

    //     //for star
    //     for(int col=1;col<=row;col++){
    //         cout<<col;
    //     }

    //     //for rightsight
    //     for (int rs=row-1;rs>=1;rs--){
    //         cout<<rs;
    //     }

    //     cout<<endl;
    // }



//4]

        
        //Dabbang Pattern :

        // 1234554321
        // 1234**4321
        // 123****321
        // 12******21
        // 1********1

        // int n;
        // cin>>n;

        // int star=0;
        // for(int row=n;row>=1;row--){

        //     //for first triangle
        //     for(int col=1;col<=row;col++){
        //         cout<<col;
        //     }

        //     //for middle star triangle
        //     for(int st=1;st<=star;st++){
        //         cout<<"*";
        //     }
            

        //     //for last triangle
        //     for (int lt =row;lt>=1;lt--){
        //         cout<<lt;
        //     }
        //   cout<<endl;
        //   star+=2;
        // }
return 0;
}