#include<iostream>
using namespace std;

// Function for displaying the array
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
}

// Function for finding the total value
// Time complexity O(n)
int total(int a[], int size){
    if(size == 0) { 
        return 0;
    }
    return total(a, size - 1) + a[size - 1]; 
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

    // Find total
    int sum = total(arr, size);
    cout << "Total value of array is: " << sum << endl;

    // Find average
    if(size > 0) {
        cout << "Average value of array is: " << sum / size << endl;
    } else {
        cout << "Array size is 0, cannot calculate average." << endl;
    }

    // Display array
    cout << "Display the array" << endl;
    display(arr, size);

    // Deallocate memory
    delete[] arr;

    return 0;
}
