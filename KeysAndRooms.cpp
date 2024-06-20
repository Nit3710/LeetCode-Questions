#include <queue>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);

        queue<int> q;
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int room = q.front();
            q.pop();

            for (int key : rooms[room]) {
                if (!visited[key]) {
                    q.push(key);
                    visited[key] = true;
                }
            }
        }

        for (bool v : visited) {
            if (!v) return false;
        }

        return true;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> rooms = {{1, 3}, {3, 0, 1}, {2}, {1}};
    bool result = solution.canVisitAllRooms(rooms);
    cout << "Can visit all rooms: " << (result ? "true" : "false") << endl;
    return 0;
}