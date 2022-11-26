#include<iostream>
#include<math.h>
using namespace std;

void chuyenso (int a) {
	switch(a) {
			case 0: cout<<"zero "<< " "; break;
			case 1: cout<<"one"<< " ";break;
			case 2: cout<<"two "<< " ";break;
			case 3: cout<<"three "<< " ";break;
			case 4: cout<<"four "<< " ";break;
			case 5: cout<<"five "<< " ";break;
			case 6: cout<<"six "<< " ";break;
			case 7: cout<<"seven "<< " ";break;
			case 8: cout<<"eight "<< " ";break;
			case 9: cout<<"nine "<< " ";break;
			default :cout<<"Loi"<< " ";
		} 
}
int main() {
	int n, mu= 0,index, temp =0;
	cin>>n;
	index = n;
	while (index >0 ) {
		index/=10;
		mu++;
	}
	for(int i =mu-1;i>=0;i--) {
		temp = n / pow(10,i);
		chuyenso(temp);
// 	cout << temp << " ";
		n = n - temp*pow(10,i);
// 		cout << n << "--------" << endl;
	}
	
	system("pause");
}
