#include<iostream>
using namespace std;
int main(){
    int n=5;
    int pos=2;
    //position cout in right to left starting with 0 
    int bitmask=1<<pos;
    //bitmask help to make a number which has is pos position
    if(bitmask&n==0){
        cout<<"the bit is zero";
    }else{
        cout<<"the bit is one";
    }
}