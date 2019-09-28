#include <iostream>

using namespace std;

int main()
{
	int a = 2;

	cout << a << endl;

	//sizeof utk melihat ukuran suatu tipe data (byte)
	cout << sizeof(a) << " byte" << endl;
	
	//cout << numeric_limits<int>::max() << endl;
	cin.get();
	return 0;
}

	/*1 byte = 8 bit
	memory management menggunakan byte

	int = 32 bit
	di int bagian depan menggunakan -+
	jadi sisanya 31 bit
	31 bit = 2^31
	Jadi max nilai int 2^31 = 2147483647
	*/