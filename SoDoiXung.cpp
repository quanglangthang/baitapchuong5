#include <iostream>
using namespace std;

int main() {
	string n;
	int dodai, x = 1;;
	cin >> n;
	dodai = n.size();
	for (int i = 0; i < dodai; i++) {
		if (n[i] == n[dodai-1-i]) {
			x = 1;
		} 
		else {
			x = 0;
		}
	}
	if (x == 1) {
		cout << "YES";	
	}
	else {
		cout << "NO";
	}
	
}
