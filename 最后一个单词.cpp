#include<iostream>
#include<string.h>
using namespace std;
int
main() {
	char str[128];
	size_t length;
	int i,j;
	while (cin.getline(str, 127)) {
		length = strlen(str);
		for (i = length - 1, j = 0; i >= 0; i--) {
			if (str[i] != ' '&&j == 0) j = i;
			if (str[i] == ' '&&j > i) {
				break;
			}
		}
		cout << (j - i) << endl;
		//输出最后一个单词
		//for (i++; i <= j; i++) cout << str[i];
		//cout << endl;
	}
	return 0;
}