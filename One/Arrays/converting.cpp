#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	bool isTall;
	isTall = true;


	const int BIRTH_YEAR = 1945;
	cout<<BIRTH_YEAR<<endl;


	//type casting
	cout<< (int)3.14 << endl;
	cout << (double)3/2 << endl;

	int num = 10;
	cout<< &num << endl;

	int *pNum = &num; //Dereferencing
	cout<< *pNum <<endl;

	string greering = "Hello";
	cout<< greering.length() << endl;
	cout<< greering[0] << endl;
	cout<< greering.substr(1,3) << endl;
}
