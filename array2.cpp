#include <iostream>
using namespace std;

void fillInArray(int arr[], int size);
int calculateSum(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int search(int a[], int arrSize, int target); 
bool compareArrays(int arr1[], int arr2[], int size);
int main()
{
    int x[5];
    int size = 5;

    
    fillInArray(x, size);

    
    int totalSum = calculateSum(x, size);
    int maxValue = findMax(x, size);
    int minValue = findMin(x, size);
    int comparisonResult = compareArrays(x, x, size);


    
    int targetValue;
    cout << "\nEnter a number to search for: ";
    cin >> targetValue;

    int index = search(x, size, targetValue);

    
    cout << "\n--- Results ---" << endl;
    cout << "The sum of my array is: " << totalSum << endl;
    cout << "The maximum value is: " << maxValue << endl;
    cout << "The minimum value is: " << minValue << endl;
    cout << "Array compared with itself: "
         << (comparisonResult ? "True" : "False") << endl;

    if (index != -1) {
        cout << "Value " << targetValue << " found at index: " << index << endl;
    }
    else {
        cout << "Value " << targetValue << " not found in the array." << endl;
    }
    

    return 0;
}


void fillInArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << "Please enter value number " << i << ": ";
        cin >> arr[i];
    }
}

int calculateSum(int arr[], int arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int arrSize) {
    int maxVal = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMin(int arr[], int arrSize) {
    int minVal = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}


int search(int a[], int arrSize, int target) {
    for (int i = 0; i < arrSize; i++) {
        if (a[i] == target) {
            return i; 
        }
    }
    return -1; 
}

bool compareArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
