#include <iostream>
#include <vector>

using namespace std;

int getPivot(vector<int>& arr, int n) {
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;

    while (left < right) {
        if (arr[mid] >= arr[0]) {
            left = mid + 1;
        } else {
            right = mid;
        }
        mid = left + (right - left) / 2;
    }
    return left;
}

int binarySearch(vector<int>& arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element to search for: ";
    cin >> k;

    int result = search(arr, n, k);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
