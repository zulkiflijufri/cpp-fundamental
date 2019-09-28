#include <iostream>

using namespace std;

int main() {
	
	int bilangan, jml_faktor_kali = 0;
	
	cout << "Masukkan bilangan: ";
	cin >> bilangan;
	
	for(int i=1; i<=bilangan; i++) 
		{
			if(bilangan%i==0)
			{jml_faktor_kali++;}
		}
	if(jml_faktor_kali==2) {
				cout << jml_faktor_kali << endl;
				cout << "Bilangan Prima" << endl;
		}
	else {
				cout << "Bukan Bilangan Prima" << endl;
		}
	
	}
