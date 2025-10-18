#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k, n;
    
    // Find the Kth max and Kth min element
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the value of K (for Kth max/min): ";
    cin >> k;
    
    // Check if k is valid
    if (k <= 0 || k > n) {
        cout << "Invalid value of K.\n";
        return 1;
    }
    
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());
    
    // Kth minimum element will be at index k-1
    cout << "The " << k << "th minimum element is: " << arr[k - 1] << "\n";
    
    // Kth maximum element will be at index n-k
    cout << "The " << k << "th maximum element is: " << arr[n - k] << "\n";
    
    return 0;
}