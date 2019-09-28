#include <iostream>

using namespace std;

int a = 3;
int b = 4;
int c, d;

int main(){
	
	cout << "Nilai dari a: "<< a << endl;
	cout << "Nilai dari b: "<< b << endl;
	cout << "Nilai dari ++a: "<< ++a << endl;
	cout << "Nilai dari --b: "<< --b << endl;
	cout << "Nilai dari !a: "<< !a <<"\n\n";
	 
	c = (++a) - (--b);
	d = (c << 1) ^ (!a);
	 
	//cout << "Hasil dari (++a) - (--b) adalah: " << c << endl;
	cout << "Hasil dari (c << 1) ^ (!a) adalah: " << d << endl; 
	 
	return 0;
	}
