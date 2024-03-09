#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int longestSubstring(string s)
{
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> charIndex;
    for (int end = 0; end < s.length(); end++)
    {
        if (charIndex.find(s[end]) != charIndex.end() && start <= charIndex[s[end]])
        {
            start = charIndex[s[end]] + 1;
        }
        else
        {
            maxLength = max(maxLength, end - start + 1);
        }
        charIndex[s[end]] = end;
    }
    return maxLength;
}
int main()
{
    string s = "abcabcbb";
    cout << "The longest Substring without repeating character is: " << longestSubstring(s) << endl;
    return 0;
}