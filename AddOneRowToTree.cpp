#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    TreeNode *add(TreeNode *root, int val, int depth, int curr)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (curr == depth - 1)
        {
            TreeNode *lefttemp = root->left;
            TreeNode *righttemp = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = lefttemp;
            root->right->right = righttemp;
            return root;
        }
        root->left = add(root->left, val, depth, curr + 1);
        root->right = add(root->right, val, depth, curr + 1);
        return root;
    }
    TreeNode *addOneRow(TreeNode *root, int val, int depth)
    {
        if (depth == 1)
        {
            TreeNode *newroot = new TreeNode(val);
            newroot->left = root;
            return newroot;
        }
        int curr = 1;
        return add(root, val, depth, curr);
    }
};
int main()
{
    Solution s;
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(5);
    int val = 1;
    int depth = 2;
    cout << s.addOneRow(root, val, depth);
    return 0;
}