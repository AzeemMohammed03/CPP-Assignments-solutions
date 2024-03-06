#include <iostream>
using namespace std;

// Function to check if arr2[] is a subset of arr1[]
bool isSubset(int arr1[], int m, int arr2[], int n) {
    // Traverse each element of arr2[]
    for (int i = 0; i < n; i++) {
        bool found = false;

        // Check if the current element of arr2[] is present in arr1[]
        for (int j = 0; j < m; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        // If the current element of arr2[] is not found in arr1[], arr2 is not a subset
        if (!found) {
            return false;
        }
    }

    // If all elements of arr2[] are found in arr1[], arr2 is a subset
    return true;
}

int main() {
    // Example arrays
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 4, 6};

    // Calculate the size of the arrays
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Check if arr2 is a subset of arr1
    if (isSubset(arr1, m, arr2, n)) {
        cout << "arr2 is a subset of arr1";
    } else {
        cout << "arr2 is not a subset of arr1";
    }

    return 0;
}
