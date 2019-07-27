//Making BT from Inorder and level order traversal

#define vi vector<int>
#define pb push_back

#include <iostream>
using namespace std;

int search()
{
    ...
}

vi extractKeys(vector<int> &n, vector<int> &l, int m, int n, int start)
{
    vi newlevel(m);
    
    for(int i = start; i < n; i++)
        if(search(in, level[i], 0, m - 1) != -1)
            newlevel.pb(level[i]);
    return newlevel;
}

TreeNode* bu(vector<int>&in, vector<int> &l, int start, int end, int n)
{
    if(start > end)
        return NULL;
    
    TreeNode *root = new TreeNode(l[0]);
    
    if(start == end)
        return root;
        
    int i = search(in, root->val, start, end);
    
    vi  level1 = extractKeys(in, level, i , n, 0);
    
    vi level2 = extractKeys(in, level, n - i - 1, n, i+ 1);
    
    root->left = bu(in, level1, start, i - 1, n);
    
    root->right = bu(in, level2, i + 1, end, n);
    
    delete(level1);
    delete(level2);
    
    return root;
}

int main() {
	
	return 0;
}
