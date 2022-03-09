#include <iostream> 

using namespace std;

int main() {
	float X, Y;
	float* pX = &X;
	float* pY = &Y;
	cout << "Enter 2 numbers: ";
	cin >> X >> Y;
	float res = (*pX + *pY) / 2;
	float* pres = &res;
	cout << "Arithmetic mean = " << *pres << endl;
		
	return 0;
}