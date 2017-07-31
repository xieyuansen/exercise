#include<iostream>
using namespace std;
int
main() {
	int IDNum_count[1001] = { 0 }, tmp=0;
	int N;
	while (cin >> N) {
		for (int i = 0; i < N; i++) {
			cin >> tmp;
			if (tmp >= 1 && tmp <= 1000)
				IDNum_count[tmp] = 1;
			else
				i--;
		}
		cout << endl;
		for (int i = 1; i < 1001; i++) {
			if (IDNum_count[i]) {
				cout << i << endl;
				IDNum_count[i] = 0;
			}
		}
	}
	system("pause");
	return 0;
}