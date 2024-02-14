#include <iostream>
using namespace std;

void Reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[5] = {9,-4,64,78,-10};
    int brr[6] = {17,28,48,98,-56,89};

    Reverse(arr,5);
    Reverse(brr,6);

    printArray(arr, 5);
    printArray(brr, 6);  
    return 0;  
} 
