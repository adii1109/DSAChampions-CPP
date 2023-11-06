#include<iostream>
using namespace std;




void Convert(){
    char ch;
    cin>>ch;
    cout<<endl;
  if (ch>=65 && ch<=90 ){
        ch=ch-'A'+'a';
        cout<<ch<<endl;
       
    }

    else if (ch>=97 && ch<=122){
         ch=ch-'a'+ 'A';
        cout<<ch<<endl;
    }
}

int main(){

    cout<<endl;


    for(int i=0;i<5;i++){
        Convert();
        cout<<endl;
    }

    
    return 0;
}
