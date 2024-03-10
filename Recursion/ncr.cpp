#include<iostream>
using namespace std;
int NCR(int n,int r){
    if(r==0||n==r){
        return 1;
    }else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}
int main(){
    int n,r;
    cout<<"enter the value of n and r: "<<endl;
    cin>>n>>r;
    cout<<"answer is: "<<NCR(n,r)<<endl;
}