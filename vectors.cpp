#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// print all elements in vector
void printVector(const vector<int>& v) {
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

// Add element at end
void appendElement(vector<int>& v, int val) {
    v.push_back(val);
    cout << val << " appended.\n";
}

// Remove last element
void popElement(vector<int>& v) {
    if (!v.empty()) {
        cout << v.back() << " removed.\n";
        v.pop_back();
    } else {
        cout << "Vector is empty!\n";
    }
}

// Retrieve element by index
void getElement(const vector<int>& v, int index) {
    if (index >= 0 && index < (int)v.size()) {
        cout << "Element at index " << index << " is " << v[index] << "\n";
    } else {
        cout << "Invalid index!\n";
    }
}

// Sort elements
void sortVector(vector<int>& v) {
    sort(v.begin(), v.end());
    cout << "Vector sorted.\n";
}

// Search for element
void searchElement(const vector<int>& v, int key) {
    auto it = find(v.begin(), v.end(), key);
    if (it != v.end())
        cout << key << " found at index " << (it - v.begin()) << "\n";
    else
        cout << key << " not found\n";
}

// Display first and last element
void showFirstLast(const vector<int>& v) {
    if (!v.empty()) {
        cout << "First: " << v.front() << ", Last: " << v.back() << "\n";
    } else {
        cout << "Vector is empty!\n";
    }
}

int main() {
    vector<int> nums;

    appendElement(nums, 10);
    appendElement(nums, 5);
    appendElement(nums, 20);

    printVector(nums);

    getElement(nums, 1);
    showFirstLast(nums);

    sortVector(nums);
    printVector(nums);

    searchElement(nums, 5);
    searchElement(nums, 99);

    popElement(nums);
    printVector(nums);

    cout << "Size: " << nums.size() << ", Capacity: " << nums.capacity() << "\n";

    return 0;
}
