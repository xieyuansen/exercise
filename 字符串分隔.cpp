//plan A
/*
#include<iostream>
#include<cstring>
using namespace std;
int
main() {
	char str[2][101];
	int str_len[2] = { 0 }, str_multi[2] = { 0 };
	char (*str_new)[9];
	//int i, j;
	while (cin.getline(str[0], 101)) {
		cin.getline(str[1], 101);
		for(int i=0;i<2;i++){ 
			str_len[i] = strlen(str[i]);
			if (str_len[i]%8==0)
				str_multi[i] = str_len[i] / 8;
			else
				str_multi[i] = str_len[i] / 8 + 1;
		}
		if(str_len[0]>str_len[1])
			str_new = new char[str_multi[0]][9];
		else
			str_new = new char[str_multi[1]][9];
		//转存到新的字符串
		for (int i = 0; i < 2; i++) {
			for (int j = 0,k=0,l=0; j < str_len[i]; j++,l++) {
				
				if (l == 8) {
					str_new[k][l] = '\0';
					l = 0;
					k++;
					str_new[k][l] = str[i][j];
				}
				else {
					str_new[k][l] = str[i][j];
				}
			}
			//补‘0’
			for (int l =8-( 8*str_multi[i]-str_len[i]);l<8;l++) {
				str_new[str_multi[i] - 1][l] = '0';
			}
			str_new[str_multi[i] - 1][8] = '\0';
			//输出新的字符串
			for (int k = 0; k < str_multi[i];k++) {
				for (int l = 0; l < 9; l++) {
					if (l == 8) {
						cout << '\n';
						l = 0;
						break;
					}
					else
						cout << str_new[k][l];
				}
			}
		}
		delete []str_new;
	}
	system("pause");
	return 0;
}
*/
//plan B
#include<iostream>
#include<cstring>
using namespace std;
int
main() {
	char str[2][105];
	int str_len[2];
	int i, j, k, l;
	while (cin.getline(str[0], 101)) {
		cin.getline(str[1], 101);
		for (i = 0; i < 2; i++) {
			if (str_len[i] = strlen(str[i])) {
				for (j = 0; j < (8 - str_len[i] % 8); j++)
					str[i][str_len[i] + j] = '0';
				str[i][str_len[i] + j] = '\0';//补足字符串结束符
											  //输出，每8个一行
				for (k = 0, l = 0; k < str_len[i] + j; k++, l++) {
					if (l == 8) {
						cout << endl;
						l = 0;
					}
					cout << str[i][k];
				}
			}
			cout << endl;
		}
	}
	//system("pause");
	return 0;
}