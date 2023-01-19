// 你必须定义一个 `main()` 函数入口。
// 左子树——根节点——右子树的方式遍历这棵树
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct TreeNode{
  int val;
  TreeNode* left = NULL;
  TreeNode* right = NULL;
//   left = (TreeNode*)malloc(sizeof(TreeNode*));
};

void inorder(TreeNode* root, vector<int> &res) {
  if (root != NULL)
  {
    inorder (root -> left, res);
    cout<< root -> val << endl;
    inorder(root -> right, res);
  }
}

int main()
{
  TreeNode* root = new TreeNode();
  root -> val = 1;
  root -> left = new TreeNode();
  root -> left -> val = 2;
  root -> right = new TreeNode();
  root -> right -> val = 3;
  vector<int> res;
  inorder(root, res);
  cout << "Talk is cheap. Show me the code." << endl;
  return 0;
}