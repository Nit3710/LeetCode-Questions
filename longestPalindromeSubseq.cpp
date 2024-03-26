#include <iostream>
using namespace std;
int solve(string &s, int i, int j)
{
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return 1;
    }
    if (s[i] == s[j])
    {
        return 2 + solve(s, i + 1, j - 1);
    }
    else
    {
        return max(solve(s, i + 1, j), solve(s, i, j - 1));
    }
}
int main()
{
    string s = "babvaab";
    int res = solve(s, 0, s.length() - 1);
    cout << "the longest palindrome subsequence is: " << res;
    return 0;
}