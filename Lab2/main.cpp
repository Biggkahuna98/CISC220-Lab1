/*
 * main.cpp
 *
 *  Created on: Sep 11, 2018
 *      Author: Alex Sederquest, Michael Flanagan
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define SPACER ("*****************************************************")

// intValue() : void, no parameters
// It creates an int and assigns it a value, then prints
// the value and the memory address
void intValue();

// add4(int num) : void, int parameter
// It adds 4 to num and prints out the value and address
void add4(int num);

// rand50() : int, no parameters
// It generates a random number between 0 to 50, prints out the value and memory address,
// then returns it
int rand50();

int main()
{
	intValue();
	cout << SPACER << endl;

	int n = 6;
	cout << n << endl;
	cout << &n << endl;
	// Call by value
	add4(n);
	cout << SPACER << endl;

	int num = rand50();
	cout << num << endl;
	cout << &num << endl;
	cout << SPACER << endl;


	return 0;
}

void intValue()
{
	int x = 69;
	cout << x << endl;
	cout << &x << endl;
}

void add4(int num)
{
	num += 4;
	cout << num << endl;
	cout << &num << endl;
}

int rand50()
{
	srand(time(NULL));
	int num = rand() % 50;
	cout << num << endl;
	cout << &num << endl;
	return num;
}



