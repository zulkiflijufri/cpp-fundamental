#include <iostream>

using namespace std;


int a;
int b;
string text;

int main(){
		
		cout << endl;
		cout << "Kalkulator Sederhana By STT-NF" << endl;
		cout << "==============================" << "\n" << endl;
		
		cout << "Masukkan angka pertama: ";
		cin >> a;
		cout << "Masukkan angka kedua: ";
		cin >> b;
		cout << endl;
		
		cout << "+, -, *, /,%" << endl;
		cout << "Pilih operasi matematika yang Anda inginkan: ";
		cin >> text;
		cout << endl;
		
		if(text == "+"){
			cout << "Hasil dari " << a << " + " << b << " adalah " << a+b << endl;
		}else if(text == "-"){
			cout << "Hasil dari " << a << " - " << b << " adalah " << a-b << endl;
		}else if(text == "*"){
			cout << "Hasil dari " << a << " * " << b << " adalah " << a*b << endl;
		}else if(text == "/"){
			cout << "Hasil dari " << a << " / " << b << " adalah " << a/b << endl;
		}else if(text == "%"){
			cout << "Hasil dari " << a << " % " << b << " adalah " << a%b << endl;
		}else{
			cout << "Operasi matematika tidak ditemukan" << endl;
		}
		
		cout << "\nTerima kasih telah menggunakan Aplikasi kami" << endl;
		cout << "============================================" << endl;
		return 0;
	}
