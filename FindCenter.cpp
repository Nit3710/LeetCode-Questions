#include <iostream>
#include <map>
#include <vector>
using namespace std;
int findCenter(vector<vector<int>> &edges)
{
    map<int, int> mp;
    for (int i = 0; i < edges.size(); i++)
    {
        mp[edges[i][0]]++;
        mp[edges[i][1]]++;
    }
    int nodes = 0;
    for (auto it : mp)
    {
        nodes++;
    }
    for (auto it : mp)
    {
        if (it.second == nodes - 1)
            return it.first;
    }
    return 1;
}
int main()
{
    vector<vector<int>> edges = {{1, 2}, {2, 3}, {4, 2}};
    cout << "the center of the graph is:" << findCenter(edges);
    return 0;
}
