#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	void *y = &b;
	void *z = &x;

	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	cout <<(void *)&a<<" "<<(void *)&b<<" "<<(void *)&c<<" "<<(void *)&x<<" "<<(void *)&y<<" "<<(void *)&z<<endl; 
	b = 'F';
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	b = 'W';
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	a=6;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	a=7;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	return 0;
}
