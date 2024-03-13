//clear bit help to set 0 to pos
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int pos=1;
    int bitmask=1<<pos;
    int newbitmask=~(bitmask);

    int number=newbitmask&n;
    cout<<number;
}