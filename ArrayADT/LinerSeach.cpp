#include<iostream>
using namespace std;

//function for linear search
//time complexity  o(n)
int linear(int a[],int n,int v){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==v){
            return i;
        }
    }
    return -1;
    
}

//drive code
int main(){
    int arr[]={1,23,45,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    //linear search
    int idx=linear(arr,n,target);

    if(idx==-1){
        cout<<"search is unsuccessful ";
    }else{
        cout<<"search is successful ,the index is "<<idx;
    }
    return 0;
}