#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main(){
    char from='A',help='B',to='C';
    int n;
    cout<<"Enter the number of disk: "<<endl;
    cin>>n;
    toh(n,from,help,to);
}