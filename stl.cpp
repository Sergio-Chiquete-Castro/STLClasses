#include <iostream>
#include <set>
using namespace std;

int main() 
{
	set <int> v = { 2,4,6,8,10 };
	//add 20
	v.insert(20);
	//add 30 after 20
	v.insert(30);


	set <int> ::iterator itr;
	
	cout << "Using Iterator" << endl;
	for (itr = v.begin(); itr != v.end(); itr++) {
		cout <<*itr << endl;
	}

	cout << "Using for each loop" << endl;
	for (int x : v) {
		cout << x << endl;
	}


}
