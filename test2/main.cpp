#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	HINSTANCE load = LoadLibrary(L"DynamicLib.dll");
	typedef int (*sum) (int, int);

	sum Sum;
	Sum = (sum)GetProcAddress(load, "Sum");
	int a = 10;
	int b = 50;
	cout << Sum(a, b);
	FreeLibrary(load);

}