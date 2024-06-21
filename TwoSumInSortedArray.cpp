#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int i=1;
    int j=n;
    while(i<j){
        int temp=numbers[i]+numbers[j];
        if(temp==target){
            return {i,j};
        }
        if(temp>target){
            j--;
        }
        else{
            i++;
        }
    }
    return {};
}
int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int>result=twoSum(numbers, target);
    if(!result.empty()){
        cout<<result[0]<<" "<<result[1]<<endl;
    }
    else{
        cout<<"no element found"<<endl;
    }
    return 0;
}