#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
// arr: the array to search in
// left: the starting index of the array
// right: the ending index of the array
// target: the value we are searching for
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        // Calculate the middle index
        int middle = left + (right - left) / 2;

        // If the target is at the middle
        if (arr[middle] == target) {
            return middle; // Return the index of the target
        }

        // If the target is smaller than the middle element, discard the right half
        if (arr[middle] > target) {
            right = middle - 1;
        }
        // If the target is larger than the middle element, discard the left half
        else {
            left = middle + 1;
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    // Sample sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Element to search for
    int target = 7;

    // Perform binary search
    int result = binarySearch(arr, 0, size - 1, target);

    // Output the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
