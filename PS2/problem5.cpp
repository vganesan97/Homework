#include <iostream>
#include <string>

using namespace std;


//DO NOT CHANGE THE RETURN TYPE OF THIS FUNCTION
void setString(string address2, string address3) {
	address2 = address3;
	return;
}

int main() {
	//variable declarations
	string address1("This is the ");
	string address2("incorrect output :(");
	string address3("correct output!");
	string *pointer1 = &address1;
	string *pointer2 = &address2;
	string *pointer3 = &address3;

	/*
	*
	*
	* There is an issue in the code below.
	* Identify the reasons why the code below is printing the wrong output
	* Devise an addition to the existing code to fix the problem
	* (no deleting any of the current code!)
	* DO NOT SIMPLY ASSIGN ADDRESS1 AND ADDRESS2 TO THE CORRECT VALUES
	* you want to make setString do what it is intended to do.
	*/
	setString(address2, address3); //See line 23
	cout << address1 + address2 << endl;

	string address4("This is the ");
	string address5("incorrect output :(");
	string address6("correct output!");
	string *pointer4 = &address4;
	string *pointer5 = &address5;
	string *pointer6 = &address6;







	return 0;
}