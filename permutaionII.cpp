#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<vector<int>> result;
    int n;

    void solve(unordered_map<int, int> &mp, vector<int> &temp)
    {
        if (temp.size() == n)
        {
            result.push_back(temp);
        }
        for (auto &pair : mp)
        {
            int num = pair.first;
            int count = pair.second;
            if (count == 0)
            {
                continue;
            }
            temp.push_back(num);
            mp[num]--;
            solve(mp, temp);
            temp.pop_back();
            mp[num]++;
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        n = nums.size();
        unordered_map<int, int> mp;
        for (int &num : nums)
        {
            mp[num]++;
        }
        vector<int> temp;
        solve(mp, temp);
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> permutations = solution.permuteUnique(nums);
    for (const auto &perm : permutations)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
