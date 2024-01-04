class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int &a : nums) {
            mp[a]++;
        }
        int count = 0;
        for (auto &a : mp) {
            int freq = a.second;
            if (freq == 1) {
                return -1;
            }
            count += ceil((double)freq / 3);
        }
        return count;
    }
};