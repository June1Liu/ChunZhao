#include<iostream>
#include<vector>

using namespace std;

class Sorting {
public:
	void bubbleSort(vector<int>& arr) {
		int a = arr.size();
		int temp;
		bool swapped;
		for (int i = 0; i < a - 1; i++){
			swapped = false;
			for (int j = 0; j < a - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					swapped = true;
				}
			}
			if (!swapped)
				break;
		
		}
	}


};

class XL {
public:
	void printVector(vector<int>& arr) {
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] << ",  ";
		}
	}

};


int main() {
	vector<int> xl1 = { 3,1,7,9,16,11,18 };

	//cout << "the number of elements of xl1 is " << xl1.size() << endl;
	////the ouput result is 7 which is exactly the number of elements of xl1 vector
	//cout << "the first element is " << xl1[0]; 
	//cout << "the last element is " << xl1[6] << endl;
	//cout << "the index of the size of vector is " << xl1[7];
	//this operation would report a mistake.
	XL xl;
	Sorting sorting;
	xl.printVector(xl1);
	cout << endl;
	sorting.bubbleSort(xl1);
	xl.printVector(xl1);

}

