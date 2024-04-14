#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int n = people.size();
        int low = 0;
        int high = n - 1;
        int ans = 0;
        sort(people.begin(), people.end());
        while (high >= low)
        {
            int curr = people[high];
            if (curr + people[low] <= limit)
            {
                ans++;
                high--;
                low++;
            }
            else
            {
                ans++;
                high--;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> people = {1, 2};
    int limit = 3;
    cout << "number of rescue boats are: " << s.numRescueBoats(people, limit);

    return 0;
}