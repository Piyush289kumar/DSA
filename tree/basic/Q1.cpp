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
    if (root == NULL)
        return;

    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
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