#include <iostream>
using namespace std;

int countUniqueDigits(int n, int curr, int ans, int count, int availableDigits)
{

    // base case
    if (curr > n)
    {
        return ans;
    }
    count *= availableDigits;
    ans += count;

    // recursive call
    return countUniqueDigits(n, curr + 1, ans, count, availableDigits - 1);
}
int countUniqueDigits(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 10;
    }
    return countUniqueDigits(n, 2, 10, 9, 9);
}
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    cout << "Count of total number of unique digits: " << countUniqueDigits(n);
    return 0;
}