{{{cpp
#include <iostream>
#include <cstdlib> // random numbers
#include <ctime> // 

using std::cout;
using std::cin;
using std::endl;



int main()
{
	srand(static_cast<unsigned int>(time(0)));// randomseed
	// The function rand() is assigned to randomNumber
	int randomNumber = rand();
	// 
	int die = (randomNumber % 6) + 1; // between 1 and 6
	cout << " You rolled a " << die << endl;

return 0;

