#include <iostream>

using namespace std;

int main(){
	
	bool a = true;
	bool b = false;
	bool c = !a;
	bool d =!b;
	bool e = a&&a;
	bool f = a&&b;
	bool g = b&&a;
	bool h = b&&b;
	bool i = a || a; 
	bool j =  a || b;
	bool k = b || a;
	bool l = b || b;
	bool m = !a&&!a;
	bool n = !a&&!b; 
	bool o = !b&&!a;
	bool p = !b&&!b;
	bool q = e || m; 
	bool r =  f || n;
	bool s = g || o;
	bool t = h || p;
	
	cout<<"==================================================================="<<endl;
	cout <<"|  p  |  q  |  !p  |  !q  |  p^q  | p v q | !p^!q | (p^q)v(!p^!q) |"<<endl;
	cout<<"==================================================================="<<endl;
	cout <<"|  "<<a<< "  |  " <<a<< "  |  " <<c<< "   |  " <<c<< "   |   "<<e<< "   |   "<<i<<"   |   "<<m<<"   |       "<<q<<"       |"<<endl;
	cout <<"|  "<<a<< "  |  " <<b<< "  |  " <<c<< "   |  " <<d<< "   |   "<<f<< "   |   "<<j<<"   |   "<<n<<"   |	  "<<r<<"       |"<<endl;
	cout <<"|  "<<b<< "  |  " <<a<< "  |  " <<d<< "   |  " <<c<< "   |   "<<g<< "   |   "<<k<<"   |   "<<o<<"   |       "<<s<<"       |"<<endl;
	cout <<"|  "<<b<< "  |  " <<b<< "  |  " <<d<< "   |  " <<d<< "   |   "<<h<< "   |   "<<l<<"   |   "<<p<< "   |       "<<t<<"       |"<<endl;
	cout<<"==================================================================="<<endl;
	
	return 0;
	}
