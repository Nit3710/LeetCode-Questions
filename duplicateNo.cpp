//time complexity -o(n)
//space complexity- o(1)
#include <iostream>
#include <vector>
using namespace std;
int duplicateNo(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main()
{
    vector<int> nums = {3,1,3,4, 2};
    cout << "The duplicate number is: " << duplicateNo(nums);
    return 0;
}