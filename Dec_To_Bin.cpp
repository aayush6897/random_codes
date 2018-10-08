#include<iostream>
using namespace std;

int main() {

	int dec;
	cin >> dec;

	long bin = 0;
	long prod_val = 1;

	while(dec > 0) {
		int a = dec % 2;
		a *= prod_val;
		prod_val *= 10;
		bin += a;
		dec /= 2;
	}

	cout << bin << endl;

	return 0;
}