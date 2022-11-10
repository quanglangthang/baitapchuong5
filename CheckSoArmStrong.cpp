#include <iostream>
#include <math.h>
using namespace std;

int count(int a) {
	int dem;
	while (a > 0) {
		a /= 10;
		dem++;
	}
	return dem;
}


int main() {
	int n, index, du= 0, temp = 0;
	cin >> n;
	index = n;
	if ( (n >= 1) && (n <= 9)) {
		cout << "YES";
	}
	else {
		int dem = count(index);
		while (n>0) {
			du = n%10;
			temp += pow(du,dem);
			n /= 10;
		}
		if (temp == index) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}
