#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int temp = 0, temp1 = 0, du = 0;
	cout << "Nhap so can tinh: ";
	cin >> n;
	while (n > 0) {
		du = n % 10;
		temp = du;
		n /= 10;
		break;
	}
	while (n > 0) {
		du = n % 10;
		temp1 = du;
		n /= 10;
	}
	cout << temp + temp1;
}
