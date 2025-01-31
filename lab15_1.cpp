#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;

	int *x = &a;
	char *y = &b;
	int **z = &x;
	
	cout << a << " "; 
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " ";
	
	cout << endl;

	cout << &a << " ";
	cout << (void*)&b << " "; 
	cout << (void*)&c << " ";
	cout << x << " ";
	cout << &y << " ";
	cout << &z << " ";

	cout << endl;

	c = 'F';
	cout << a << " "; 
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " ";

	cout <<endl;
	
	*y = 'W'; 
	cout << a << " "; 
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " ";

	cout << endl;
	
	*x = 6;
	cout << a << " "; 
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " ";

	cout << endl;

	**z = 7;
	cout << a << " "; 
	cout << b << " ";
	cout << c << " ";
	cout << x << " ";
	cout << (void*)y << " ";
	cout << z << " ";


	return 0;
}
