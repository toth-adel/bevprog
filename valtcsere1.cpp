#include <iostream>
using namespace std;


int main()
{
	cout<<"Adjon meg 2 számot(a és b): ";
	int a, b;
	cin >> a >> b;
	
	a = a - b;
	b = b + a;
	a = b - a;

	cout<<"a= "<< a <<"\nb= "<< b <<'\n';	
}
