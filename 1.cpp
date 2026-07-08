#include <bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int smallestElement(int arr[], int n) {
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int searchElement(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}
int countEven(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {4,7,2,9,1};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int largest = largestElement(arr, 5);
    cout << "Largest element: " << largest << endl;
    int smallest = smallestElement(arr, 5);
    cout << "Smallest element: " << smallest << endl;
    int num = 8;
    if (searchElement(arr, 5, num)) {
        cout << num << " is present in the array." << endl;
    } else {
        cout << num << " is not present in the array." << endl;
    }
    int evenCount = countEven(arr, 5);
    if (evenCount > 0) {
        cout << "There are " << evenCount << " even numbers in the array." << endl;
    } else {
        cout << "There are no even numbers in the array." << endl;
    }
    return 0;
}