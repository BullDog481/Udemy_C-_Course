#include <iostream>
#include <string>

using namespace std;

void mightGoWrong(){

	bool error = true;
	bool error2 = true;

	/*if (error) {
		throw "Something went wrong. ";
	}*/

	if (error2) {
		throw string("Something else went wrong."); //Use the class name to create an object
	}
}

class CanGoWrong {
public:
	CanGoWrong() {
		char* pMemory = new char[9999999];
		delete[] pMemory;
	}
};


int main() {
	try {
		mightGoWrong();
	}
	catch (int e) { //catch errors thrown of type int
		cout << "Error code: " << e << endl;
	}
	catch(char  const * e){ //Catch primitive string char const * pointer errors
		cout << "Error message: " << e << endl;
	}
	catch (string &e) { //multiple catch blocks - string class
		cout << "string error message: " << e << endl;
	}

	cout << "Still running" << endl;
	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc& e) {
		cout << "Caught exception: " << e.what() << endl; 
	}
	

	return 0;
}