class solution {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length()) return false;
		vector<int> vec(26, 0);
		for (auto &ch : s) {
			vec[ch - 'a']++;
		}
		for (auto &ch : t) {
			vec[ch - 'a']--;
			if (vec[ch - 'a'] < 0) 
				return false;
		}
		return true;
	}
};