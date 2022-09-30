#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void generate(vector<int> &subset, int i, vector<int> &nums) {
// base
	if (i == nums.size()) {
		ans.push_back(subset);
		return;
	}

//exclude ith element
	generate(subset, i + 1, nums);

//include ith element
	subset.push_back(nums[i]);
	// cout << nums[i] << " ";
	generate(subset, i + 1, nums);
	subset.pop_back();


}








int main() {
	int n;
	cin >> n;
	vector<int> nums;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		nums.push_back(x);
		// cin >> nums[i];
	}

	vector<int> empty;

	generate(empty, 0, nums);

	for (auto i : ans) {
		for (auto ele : i) {

			cout << ele << " ";
		}
		cout << endl;

	}



}