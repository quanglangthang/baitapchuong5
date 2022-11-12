#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,index,dau,than,cuoi,dem = 0, dao;
	cin >> n;
	index = n;
	while (index > 0) {
		index /= 10;
		dem++;
	}
//	cout << dem;
	cuoi = n % 10;
	dau = n / pow(10,dem-1);
//	cout << dau << " " << cuoi;
	than = n - (dau*pow(10,dem-1)+cuoi);
//	cout << than;
	dao = cuoi * pow(10,dem-1) + than + dau;
	cout << dao;
	
}
