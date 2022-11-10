#include <iostream>
using namespace std;

int main() {
	int n, du, sum = 1;
	cin >> n;
	while (n > 0) {
		du = n % 10;
		sum *=du;
		n /= 10;
	}
	cout << sum;
}
