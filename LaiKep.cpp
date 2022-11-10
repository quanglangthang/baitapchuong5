#include <iostream>
using namespace std;

int main() {
	double n, time, lai;
	cin >> n >> time >> lai;
	for (int i = 1; i <= time; i++) {
		n +=+ n*(lai/100);
	}
	cout << n;
}
