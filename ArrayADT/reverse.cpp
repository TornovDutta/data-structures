#include<iostream>
using namespace std;

// Function for displaying the array
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
}

// Function for swapping two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function for reversing the array
// Time complexity O(n)
void reverse(int *a, int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        swap(&a[i], &a[j]);
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

    // Reverse array
    reverse(arr, size);

    // Display array
    cout << "Reversed array:" << endl;
    display(arr, size);

    // Deallocate memory
    delete[] arr;

    return 0;
}
