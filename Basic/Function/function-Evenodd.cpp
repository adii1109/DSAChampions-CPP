#include<iostream>
using namespace std;
  





// int evenodd(int n){

       

//         if (n%2==0){
//             cout<<"Even"<<endl;
//         }
//         else{
//             cout<<"Odd"<<endl;
//         }


//         return 0;
// }

bool isEven(int n){

    if (n&1){
        return 0;
    }

    else{
        return 1;
    }
}
 
int main()
{
 
        int n;
        cin>>n;

    //  evenodd(n);
        
       if (isEven(n)){
        cout<<"Even"<<endl;
       }
       else{
        cout<<"odd"<<endl; 
       }
 
return 0;
}
