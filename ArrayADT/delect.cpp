#include<iostream>
using namespace std;

//function for delect element form array
void delect(int a[],int &n,int p){
    for (int i = p; i <n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

//function for display array 
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
}

//driver code
int main() {
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    // Allocate memory for the array after getting the size from the user
    int *arr = new int[size];

    cout << "Enter the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the position where you wnat to add the value:";
    int pos;
    cin>>pos;

    //insert a element in arr
    delect(arr,size,pos-1);
    // Display array
   
    cout << "Display the array" << endl;
     display(arr,size);
    return 0;
}
