//update use to set and clear bit
#include<iostream>
using namespace std;
int main(){
    //clear bit
    int n=7;
    int pos=1;
    int bitmask=1<<pos;
    int newbitmask=~(bitmask);

    int number=newbitmask&n;
    cout<<"clear bit answer: "<<number<<endl;

    //set bit
    int num=5;
    int posi=1;
    int bitmasks=1<<posi;


    int number2=bitmasks|num;
    cout<<"set bit answer: "<<number2<<endl;
}