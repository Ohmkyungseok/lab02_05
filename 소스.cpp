#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;

void main() {
	vector<int> NumberList;

	int num;
	int nums = 0;

	while (cin >> num) {
		NumberList.push_back(num);

		nums = nums + 1;
	}

	for (auto i : NumberList) {

		cout << i << " ";
	}

	cout << "ordered array" << endl;

	sort(NumberList.begin(), NumberList.end());
	reverse(NumberList.begin(), NumberList.end());

	for (auto i : NumberList) {

		cout << i << " ";
	}


}
