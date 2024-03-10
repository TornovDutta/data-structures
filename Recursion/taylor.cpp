#include<iostream>
using namespace std;

//using horner,s rule
float taylor(float x,float n){
    static float s=1;
    if(n==0){
        return s;
    }
    s=(1+x/n)*s;
    return taylor(x,n-1);
}

//drive code
int main(){
    cout<<taylor(2,3);
    return 0;
}