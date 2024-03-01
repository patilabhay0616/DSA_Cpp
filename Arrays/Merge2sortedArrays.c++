#include<iostream>
#include<vector>
using namespace std;    

void merge(int arr1[], int arr2[], int n , int m, int arr3[]) {
    int i = 0 , j = 0 , k = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } 
        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    // copy the remaining elements of arr1[] if there are any
    while(i < n) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    //copy the remaining elements of arr2[] if there are any
    while(j < m) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n) {
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
    }
int main(){
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[9] = {0};

    merge(arr1, arr2, 5, 4, arr3);
    print(arr3, 9);
}

