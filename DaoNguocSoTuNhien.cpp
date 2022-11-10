#include <iostream>
using namespace std;

int main() {
	int n, temp = 0;
	cout << "Nhap so tu nhien can dao nguoc: ";
	cin >> n;

	while (n > 0) {
		temp = n % 10;
		cout << temp;
		n /= 10;
	}
}
