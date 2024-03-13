//set bit set value of 1 is pos and genaerted a new number
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int pos=1;
    //position cout in right to left starting with 0 
    int bitmask=1<<pos;
    //bitmask help to make a number which has is pos position
    int newnumber=bitmask|n;
    cout<<newnumber;
}