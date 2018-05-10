// GameOn3x-Nathaniel.cpp : Defines the entry point for the console application.
//

/* 
	like commented lines, whitespaces (tabs, newlines, etc.) are just for humans
	the compiler inherently ignores all whitespaces and instead looks for a semi-colon (;)
	to indicate the end of a statement. Not using a semi-colon
*/

#include "stdafx.h"
#include <iostream>

/* 
	Lines beginning with the pound (#) symbol are preprocessor directives,
	which substitues in external text before the compiler runs
	In this case, #include includes the contents of stdafx.h in this program
	(similar to import in Java?)
	iostream
*/

using std::cout;
using std::endl;
/* 
		using tells the compiler that we are using variables 
		declared in the references library (std).
		the std:: prefix is just referencing the std (standard library) and is 
		called the 'resolution operator'
		cout in the standard library stands for console out and 
		endl stand for end line

		optionally, instead declering that im using these two vaiables in specific,
		I could write 'using namespace std;' which would give me access to all the
		vaiables declared in the standard library at the cost of more memory consumption
*/

int main() {
	/*
		The brackets () following the function name indicates a function declaration
		Function are blocks of code that perform a task and return a value
		functions in C++ are required ot declare a 'return type before the function name,
		in this case, the return type is 'int', which is short for 'integer'.
		the code contained within a function is always between curle brackets {}
	*/

	cout << "Game Over!" << endl << "Game Over!" << endl;
	/*
		cout and endl can be called as is only because we declared 
		that they are variables from the standard library beforehand.
		after calling cout, << is used to push text and values to the console
		pushing endl to the console is optional and should be used on a case-by-case scenario
	*/

	system("pause");

	return 0;
	/*
		Return tells the program to exit back to the operating system.
		return also breaks the current operation, meaning that any code in the same
		code-block the follows return, will not be executed
		the return function must return the same value type as declared in the
		initial function declaration 'int main()' or the compiler will throw an error
	*/
}