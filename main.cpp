#include <iostream>
#include "Converter.h"
using namespace std;

int main(){

	Converter a;

	ifstream file;
	file.open("input.txt");

	a.build(file);
	a.convertNFA2DFA();

	cout << endl << endl;
	cout << "stop";

	return 0;

}