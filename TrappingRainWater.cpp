#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getLeftMax(vector<int> &height, int &n)
    {
        vector<int> left_max(n);
        left_max[0] = height[0];
        for (int i = 1; i < n; i++)
        {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        return left_max;
    }
    vector<int> getRightMax(vector<int> &height, int &n)
    {
        vector<int> right_max(n);
        right_max[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(right_max[i + 1], height[i]);
        }
        return right_max;
    }
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> left_max = getLeftMax(height, n);
        vector<int> right_max = getRightMax(height, n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int h = min(left_max[i], right_max[i]) - height[i];
            sum += h;
        }
        return sum;
    }
};
int main()
{
    vector<int> height = {4,2,0,3,2,5};
    Solution s;
    int result = s.trap(height);
    cout << "The trapping rain water is: " << result << " ";
    return 0;
}