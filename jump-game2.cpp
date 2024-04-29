#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int current = 0;
        int farthest = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, nums[i] + i);
            if (i == current) {
                current = farthest;
                jumps++;
            }
        }
        return jumps;
    }
};
int main(){
    Solution s;
    vector<int>nums={2,3,1,1,4};
    cout<<"the minimum number of jumps are:"<<s.jump(nums);
    return 0;

}