#include<iostream>
using namespace std;

// Function for displaying the array
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
}

// Function for finding the maximum value
// Time complexity O(n)
int findMax(int a[], int size){
    int maxVal = a[0];
    for (int i = 1; i < size; i++) {
       if(a[i] > maxVal) {
            maxVal = a[i];
       }
    }
    return maxVal;
}

// Function for finding the minimum value
// Time complexity O(n)
int findMin(int a[], int size){
    int minVal = a[0];
    for (int i = 1; i < size; i++) {
       if(a[i] < minVal) {
            minVal = a[i];
       }
    }
    return minVal;
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

    // Find maximum
    int maxVal = findMax(arr, size);
    cout << "Max element of array is: " << maxVal << endl;

    // Find minimum
    int minVal = findMin(arr, size);
    cout << "Min element of array is: " << minVal << endl;

    // Display array
    cout << "Display the array" << endl;
    display(arr, size);

    // Deallocate memory
    delete[] arr;

    return 0;
}
