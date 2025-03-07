#include<iostream>
#include <unordered_map>
#include<stack>


using namespace std;

class Solution {
public:
	bool isValid(string s) {
		int n = s.size();
		if (n % 2 == 1)
			return false;
	
		unordered_map <char, char> pairs = {
			{'(',')'},
			{'[',']'},
			{'{','}'}
		};

		stack<char> stk;
		for (char c : s) {
			if (pairs.count(c)) {
				if (stk.empty() || pairs[c] != stk.top()) {
					return false;
				}
				stk.pop();
				
			}
			else {
				stk.push(c);
			}
			
		}
		return stk.empty();

	}
};



int main() {

	string s = "{[(]}";
	Solution solution;
	cout << "the result of s is " << solution.isValid(s) << endl;
	string t = "[{]}";
	cout << "the result of t is " << solution.isValid(t) << endl;

	string q = "";
	cout << "the result of q is " << solution.isValid(q) << endl;



}