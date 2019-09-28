#include <iostream>

using namespace std;

//operator logika: not, and, or

int main()
{

	int x = 3;
	int y = 5;
	bool hasil;

	//not 
	hasil = !(x == 3);
	cout << hasil << "\n" << endl;

	//and atau &&
	hasil = (x == 3) && (y == 5);
	cout << hasil << "\n" << endl;

	//or atau ||
	hasil = (x == 7) || (y == 5);
	cout << hasil << endl;

	cin.get();
	return 0;
}