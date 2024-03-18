#include<iostream>
using namespace std;

// Function for swap
void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function for selection sort
void selecting(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int s = i;
        for (int j = i + 1; j < n; j++) { 
            if (a[s] > a[j]) {
                s = j;
            }
        }
        swap(&a[i], &a[s]);
    }
}

// Function for binary search
//time complexity 0(logn)
int binary(int a[], int l, int h, int v) {
    if(l <= h) {
        int mid = l + (h - l) / 2;
        if (a[mid] == v) {
            return mid;
        } else if (a[mid] > v) {
            return binary(a, l, mid - 1, v); 
        } else {
            return binary(a, mid + 1, h, v); 
        }
    }
    return -1;
}

 // Function for binary search
// int binary(int a[], int n, int v) {
//     int l = 0;
//     int h = n - 1;
//     while (l <= h) {
//         int mid = l + (h - l) / 2;
//         if (a[mid] == v) {
//             return mid;
//         } else if (a[mid] > v) {
//             h = mid - 1; 
//         } else {
//             l = mid + 1; 
//         }
//     }
//     return -1;
// }

int main() {
    int arr[] = {10, 6, 3, 8, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    // Sorting
    selecting(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Binary search
    int idx = binary(arr, 0, n - 1, target);

    if (idx == -1) {
        cout << "Search is unsuccessful." << endl;
    } else {
        cout << "Search is successful, the index is " << idx << "." << endl;
    }
    return 0;
}
