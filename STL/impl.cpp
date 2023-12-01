#include<iostream>
#include<vector>
using namespace std;



int main(){


    //create vector 

    vector<int>v;

    //size and capacity

    cout<<"Size of array : "<<v.size()<<endl;
    cout<<"capacity of array : "<<v.capacity()<<endl;


    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of array : "<<v.size()<<endl;
    cout<<"capacity of array : "<<v.capacity()<<endl;


    //update value
    v[1]=5;

    // ====================================================================================

    vector<int>v1(5,1);

    cout<<"For V1 : "<<endl;
    cout<<"Size of array : "<<v1.size()<<endl;
    cout<<"capacity of array : "<<v1.capacity()<<endl;

    // let one element in v1 and checking capacity

    v1.push_back(9);


    cout<<"For V1 : "<<endl;
    cout<<"After adding 9"<<endl;
    cout<<"Size of array : "<<v1.size()<<endl;
    cout<<"capacity of array : "<<v1.capacity()<<endl; // Capacity will be 10;

    vector<int>v3={1,2,3, 5,6};

    cout<<"For V3 : "<<endl;
    cout<<"Size of array : "<<v3.size()<<endl;
    cout<<"capacity of array : "<<v3.capacity()<<endl;

    //delete or erase element from vector

    vector<int>v4={1,2,3,5,6};


    cout<<"For V4 : "<<endl;
    cout<<"Size of array : "<<v4.size()<<endl;
    cout<<"capacity of array : "<<v4.capacity()<<endl;

    v4.pop_back();
    cout<<"Size of array : "<<v4.size()<<endl;
    cout<<"capacity of array : "<<v4.capacity()<<endl;

    //at index erase method
    
    //  vector<int>v3={1,2,3, 5,6};
    v3.erase(v3.begin()+2);

    cout<<"After erasing v3 element looking like"<<endl;

    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }

    cout<<"lets see , method of adding element in vector"<<endl;

    v3.insert(v3.begin()+2,50);
    cout<<"After adding element in v3 "<<endl;

    for(auto i=0;i<v3.size();i++){

        cout<< i<<" value : "<<v3[i]<<endl;
    }

    // ----------------------------------------------------------------------

    // v3.clear();  remove all element ,capacity will remain constant;
    
    cout<<endl;
    return 0;
}