// Lab 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Sharath Ravishankar

#include "Definitions.h"
#include "Rational.h"

//Question 1.a & b.
/*
int tripleByValue(int); //function prototype pass by value
void tripleByReference(int&); //function prototype pass by reference


int main()
{
	int countValue = 5; //value to triple by value
	int countReference = 10; //value to triple by reference

	std::cout << " Count by value before was " << countValue << std::endl;
	//std::cout << tripleByValue(countValue)<< std::endl;
	std::cout << " Count by value after is " << countValue << std::endl;
	std::cout << std::endl;
	std::cout << " Count by reference before was " << countReference << std::endl;
	tripleByReference(countReference);
	//std::cout << countReference << std::endl;
	std::cout << " Count by reference after is " << countReference<< std::endl;

}

int tripleByValue(int number)
{
	return number = number * number * number;
}

void tripleByReference(int& numberRef)
{
	numberRef = numberRef * numberRef * numberRef;
}
*/


//Question 2

//What’s the purpose of the unary scope resolution operator?
//It is used to refer global variables and local variables without the risk of overlapping the same variable names.


//Question 3

int main()
{
	Rational c(2, 5);
	Rational d(1, 3);
	Rational f(1, 4);
	Rational e;
	e = c + d;
	e.toString();
	std::cout << std::endl;

	e = c - d;
	e.toString();
	std::cout << std::endl;

	e = c * d;
	e.toString();
	std::cout << std::endl;

	e = c / d;
	e.toString();
	std::cout << std::endl;

	std::cout << (f < d) << std::endl;
	std::cout << std::endl;

	std::cout << (f > d) << std::endl;
	std::cout << std::endl;

	return 0;
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
