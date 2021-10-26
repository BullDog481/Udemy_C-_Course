#include <iostream>

using namespace std;

void mightGoWrong(){

	bool error = true;
	if (error) {
		throw "Something went wrong. ";
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

	cout << "Still running" << endl;
	return 0;
}