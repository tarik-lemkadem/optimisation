// optimisation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//






#include <iostream>
#include "bits\stdc++.h"
#include "math\tinyexpr.h"
using namespace std;

map<string, int> M;


string diff(string f) {
	int x = M[f];
	switch (x)
	{
	case 1: cout << "hello again";
	default:
		break;
	}

	return f;
}

int error;



int main()
{
	M["^"] = 1;
	M["sin"] = 2;
	M["cos"] = 3;
	M["e"] = 4;
	M["/"] = 5;
	// M[''] = 3;
	/*
	double x, y;
	// Store variable names and pointers. 
	te_variable vars[] = { {"x", &x}, {"y", &y} };

	int err;
	// Compile the expression with variables. 
	te_expr* expr = te_compile("sqrt(x^2+y^2)", vars, 2, &err);

	if (expr) {
		x = 3; y = 4;
		const double h1 = te_eval(expr); // Returns 5. 

		x = 5; y = 12;
		const double h2 = te_eval(expr); // Returns 13. 

		te_free(expr);
	}
	else {
		printf("Parse error at %d\n", err);
	}
	 */


	double a = te_interp("(5+5)", &error);
    std::cout << "Hello World!\n"<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
