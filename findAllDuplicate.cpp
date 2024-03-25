#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllDuplicate(vector<int> &nums) {
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int idx = abs(num) - 1; // Use abs to handle negative numbers
        if (nums[idx] < 0) {
            result.push_back(abs(num)); // Push the absolute value of num
        } else {
            nums[idx] *= -1;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = findAllDuplicate(nums);
    
    cout << "Duplicate numbers are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
