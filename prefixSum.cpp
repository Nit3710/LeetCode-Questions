#include <iostream>
#include <vector>
using namespace std;
vector<int> PrefixSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> prefixSum(n);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = nums[i] + nums[i - 1];
    }
    return prefixSum;
}
int main()
{
    int prefixSum;
    vector<int> nums{2, 3, 45, 56};
    vector<int> result = PrefixSum(nums);
    for (int sum : result)
    {
        cout << sum << " ";
    }
    return 0;
}
