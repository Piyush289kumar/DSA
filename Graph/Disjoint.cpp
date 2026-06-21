#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{

    vector<int> parent, size;

public:
    DisjointSet(int n)
    {
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    // Path Compression
    int findUltimateParent(int node){
        if(node == parent[node]) return node;

        return parent[node] = findUltimateParent(parent[node]);
    }

    // Union by Size
    void unionBySize(int u, int v){
        int UltimateParentofU = findUltimateParent(u);
        int UltimateParentofV = findUltimateParent(v);

        if(UltimateParentofU == UltimateParentofV) return;

        if(size[UltimateParentofU] < size[UltimateParentofV]){
            parent[UltimateParentofU] = parent[UltimateParentofV];
            size[UltimateParentofV] += size[UltimateParentofU];
        }else{
            parent[UltimateParentofV] = parent[UltimateParentofU];
            size[UltimateParentofU] += size[UltimateParentofV];
        }
    }

    bool isConnected(int u, int v){
        return findUltimateParent(u) == findUltimateParent(v);
    }

};

int main()
{

    DisjointSet ds(7);

    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);

    cout << (ds.isConnected(1, 5) ? "True" : "False") << endl;

    return 0;
}