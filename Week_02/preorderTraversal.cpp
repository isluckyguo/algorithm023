class Solution {
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		if (root == nullptr) return res;
		stack<TreeNode*> stk;
		while (root != nullptr || !stk.empty()) {
			while (root != nullptr) {
				res.emplace_back(root->val);
				stk.emplace(root);
				root = root->left;
			}
			root = stk.top();
			stk.pop();
			root = root->right;
		}
		return res;
	}
};