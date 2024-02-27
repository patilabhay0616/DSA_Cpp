#include<iostream>
using namespace std;

int firstoccurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;   
    int ans;

    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans =  mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }     
    return ans;

}


#include<iostream>
using namespace std;

int lastoccurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;   
    int ans;

    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans =  mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }     
    return ans;

}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout<<"the first occurence of 3 is at index : " << firstoccurence(arr, 8, 3) << endl;
     cout<<"the last occurence of 3 is at index : " << lastoccurence(arr, 8, 3) << endl;
    return 0;
}