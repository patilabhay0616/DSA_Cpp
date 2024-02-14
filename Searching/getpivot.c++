#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int low = 0, high = n-1;
    int mid = low + (high - low)/2;
    
    while(low < high) {
        if(arr[mid] >= arr[0]) {
            low = mid + 1;
        } else {
            high = mid;
        }
        mid = low + (high - low)/2;
    }   
    return low;
}

int main() {
    int arr[5] = {4, 5, 6, 7, 0};
    cout << "pivot is at index: " << getPivot(arr, 5) << endl;
    return 0;
}
