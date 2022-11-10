#include <iostream>
using namespace std;

int main() {
	int n, giaithua = 1;
	cout << "Nhap n ";
	cin >> n;
	if (n == 1) {
		cout << giaithua;
	}
	else {
		for (int i = 1; i <= n; i++ ) {
		giaithua *=i;
		}
		cout << giaithua;
	}
}
