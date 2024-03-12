#include<iostream>
#include<cmath>
using namespace std;

//time complexity O(1)
void swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
}

//time complexity O(n^2)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min=i;
        for (int j = i+1; j < n; j++) {
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

//time complexity O(logn)
int binary_search(int arr[],  int r, int x)
{
    int l=0;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

int main() {
    
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using selection sort
    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Target value
    int target;
    cout << "\nEnter the value you want to find: ";
    cin >> target;

    // Performing binary search
    int idx = binary_search(arr, n - 1, target);
    //time complexity O(nlogn)

    if (idx != -1) {
        cout << "\nElement found at index: " << idx << endl;
    } else {
        cout << "\nElement not found in the array." << endl;
    }
    return 0;
}


//Total time complexity O(logn+n^2)
