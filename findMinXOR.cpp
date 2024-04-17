#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>

using namespace std;
int findMinXOR(vector<int> &num)
{
    sort(num.begin(), num.end());
    int n = num.size();
    int minXOR = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        minXOR = min(minXOR, num[i] ^ num[i + 1]);
    }
    return minXOR;
}
int main()
{
    vector<int> num = {0, 1, 3, 6};
    cout << "the value of min-xor is: " << findMinXOR(num);
    return 0;
}