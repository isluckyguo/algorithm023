// Solution 1
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		vector<int> newVec(n);
		for (int i = 0; i < nums.size(); i++) {
			newVec[(i+k)%n] = nums[i];
		}
		nums.assign(newVec.begin(), newVec.end());
	}
};

// Solution 2
class Solution {
public:
	void reverte(vector<int>& nums, int start, int end) {
		while (start < end) {
			swap(nums[start], nums[end]);
			start++;
			end--;
		}
	}
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		reverte(nums, 0, n-1);
		reverte(nums, 0, k-1);
		reverte(nums, k, n-1);
	}
};