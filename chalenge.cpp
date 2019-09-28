#include <iostream>

using namespace std;
	
	int alas_segitiga;
	int tinggi_segitiga;
	int tinggi_prisma;
	float volume;

int main() {
		cout  << "Mengitung Volume prisma segi lima" << endl;
		cout << "Alas segitiga : ";
		cin >> alas_segitiga;
		cout << "Tinggi segitiga: ";
		cin >> tinggi_segitiga;
		cout << "Tinggi prisma: ";
		cin >> tinggi_prisma;
		
		cout << endl;
		
		volume = 5 * (alas_segitiga * tinggi_segitiga * 1/2) * tinggi_prisma;
		cout << "Volume prisma segi lima adalah : " << volume << endl;
		
	return 0;
	}
