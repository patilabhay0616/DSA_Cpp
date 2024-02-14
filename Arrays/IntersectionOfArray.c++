#include <iostream>
#include <vector>

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::vector<int> result;

    for (int i = 0; i < nums1.size(); ++i) {
        for (int j = 0; j < nums2.size(); ++j) {
            if (nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                break;
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2};

    std::vector<int> result = intersection(nums1, nums2);

    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
