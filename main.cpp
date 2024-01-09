#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned char b = ~(char)0;

	unsigned int i = ~0;

	cout << "b: " << (int)b << endl;
	cout << "i: " << i << endl;

	// this will output true
	if (i == UINT32_MAX) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


	return 0;
}