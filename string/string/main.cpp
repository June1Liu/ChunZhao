#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;

class strFun {
public:
	int lengthOfLongestSubstring(string s) {
		int len = s.size();
		int rk = -1;
		int ans = 0;
		unordered_set<char> occ;
		for (int l = 0; l < len - 1; l++) {
			if (l != 0) {
				occ.erase(s[l]);
			}
			while (rk + 1 < len && !occ.count(s[rk+1])) {
				rk++;
				occ.insert(s[rk]);
			}
			ans = max(ans, (rk + 1 - l));
		
		}

		return ans;
	}

};


int main() {
	
	string s = "abcdbacd";

	strFun solution;

	cout << "the result of s is " << solution.lengthOfLongestSubstring(s);




}