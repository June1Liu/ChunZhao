#include<iostream>
#include<vector>
using namespace std;

class binarySearch {
public:
	int binarySearchFun(vector<int>& nums, int target) {
		//time complexity is O(log n), space time complexity is O(1);
		int a = 0;
		int b = nums.size() - 1;
		int m;
		while (a <= b) {
			m = a + (b - a) / 2;
			if (nums[m] > target) {
				b = m - 1;
			}
			else if (nums[m] < target) {
				a = m + 1;
			}
			else
				return m;
		}
		return -1;
	}

};



int main() {
	vector<int> vec1= { 2,6,8,9,13,18,21,26 };
	binarySearch bs;
	int pos = bs.binarySearchFun(vec1, 21);
	cout << "the position of 21 in vec1 is " << pos << endl;
	pos = bs.binarySearchFun(vec1, 25);
	cout << "the position of 25 in vec1 is " << pos << endl;


}