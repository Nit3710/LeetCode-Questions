#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    bool isPrime(int num)
    {
        if (num <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int maxPrimeDifference(vector<int> nums)
    {
        int n = nums.size();
        vector<int> pi;
        for (int i = 0; i < n; i++)
        {
            if (isPrime(nums[i]))
            {
                pi.push_back(i);
            }
        }
        int maxdiff = 0;
        if (pi.size() > 1)
        {
            maxdiff = max(maxdiff, pi[pi.size() - 1] - pi[0]);
        }
        return maxdiff;
    }
};
int main()
{
    vector<int> nums = {4, 2, 9, 5, 3};
    Solution s;
    cout << "the maximum prime difference is:" << s.maxPrimeDifference(nums) << endl;
    return 0;
}