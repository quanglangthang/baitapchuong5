#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	int index;
	cout << "Nhap vao chuoi can dao nguoc so dau va cuoi: ";
	cin >> n;
	index = n.size();
// 	Cat chuoi
	cout<<n[index-1] + n.substr(1,index-2) + n[0];
}
