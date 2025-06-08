/* Header Guard
 * Purpose: It prevents the file form being included multiple time in the same compilation unit, which would cause redefinition errors.
 * #ifndef CALCULATOR_H : checks if CALCULATOR_H is not defined
 * #define CALCULATOR_H : defines CALCULATOR_H so subsequent skip this file.
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
public:
	Calculator(); // Constructor
	
	/* Virtual destructor
	 * Ensures that if a derived class inherits from Calculator, its destructor will be call correctly during object destruction.
	 * = defalut: means the compiler provides a default implementation
	 * vitual: makes the destructo polymorhic, ensuring safe destruction of derived object thorugh base-class pointers.
	 */
	virtual ~Calculator() = default;


	/* Maths Operation Functions
	 * Take imputs (probably via std::cin or as arguments),
	 * Perform correspoinding operations(e.g., add() will add two numbers,
	 * Store resul in the 'result' data member.
	 */

	void add(); // Function to get user input adn do operations

	void subtract();
	void multiply();
	void divide();
	void sqrt();
	void square();

	/* Memory Handling
	 * setMem(): Saves the current result to memory(mem).
	 * printMem() const: displays the memory value.
	 * const at the end means this funciton won't modify any data members.
	 */
	void setMem(); // Function to get and set mem

	void printMem() const;

	/* Input Parsing
	 * Accpets a sting input (e.g., 'mem', 'reusult', or a number) and return ist corresponding double value.
	 * It maps user-friendly stings to internal values.
	 */
	/// Parse imput subs in nuber value when strings result or mem are entered
	double parseInput(const std::string&) const;




	/* Virtual Functions for user Interaction
	 * virtual function allow derived classe to modify behaviors.
	 * welcome(): Displays a welcome message or help menue - Marked virtual so derived classes (e.g., ScientificCalculator) can override it with a specialized message.
	 * parseOperation(): Reads a user input string (like 'add' or 'square') and calls the appropriate fuction.
	 */
	// provides data on user options, will be overloaded
	virtual void welcome() const;

	// parse input and decide which member func to call
	virtual void parseOperation(const std::string&);

protected:
	double result; // data member to store reuslt

	double mem; // data member to store mem

};


// Ends the #ifndef guard form the top. Prevents multiple inclusions of this file.
#endif // CALCULATOR_H




/* Importance of this code
 * Class abstraction: Groups related functionalities together for reusability and encapsulation
 * Header guards: Prevents multiple definition errors.
 * Virtual destructor: Ensures proper cleanup in ploymorphic use cases. 
 * Public interface: Clearly defines what the user of the class can do (add, subtract, etc.)
 * Polymorphism support: 'virtual' functions allow derived classes to modify behaviors.
 * Encapsulation: Keeps 'reuslt' and 'mem' safe from external modification
 * Extensibility: Can easily be extended to include scientific functions (e.g., sin, cos, etc.).
 */
