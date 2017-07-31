#include<iostream>
#include<string.h>
using namespace std;
int
main() {
	char str, chr;
	int i,count,length;
	cin.getline(str, 127);
	cin>>chr;
	length = strlen(str);
	if (chr <= 'z'&&chr >= 'a') {
		for (i = 0,count=0; i < length; i++) {
			if (chr == str[i]||chr==str[i]+'a'-'A') count++;
		}
	}
	else if (chr <= 'Z'&&chr >= 'A') {
		for (i = 0, count = 0; i < length; i++) {
			if (chr == str[i] || chr == str[i] -'a' + 'A') count++;
		}
	}
	else {
		for (i = 0, count = 0; i < length; i++) {
			if (chr == str[i]) count++;
		}
	}
	cout << count << endl;
	
	return 0;
}