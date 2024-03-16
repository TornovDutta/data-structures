#include<iostream>
using namespace std;
int main(){
    int * arr=new int[5];
    cout<<"Enter an array:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"The array is:";
    for (int  i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }


    //delete keyword use to delect the array
    //this block the data leak issue
    delete[] arr;
    
    
}
