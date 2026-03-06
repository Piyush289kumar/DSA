#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int data)
    {
        val = data;
        left = right = nullptr;
    }
};

TreeNode *buildTree(int data)
{
    if (data == -1)
        return nullptr;

    TreeNode *root = new TreeNode(data);

    int leftNode, rightNode;
    cout << endl
         << "Left Node : " << data << " ";
    cin >> leftNode;
    root->left = buildTree(leftNode);

    cout << endl
         << "Right Node : " << data << " ";
    cin >> rightNode;
    root->right = buildTree(rightNode);

    return root;
}

void bfs(TreeNode *root)
{
    if (!root)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();

        cout << node->val << " ";

        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int val;
        cin >> val;
        TreeNode *root = buildTree(val);
        bfs(root);
        cout << endl;
    }

    return 0;
}