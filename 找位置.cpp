#include<iostream>
#include<string.h>
using namespace std;
int
main() {
	char str[101];
	int i,j, k,finded;
	int lenth;
	while (cin>>str) {
		if ((lenth = strlen(str)) > 100) {
			cout << "字符串长度大于100，请重新输入：\n";
			continue;
		}
		for (i = 0; i < lenth; i++) {
			for (k = 0; k < i;) {
				if (str[k] == str[i]) {
					i++;
					k = 0;
					continue;
				}
				k++;
			}
			finded = 0;
			for (j = i + 1; j < lenth; j++) {
				if (str[i] == str[j]) {
					if (finded) {
						cout << ',' << str[j] << ':' << j;
					}
					if (!finded) {
						cout << str[i] << ':' << i;
						cout << ',' << str[j] << ':' << j;
						finded = 1;
					}
				}
			}
			if (finded) cout << endl;
		}
	}
}

