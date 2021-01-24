class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> hashmap;
		for (auto &str : strs) {
			string key = str;
			sort(key.begin(), key.end());
			hashmap[key].emplace_back(str);
		}
		vector<vector<string>> ans;
		for (auto it = hashmap.begin(); it != hashmap.end(); it++) {
			ans.emplace_back(it->second);
		}
		return ans;
	}
};