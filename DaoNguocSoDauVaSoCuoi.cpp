#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	int index, temp;
	cout << "Nhap vao chuoi can dao nguoc so dau va cuoi: ";
	cin >> n;
	index = n.size();
	for (int i = 0; i < index; i++) {
		temp = n[0];
		n[0] = n[index-1];
		n[index-1]= temp;
		cout << n[i]; 
	}
}
