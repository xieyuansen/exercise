#include<iostream>
using namespace std;
class NumInt {
private:
	int decimal=0;
	int octal;
public:
	void input_decimal(const int &m_decimal);
	int output_decimal(void);
	int output_octal(void);
};
void 
NumInt::input_decimal(const int &m_decimal) {
	decimal = m_decimal;	
}
int 
NumInt::output_decimal(void) {
	return decimal;
}
int
NumInt::output_octal(void) {
	int mm_decimal = decimal;
	int base = 1;
	octal = 0;
	while (mm_decimal)
	{
		octal += mm_decimal % 8 * base;
		mm_decimal = mm_decimal / 8;
		base *= 10;
	}
	return octal;
}
int
main()
{
	NumInt  Num;
	int N;
	while (cin>>N) {
		Num.input_decimal(N);
		cout<<Num.output_octal()<<endl;
	}
	
	return 0;
}