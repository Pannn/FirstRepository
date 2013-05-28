#include<iostream>
using namespace std;
int main(){
//	cout << "hello world!" << endl;
	char a[10] = {"abcd"};
	cout << a++ << endl;
	cout << a[0] << endl;
	char b = a[0];
	cout << ++b << endl;
	return 0;
}