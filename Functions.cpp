{{{cpp
#include <iostream>
int f(int x, int y);        // f is a function taking 2 ints and returning int
void f();                   // f is a procedure taking no arguments
void f(int a=0);            // f() is equivalent to f(0)
f();                        // Default return type is int
inline f();                 // Optimize for speed
f() { statements; }         // Function definition (must be global)
T operator+(T x, T y);      // a+b (if type T) calls operator+(a, b)
T operator-(T x);           // -a calls function operator-(a)
T operator++(int);          // postfix ++ or -- (parameter ignored)
extern "C" {void f();}      // f() was compiled in C

// Function parameters and return values may be of any type. A function must either be declared or defined before
// it is used. It may be declared first and defined later. Every program consists of a set of a set of global variable
// declarations and a set of function definitions (possibly in separate files), one of which must be:


int main()  { statements... }     // or
int main(int argc, char* argv[]) { statements... }


// `argv` is an array of `argc` strings from the command line.
// By convention, `main` returns status `0` if successful, `1` or higher for errors.
//
// Functions with different parameters may have the same name (overloading). Operators except `::` `.` `.*` `?:` may be overloaded.
// Precedence order is not affected. New operators may not be created.

Concept of Function:
	Is a mapping from a set A (the domain) to a set B (the range) such that with every element in A, the function associates exactly one element in B.



}}}
