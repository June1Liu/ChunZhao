#include<iostream>

using namespace std;

struct TreeNode {
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : value(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) :value(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right): value(x), left(left), right(right){}

};

class Solution {
public:
	int calculateDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		return max(calculateDepth(root->left), calculateDepth(root->right)) + 1;
	}

};

int main() {
	int length;
	TreeNode* root;
	
	Solution solution;
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node2 = new TreeNode(2, node4, node5);
	TreeNode* node1 = new TreeNode(1, node2, node3);

}









//the definition of 