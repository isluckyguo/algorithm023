class Solution {
public:
	void traversal(Node *root) {
		if (root == nullptr) return;
		result.push_back(root->val);
		for (int i = 0; i < root->children.size(); i++) {
			traversal(root->children[i]);
		}
	}
	vector<int> preorder(Node* root) {
		result.clear();
		traversal(root);
		return result;
	}
	vector<int> result;
};