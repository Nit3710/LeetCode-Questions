#include <iostream>
using namespace std;
int pivotFind(int n)
{
    int total = n * (n + 1) / 2;
    for (int pivot = 1; pivot <= n; pivot++)
    {
        int leftSum = pivot * (pivot + 1) / 2;
        int rightSum = total - leftSum + pivot;
        if (leftSum == rightSum)
        {
            return pivot;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = pivotFind(n);
    cout << "The pivot element is: " << result;
    return 0;
}