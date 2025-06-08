/* Header Guard
 * prevent the file from being included multiple times during compilation, which would cause errors.
 */
#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include <string>
#include <array>
#include <cmath>
#include "calculator.h"

/* This defines the 'Scientific' class, inheriting publicly from the 'Calculator' class.
 * This means 'Scientific' will have access to all 'public' and 'protected' members of 'Calculator'.
 * It extends functionality with additional scientific operations.
 */
class Scientific: public Calculator
{
public:
	Scientific();
	/* this 'Scientific' constructor, It may initialize additonal members or rely on the base 'Calculator' constructor for default values.
	 */
	virtual ~Scientific() = default;
	/* Virtual destructor:
	 * ensures that if a 'Scientific' object is deleted via a pointer to a 'Calculator', the proper destructor (from 'Scientific') is called.
	 * = default: tells the compiler to generate the destructor automaically.
	 */



	/* Overriding Base Class Virtual Functions
	 * welcome(): 
	 * 	- Overrides the welcome() function from 'Calculator'.
	 * 	- Will likely print a customized welcome message with the additional scientific operations available in this class.
	 *
	 * parseOperation(const std::string&):
	 * 	- Overrides the base function to interpret extra commands like 'sin', 'log', etc.
	 * 	- It determines which member function to call based on user input.
	 */ 
	virtual void welcome() const override;
	virtual void parseOperation(const std::string& input) override;
	
	/* These are additional mathematical functions not avaible in the basic calculator:
	 * These functions would likely: 
	 * 	- Prompt the suser for input,
	 * 	- Use std::sin, std::log, etc. from <cmath>
	 * 	- Store the results in the inherited result variable.
	 */
	void sin();
	void cos();
	void tan();
	void ln();
	void abs();
	void pow();
};


// Ends the considtional compiliation block that started with #ifndef SCIENTIFIC_H
#endif 


/* Importance of code and the summary
 * 
 * class Scientific: public Calculator =  Inherits functionality - Reuses base operations, adds advanced ones.
 * virtual void welcome() : Override welcome message - Shows users more options than basic calculator.
 * virtual void parseOperations() : Custom command interpreter - Allows string inputs like 'sin' to work
 */ 
