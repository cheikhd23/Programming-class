#include <iostream>
using namespace std;

void menu() {
    cout << "\n--- MENU ---\n";
    cout << "1) Linear search\n";
    cout << "2) Insertion sort\n";
    cout << "3) Exit\n";
}

void fill_array(int arr[], int size) {
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void print_array(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 5 == 0) cout << "\n";
    }
    if (size % 5 != 0) cout << "\n";
}

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

void insert_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}

int main() {
    const int kSize = 9;
    int a[kSize];
    int choice;

    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                fill_array(a, kSize);
                int key;
                cout << "Enter the key you want to search: ";
                cin >> key;
                int index = linear_search(a, kSize, key);
                if (index == -1)
                    cout << "The key " << key << " is not in array\n";
                else
                    cout << "The key " << key << " is #" << (index + 1) << " element in array\n";
                break;
            }
            case 2:
                fill_array(a, kSize);
                insert_sort(a, kSize);
                cout << "After sort, the array is:\n";
                print_array(a, kSize);
                break;
            case 3:
                cout << "Thank you for using the array functions\n";
                break;
            default:
                cout << "Wrong choice. Please choose from the menu.\n";
        }
    } while (choice != 5);

    return 0;
}
