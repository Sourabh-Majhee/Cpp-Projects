#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
public:
	Calculator(); // Constructor
	virtual ~Calculator() = default; // Virtual destructor to prevent delete errors

	void add(); // Function to get user input adn do operations

	void subtract();
	void multiply();
	void divide();
	void sqrt();
	void square();
	void setMem(); // Function to get and set mem

	void printMem() const;

	/// Parse imput subs in nuber value when strings result or mem are entered
	double parseInput(const std::string&) const;

	// provides data on user options, will be overloaded
	virtual void welcome() const;

	// parse input and decide which member func to call
	virtual void parseOperation(const std::string&);

protected:
	double result; // data member to store reuslt

	double mem; // data member to store mem

};

#endif // CALCULATOR_H
