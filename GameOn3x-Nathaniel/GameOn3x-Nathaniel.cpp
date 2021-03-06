// GameOn3x-Nathaniel.cpp : Defines the entry point for the console application.

// any line beginning with double slashes (//) becomes a commented line, and will be
// ignored by the compiler.

/* 
	C++ also supports block-comments, which are multi-line comments surrounded by an 
	opening /* and a closing  * / (without the space).
	like commented lines, whitespaces (tabs, newlines, etc.) are just for humans
	the compiler inherently ignores all whitespaces and instead looks for a semi-colon (;)
	to indicate the end of a statement. Not using a semi-colon
*/

#include "stdafx.h"
#include <iostream>
/* 
	Lines beginning with the pound (#) symbol are preprocessor directives,
	which substitues in external text before the compiler runs
	In this case, '#include' includes the contents of stdafx.h in this program
	(similar to import in Java?)
	iostream
*/

using std::cout;
using std::endl;
/* 
		'using' is a directive that tells the compiler that we are using variables 
		declared in the references library std namespace.
		the std prefix is just referencing the std (standard library) 
		the double colons (::) is the 'resolution operator'. This operator sets the 
		scope of what I want to import (in this case just the variable cout, and endl)
		cout in the standard library stands for console out and endl stand for end line

		optionally, instead declaring that im using these two vaiables in specific,
		I could write 'using namespace std;' which would give me access to all the
		vaiables declared in the standard library at the cost of more memory
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
		after calling cout, the output operator (<<) is used to push text and values to the console (cout)
		Note: there is also an extractoin operator (>>) which is used to pull input values from cin and 
		assign them to a variable e.g. cin >> val;
		pushing endl to the console is optional and should be used on a case-by-case scenario
	*/

	system("pause");
	/* 
		system() is a function defined in the <cstdlib> header which calls the host environments (windows 
		in this case) command processor (cmd.exe) with the parameter 'command'. The String passed to system() 
		is then evaluated by the command processor and the value returned. In this case, 'pause' is a batch command
		which temporarily haults the scripts (main()'s) execution until a key is pressed. The two downsides of using
		the system function are: It's an expensive and resource intensive fuction call, and It will only work on 
		sytem that have the passed command at the system level (in this case Windows, DOS).
	*/

	return 0;
	/*
		Return tells the program to exit back to the operating system.
		return also breaks the current operation, meaning that any code in the same
		code-block the follows return, will not be executed
		the return function must return the same value type as declared in the
		initial function declaration 'int main()' or the compiler will throw an error
	*/
}