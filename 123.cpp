#include <iostream>

using namespace std;

int main(){
	
	bool a=true;
	bool b=false;
	bool c=a&&b;
	bool d=a&&a;
	bool e=b&&a;
	bool f=b&&b;
	
	cout<<"========================"<<endl;
	cout <<"|  p  |  q  |	p ^ q  | "<<endl;
	cout<<"========================"<<endl;
	cout <<"|  "<<a<< "  |  " <<a<< "  |	  "<<c<<	 "    |"<<endl;
	cout <<"|  "<<a<< "  |  " <<b<< "  |	  "<<d<<	 "    |"<<endl;
	cout <<"|  "<<b<< "  |  " <<a<< "  |	  "<<e<<	 "    |"<<endl;
	cout <<"|  "<<b<< "  |  " <<b<< "  |	  "<<f<<	     "    |"<<endl;
	cout<<"========================"<<endl;
	
	return 0;
}
