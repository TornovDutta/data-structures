#include<iostream>
using namespace std;

void intersection(int a[], int b[], int na, int nb) {
    int i = 0; // Pointer for array a
    int j = 0; // Pointer for array b

    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            // Increment pointer for array a
            i++;
        } else if (a[i] > b[j]) {
            // Increment pointer for array b
            j++;
        } else {
            // Both elements are equal (intersection found)
            cout << a[i] << " ";
            i++; // Move pointer for array a
            j++; // Move pointer for array b
        }
    }
}

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int b[] = {4, 8, 12};
    int na = sizeof(a) / sizeof(a[0]); // Size of array a
    int nb = sizeof(b) / sizeof(b[0]); // Size of array b

    cout << "Intersection of arrays: ";
    intersection(a, b, na, nb);
    cout << endl;

    return 0;
}
