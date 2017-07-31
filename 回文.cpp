#include<iostream>
#include<string.h>
using namespace std;
int
main() 
{
	char chr[1000];
	int i;
	size_t lenth;
	while (cin>>chr) {
		lenth = strlen(chr);
		for (i=0;i<lenth/2;i++) {
			if (chr[i] != chr[lenth -1-i]) {
				cout << "No!" << endl;
				break;
			}
		}
		if (i == lenth / 2) cout << "Yes!" << endl;
	}
}