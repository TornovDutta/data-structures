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

void rotation(int *a, int size) {
    // Store the first element
    int temp = a[0];
    // Shift all elements one position to the left
    for (int i = 1; i < size; i++) {
        a[i - 1] = a[i];
    }
    // Place the first element at the end
    a[size - 1] = temp;
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
    rotation(arr, size);

    // Display array
    cout << "rotated array:" << endl;
    display(arr, size);

    // Deallocate memory
    delete[] arr;

    return 0;
}
