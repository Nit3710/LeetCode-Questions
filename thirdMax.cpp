#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <queue>

using namespace std;
int thirdMax(vector<int> &nums)
{
    unordered_set<int> st;
    sort(nums.begin(), nums.end());
    priority_queue<int> maxheap;
    for (int n : nums)
    {
        maxheap.push(n);
    }
    if (maxheap.size() < 3)
    {
        return maxheap.top();
    }
    for (int i = 0; i < 2; i++)
    {
        maxheap.pop();
    }
    return maxheap.top();
}
int main()
{
    vector<int> nums = {1, 7, 3, 6, 5};
    cout << "The third maximum element is: " << thirdMax(nums) << endl;

    return 0;
}