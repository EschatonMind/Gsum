#include <iostream>
using namespace std;

double GSum(int k) {
	// base case
	if (k == 0) { return 1; }
	// recursive
	double smallanswer = GSum(k - 1);
	// calculation
	return smallanswer + 1.0 / pow(2, k);
}
int main() {

	int n;
	cin >> n;
	cout << GSum(n);
	return 0;
}