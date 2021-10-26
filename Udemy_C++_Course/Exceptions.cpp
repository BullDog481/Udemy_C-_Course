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
	return 0;
}