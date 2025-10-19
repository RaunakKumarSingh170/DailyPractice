#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find and display union of two arrays
void findUnion(int arr1[], int size1, int arr2[], int size2) {
    vector<int> unionResult;
    
    // Add all elements from first array
    for (int i = 0; i < size1; i++) {
        unionResult.push_back(arr1[i]);
    }
    
    // Add elements from second array that are not already present
    for (int i = 0; i < size2; i++) {
        bool found = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unionResult.push_back(arr2[i]);
        }
    }
    
    // Display union
    cout << "Union: ";
    for (int i = 0; i < unionResult.size(); i++) {
        cout << unionResult[i] << " ";
    }
    cout << endl;
}

// Function to find and display intersection of two arrays
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    vector<int> intersectionResult;
    
    // Find common elements
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                intersectionResult.push_back(arr1[i]);
                break;
            }
        }
    }
    
    // Display intersection
    cout << "Intersection: ";
    for (int i = 0; i < intersectionResult.size(); i++) {
        cout << intersectionResult[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;
    
    // Input for first array
    cout << "Enter the size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " elements for first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    // Input for second array
    cout << "Enter the size of second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " elements for second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    
    cout << "\nResults:\n";
    cout << "========\n";
    
    // Find and display union
    findUnion(arr1, size1, arr2, size2);
    
    // Find and display intersection
    findIntersection(arr1, size1, arr2, size2);
    
    return 0;
}