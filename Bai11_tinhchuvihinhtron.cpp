#include <iostream>
using namespace std;
int main()
{
	cout << "Tinh ban kinh HCN\n";
	double bankinh, pi, chuvi, dientich;
	cout << "bankinh:"; cin >> bankinh;
	cout << "ta co pi=3,14:";
	pi = 3, 14;
	cout << "chu vi hinh tron:\n";
	chuvi = 2 * pi * bankinh;
	dientich = pi * (bankinh * bankinh);
	cout << "ta co chu vi: " << "2*" << pi << "*" << bankinh << "=" << chuvi << endl;
	cout << "ta co dien tich: " << pi << "*" << bankinh << "^2" << "=" << dientich << endl;
	return 0;

}