#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H
#include "Definitions.h"

class Rational
{
private:
	int numerator;
	int denominator;
public:
	Rational() {}
	Rational(int num, int deno)
	{

		if (deno > 0)
		{
			for (int i = deno * num; i > 1; i--)
			{
				if ((deno % i == 0) && (num % i == 0))
				{
					num = num / i;
					deno = deno / i;
				}
			}
			numerator = num;
			denominator = deno;
		}
		else
		{
			std::cout << "Denominator should be above 0" << std::endl;
		}


	}
	friend std::ostream& operator<< (std::ostream& out, const Rational& rational); //in order to have access to this direectly while creaing the cout operator function
	friend std::istream& operator>> (std::istream& in, Rational& rational); //in order to have access to this direectly while creaing the cout operator function


	void reduced(int& num, int& deno)
	{

		for (int i = deno * num; i > 1; i--)
		{
			if ((deno % i == 0) && (num % i == 0))
			{
				num = num / i;
				deno = deno / i;
			}
		}
	}

	Rational operator+ (Rational j)
	{

		int outputNum = numerator * j.denominator + j.numerator * denominator;
		int outputDeno = j.denominator * denominator;
		reduced(outputNum, outputDeno);
		j.denominator = outputDeno; // assigns sum into output variable
		j.numerator = outputNum;
		//std::cout << outputNum << "/" << outputDeno << std::endl;
		return j;
	}

	Rational operator- (Rational j)
	{
		int outputNum = numerator * j.denominator - j.numerator * denominator;
		int outputDeno = j.denominator * denominator;
		reduced(outputNum, outputDeno);
		j.denominator = outputDeno; // assigns sum into output variable
		j.numerator = outputNum;
		//std::cout << outputNum << "/" << outputDeno << std::endl;
		return j;
	}

	Rational operator* (Rational j)
	{
		int outputNum = numerator * j.denominator;
		int outputDeno = denominator * j.numerator;
		j.denominator = outputDeno; // assigns sum into output variable
		j.numerator = outputNum;
		//std::cout << outputNum << "/" << outputDeno << std::endl;
		return j;
	}

	Rational operator/ (Rational j)
	{
		int outputNum = numerator * j.numerator;
		int outputDeno = denominator * j.denominator;
		reduced(outputNum, outputDeno);
		j.denominator = outputDeno; // assigns sum into output variable
		j.numerator = outputNum;
		//std::cout << outputNum << "/" << outputDeno << std::endl;
		return j;
	}

	bool operator== (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (numerator == j.numerator && denominator == j.denominator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!= (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (numerator != j.numerator && denominator != j.denominator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator< (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (outputResult1 < outputResult2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator> (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (outputResult1 > outputResult2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<= (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (outputResult1 <= outputResult2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>= (Rational j)
	{
		double outputResult1 = toDouble(numerator, denominator);
		double outputResult2 = toDouble(j.numerator, j.denominator);
		if (outputResult1 >= outputResult2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//std::ostream& operator<< (Rational j)
	//{
	//	
	//	return std::cout << j.numerator << "/" << j.denominator;
	//}

	std::ostream& operator<< (const Rational& j)
	{
		return std::cout << j.numerator << "/" << j.denominator;
	}

	std::istream& operator>> (Rational& j)
	{
		return std::cin >> j.numerator >> j.denominator;
	}

	void toString()
	{
		std::cout << numerator << "/" << denominator << std::endl;
	}

	double toDouble(int aNum, int aDeno)
	{
		double outputNum = static_cast<double>(aNum);
		double outputDeno = static_cast<double>(aDeno);
		double outputResult = outputNum / outputDeno;
		//std::cout << outputNum << "/" << outputDeno << std::endl;
		return outputResult;
	}

};

#endif;