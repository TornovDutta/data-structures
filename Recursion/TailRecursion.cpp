#include<iostream>
using namespace std;
void tail(int n){
    if(n>0){
        cout<<n<<endl;
        //recursion call is happend in end of the function
        //perform at call time
        return tail(n-1);
    }
}
int main(){
    int num=5;
    tail(num);
}