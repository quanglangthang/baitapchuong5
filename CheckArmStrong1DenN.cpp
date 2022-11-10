#include <iostream>
#include <math.h>
using namespace std;

// Tien khai bao
void checkArmStrong(int n);
int count(int a);

void checkArmStrong(int n) {
	int index, du= 0, temp = 0;
	index = n;
	if ( (n >= 1) && (n <= 9)) {
		cout << n << " ";
	}
	else {
		int dem = count(index);
		while (n>0) {
			du = n%10;
			temp += pow(du,dem);
			n /= 10;
		}
		if (temp == index) {
			cout << index << " ";
		}
	}
}

int count(int a) {
	int dem;
	while (a > 0) {
		a /= 10;
		dem++;
	}
	return dem;
}

int main() {
	int n, dem;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		checkArmStrong(i);
	}
}


