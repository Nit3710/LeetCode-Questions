#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for (char& ch : s) {
            mp[ch]++;
        }
        for (char& ch : t) {
            mp[ch]--;
            if (mp[ch] < 0) {
                return ch;
            }
        }
        return 'x';
    }
};
int main(){
    Solution m;
    string s="abcd";
    string t="abcde";
    cout<<m.findTheDifference(s,t);
    return 0;
}