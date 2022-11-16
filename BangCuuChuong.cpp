#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap bang cuu chuong: ";
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << n << "\tx " << i << "\t=" << n*i;
	}
}
