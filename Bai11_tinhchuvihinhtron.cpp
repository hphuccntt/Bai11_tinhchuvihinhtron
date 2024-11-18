#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
	cout << "Tinh ban kinh Hinh Tron\n";
	double bankinh, pi, chuvi, dientich;
	cout << "bankinh:"; cin >> bankinh;
	cout << "chu vi hinh tron:\n";
	chuvi = 2 * M_PI * bankinh;
	dientich = M_PI * (bankinh * bankinh);
	cout << "chu vi: " << chuvi << endl;
	cout << "dien tich: " << dientich << endl;
	return 0;

}