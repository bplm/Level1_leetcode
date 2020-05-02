/* Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int l=strs.size();
        vector<vector<string>> r;
		map<string,vector<string>> m;
		for(int f=0;f<l;f++)
        {string t(strs[f]);//copy string strs[f] to t;
			sort(t.begin(),t.end());
			m[t].push_back(strs[f]);
		}
		for(auto v:m){
			r.push_back(v.second);
		}
		return r;
	}
};