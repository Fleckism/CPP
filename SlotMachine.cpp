{{{cpp
/*376 Slot machine 96
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// function prototype

int Random (int low, int high);  // range should be between 2 and 7

int main()
{
    int player_chips = 1000;
    int player_selection =0;
    int players_bet =0;
    
    
    
    while(player_chips !=0)
    {
        cout << "Player's chips: $" << player_chips << endl;
        cout << "1)  Play slot.  2)  Exit.\n" << endl;
        cin >> player_selection;
        
        if(player_selection ==2)
            break;
        
        cout << " You have $" << player_chips << " left. How much would you like to bet?" << endl;
        cout << "Enter your bet: ";
        cin >> players_bet; 
        
    
        if (player_chips >=  players_bet)
        {
            srand(time(NULL)); // initalized random seed
            
            int rand_1 = rand() % 7 +1;
            int rand_2 = rand() % 7 +1;
            int rand_3 = rand() % 7 +1;
            
            if (rand_1 == rand_2 && rand_1 == rand_3) // jackpot all 3 the same
            {
                cout << rand_1 << " " << rand_2 << " " << rand_3 << endl;
                player_chips += players_bet *10;
                cout << "JackPOT!\n" << player_chips << "\n" << endl; 
            }
            
            else if (rand_1 == rand_2 || rand_1 == rand_3) // 1's
            {
                cout << rand_1 << " " << rand_2 << " " << rand_3 << endl;
                player_chips += players_bet *5;
                cout << "Two out of 3!\n" << player_chips << "\n" << endl; 
                
            }
            
            else if (rand_1 == rand_2 || rand_2 == rand_3)  // 2's
            {
                cout << rand_1 << " " << rand_2 << " " << rand_3 << endl;
                player_chips += players_bet *5;
                cout << "Two out of 3!\n" << player_chips << "\n" << endl; 
                
            }
            
            else if (rand_1 == rand_3 || rand_2 == rand_3) 
            {
                cout << rand_1 << " " << rand_2 << " " << rand_3 << endl;
                player_chips += players_bet *5;
                cout << "Two out of 3!\n" << player_chips << "\n" << endl; 
                
            }
            else
            {
                cout << rand_1 << " " << rand_2 << " " << rand_3 << endl;
                cout << "Thanks for the cash Sucka!" << "\n" << endl;
                player_chips -= players_bet;
            }
        }
    
        
    // Program must calculate 3 random numbers between [2,7].
    
    // If all three numbers are 7's the player wins 10 times the bet.
    
    // If all three numbers are the same the player wins 5 times the bet.
    
    // If two of the numbers are the samee the player wins 3 times the bet.
        else
            cout << "\nInvalid bet." << endl;
            
    }
}

