#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, index = 0, dem = 0, dau;
	double giua, daonguoc = 0, cuoi;
	cin >> n;
	index = n;
	while (n > 0) {
		n /= 10;
		dem++;
	}
	dau = index / pow(10,dem-1);
	cuoi = index % 10; 
	giua = (index / 10) * pow(10,(-1)*(dem-1));
// 	Lay so dau x 10^-1 de lay so giua - dau de ra dong 21
	daonguoc = dau * pow(10,-1);

//	De tach than so dang 12345 => 0.0234
	double temp = giua - daonguoc;
	daonguoc = (cuoi * pow(10,dem-2) + temp*pow(10,dem-1))*10 + dau;
	cout << daonguoc;
	
}
