// Solution 1
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> index;
		for (int i = 0; i < nums.size() - 1; i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					index.push_back(i);
					index.push_back(j);
				}
			}
		}
		return index;
	}
};

// solution 2
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hashmap;
		for (int i = 0; i < nums.size(); i++) {
			auto it = hashmap.find(target - nums[i]);
			if (it != hashmap.end()) {
				return {it->second, i};
			}
			hashmap[nums[i]] = i;
		}
		return {};
	}
};