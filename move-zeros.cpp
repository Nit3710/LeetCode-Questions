#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }
    while (nonZeroIndex < nums.size())
    {
        nums[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}
void printVector(const vector<int> &nums)
{
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    cout << "Original array: ";
    printVector(nums);

    moveZeroes(nums);

    cout << "After moving zeros: ";
    printVector(nums);

    return 0;
}
