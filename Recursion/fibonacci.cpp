#include<iostream>
using namespace std;
void fib(int f,int s,int n){
    if(n>1){
        cout<<s<<" ";
        fib(s,f+s,n-1);
    }
}
int main(){
    int first=0,second=1;
    int num;
    cout<<"enter the digit of number to print: ";
    cin>>num;
    cout<<"fibonacci seres is: "<<endl;
    cout<<first<<" ";
    fib(first,second,num);
    return 0;
}