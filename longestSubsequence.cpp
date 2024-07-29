#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int> &nums, int curr, int prev)
{
    if (curr == n)
    {
        return 0;
    }

    // include
    int take = 0;
    if (prev == -1 || nums[curr] > nums[prev])
    {
        take = 1 + solve(n, nums, curr + 1, curr);
    }
    // exclude

    int nottake = 0 + solve(n, nums, curr + 1, prev);

    int result = max(take, nottake);
    return result;
}
int longestSubsequence(vector<int> &nums)
{
    int n = nums.size();
    return solve(n, nums, 0, -1);
}

int main()
{
    vector<int> nums = {4, 2, 5, 8, 3, 10};
    int ans = longestSubsequence(nums);
    cout << "The longest increasing subsequence is: " << ans;
    return 0;
}