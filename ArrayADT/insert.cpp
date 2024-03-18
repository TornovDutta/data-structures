#include<iostream>
using namespace std;

//function for insert array
void insert(int a[],int n,int p,int x){
    for(int i=n-1;i>=p;i--){
        a[i]=a[i-1];

    }
    a[p-1]=x;
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

    int value;
    cout<<"enter the value:";
    cin>>value;

    //insert a element in arr
    insert(arr,size,pos,value);
    // Display array
    cout << "Display the array" << endl;
    display(arr,size);

    return 0;
}
