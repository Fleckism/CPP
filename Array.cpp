{{{cpp
#include <iostream>

using namespace std;

int main()
{
	int x = 0; //East to West
	int y = 0; // North to South

	int current_position[2] = { x,y };
	char direction_travel = 'Z';

	while (direction_travel != 'Q')
	{
		cout << "Current Position = (" << current_position[x] << ',' << current_position[y] << ')' << endl;
		cout << "Move (N)orth, (E)ast, (W)est, (S)outh, (Q)uit?" << endl;

		cin >> direction_travel;

		switch (direction_travel)
		{
		case 'N':
			current_position[y] = ++y;
			break;

		case 'n':
			current_position[y] = ++y;
			break;

		case 'S':
			current_position[y] = --y;
			break;

		case 's':
			current_position[y] = --y;
			break;

		case 'E':
			current_position[x] = --y;
			break;

		case 'e':
			current_position[x] = --y;
			break;

		case 'W':
			current_position[x] = ++y;
			break;

		case 'w':
			current_position[x] = ++y;
			break;


		case 'Q':
			cout << "Exiting Program..." << endl;
			break;

		case 'q':
			cout << "Exiting Program..." << endl;
			break;

		default:
			cout << "Invalid entry." << endl;
		}
	}
}


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void RandomArrayFill(int* array_ptr, int size) 
{
    srand(time(NULL));
    for(int i =0; i < size; i++)
    {
        array_ptr[i] = rand() % 100;
    }
}




void PrintArray(int* array_ptr, int size) 
{
    if(size ==0)
        cout << "NULL Array" << endl;
        
    else
    {
        cout << "{";
        for(int i =0; i < size; i++)
        {
            cout << array_ptr[i] << " , ";
        }   
            cout << "}\n" << endl;
    }
}

int main() 
{
    int* array_ptr; 
    cout << "Enter the size of an array to create: ";
    
    int user_input =0;
    cin >> user_input;
    cout<< "\nCreating array and filling it with random numbers..."<< endl;
    
    
    array_ptr = new int[user_input]; 
    
    //for(int i=0; i < user_input; i++)
     //
   //array_ptr[i] = i;
    
    RandomArrayFill(array_ptr,user_input);
    PrintArray(array_ptr, user_input);
}
