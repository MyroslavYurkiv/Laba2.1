#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; 
	//double z1; 
	double z2; 
	cout << "a = "; cin >> a;
	//z1 = (1 - 2 * (pow(sin(a),2))) / (1 + sin(2 * a)); 
	z2 = (1 - tan(a)) / (1 + tan(a));
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}