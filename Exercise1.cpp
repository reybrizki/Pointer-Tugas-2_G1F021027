#include <iostream>
using namespace std;

int main(){
	int x, y, *p1, *p2;
	
	x = 5;
	cout << "Nilai x : " << x << endl;
	
	y = 10;
	cout << "Nilai y : " << x << endl;
	
	p1 = &x;
	cout << "Nilai p1 : " << p1 << endl;
	
	*p1 = 7;
	cout << "Nilai x : " << *p1 << endl;
	
	p2 = &y;
	cout << "Nilai p2 : " << p2 << endl;
	
	x = *p2;
	cout << "Nilai x : " << x << endl;
	
	x = y;
	cout << "Nilai x : " << x << endl;
	
	p1 = &y;
	cout << "Nilai p1 : " << p1 << endl;
	
	p2 = &x;
	cout << "Nilai p2 : " << p2 << endl;
	
	p2 = &x;
	cout << "Nilai p2 : " << p2 << endl;
	
	p1 = p2;
	cout << "Nilai p2 : " << p1 << endl;
	
	*p2 = 6;
	cout << "Nilai x : " << *p2 << endl;
		
	return 0;
}
