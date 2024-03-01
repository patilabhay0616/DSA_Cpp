#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != 0) {
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sol.moveZeroes(nums);

    cout << "After moving zeroes to the end: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
