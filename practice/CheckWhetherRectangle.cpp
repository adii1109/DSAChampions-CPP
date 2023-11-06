#include<iostream>
using namespace std;



// Rectanlge:

// breath == breath , length == length ;


bool CheckRectangle(int a, int b, int c, int d){

    if ((a==b && c==d) || (a==c && b==d) ||  (a==d) && (b==c))
    return 1;

    else
    return 0;

}

int main(){

    int a, b,c,d;
    cin>>a>>b>>c>>d;
    cout<<endl;


if (CheckRectangle(a,b,c,d)){
    cout<<"Rectangle"<<endl;
}
else{
    cout<<"Not-Rectangle"<<endl;
}
    return 0;

}