#include<iostream>
using namespace std;

// Function for displaying the array
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
}

// Function for setting array element
//time complexity O(1)
void set(int *a, int index, int size, int x){
    if(index >= 0 && index < size){
        a[index] = x;
    }
}

// Driver code
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

    // Set element
    cout << "Enter an element: ";
    int n;
    cin >> n;
    set(arr, 3, size, n);

    // Display array
    cout << "Display the array" << endl;
    display(arr, size);

    // Deallocate memory
    delete[] arr;

    return 0;
}
