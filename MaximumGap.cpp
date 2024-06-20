#include <iostream>
#include <vector>
using namespace std;
int maximumGap(vector<int> &nums)
{
    int n = nums.size();
    if (n < 2)
    {
        return 0;
    }
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = abs(nums[i] - nums[i - 1]);
        result = max(result, diff);
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 6, 9, 1};
    cout << "The maximum gap is: " << maximumGap(nums) << endl;
    return 0;
}