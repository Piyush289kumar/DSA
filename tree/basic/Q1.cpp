/* Basic */
#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

treeNode *buildTree(treeNode *root)
{

    int data;
    cout << "Enter Node Data : ";
    cin >> data;

    if (data == -1)
        return NULL;

    root = new treeNode(data);

    cout << "Enter Left Node Data : ";
    root->left = buildTree(root->left);

    cout << "Enter Right Node Data : ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(treeNode *root)
{
    if (!root)
        return;

    queue<treeNode *> q;
    vector<vector<int>> levels;
    q.push(root);

    cout << "Level Order BFS : " << endl;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            treeNode *temp = q.front();
            q.pop();
            level.push_back(temp->data);

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }

        // Print Curr Order
        for (auto &tree : level)
        {
            cout << tree << " ";
        }
        cout << endl;
        levels.push_back(level);
    }

    // Print Reverse Tree;

    cout << endl << "REV" << endl;

    for (int i = levels.size() - 1; i >= 0; i--)
    {
        for(int val : levels[i]){
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    // data : 1 4 2 10 -1 -1 -1 8 -1 -1 3 6 -1 -1 7 -1 -1
    treeNode *root = NULL;

    root = buildTree(root);

    cout << "BFS : " << endl;
    levelOrderTraversal(root);

    return 0;
}