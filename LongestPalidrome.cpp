#include <iostream>
#include <unordered_map>
using namespace std;
int longestPalindrome(string &s)
{
    unordered_map<char, int> mp;
    int result = 0;
    bool odd = false;
    for (char &ch : s)
    {
        mp[ch]++;
    }
    for (auto &c : mp)
    {
        if (c.second % 2 == 0)
        {
            result += c.second;
        }
        else
        {
            odd = true;
            result += c.second - 1;
        }
    }
    if (odd)
    {
        result++;
    }
    return result;
}
int main()
{
    string s = "abccccdd";
    cout << longestPalindrome(s) << endl;
    return 0;
}