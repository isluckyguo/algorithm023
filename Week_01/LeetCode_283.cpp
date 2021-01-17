class Solution {
public:
	void moveZeros(vector<int>& nums) {
		int j = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j++] = temp;
			}
		}
	}
};