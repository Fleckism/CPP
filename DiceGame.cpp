{{{cpp
/*void Dice (int* die1, int* die2);
*void Dice (int& die1, int& die2);
* 7 and 11 win everything else loses 7 to 1
* doubles 10 to 1
* snake eyes 30 to 1* 
* ctrl + alt + w
*/ 
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Dice (int* die_1ptr, int* die_2ptr)
{
    srand(time(NULL));
    *die_1ptr = rand() % 6 +1;
    *die_2ptr = rand() % 6 +1;
}

int main ()
{
    int player_bank =1000;
    int player_selection =0;
    int player_bet =0;
    
    while (player_bank !=0)
    {
        cout << "Players bank is $" << player_bank << endl;
        cout << "1) Play craps.  2) Exit.\n" << endl;
        cin >> player_selection;
        
        if (player_selection ==2)
            break;
            
        cout << "You have $" << player_bank << " left.  How much would you like to bet?" << endl;
        cout << "Enter your bet: " ;
        cin >> player_bet;
        
        
        if(player_bank >= player_bet)
        {

            int rand_1 = 99;
            int rand_2 = 99;
            
            Dice(&rand_1,&rand_2);
             
            if(rand_1 ==1 && rand_2 ==1)
            {
                cout << "Snake Eyes!" << rand_1 << " " << rand_2 << endl; // outputing dice
                player_bank += player_bet *30;             
            }
            
            else if(rand_1 == rand_2) // dice match this works
            {
                cout << rand_1 << " " << rand_2 << endl; // outputing dice
                player_bank += player_bet *10;        
            }
            
            
            else if(rand_1 + rand_2 == 7 ||rand_1 + rand_2 == 11)
            {
                cout << rand_1 << " " << rand_2 << endl; // outputing dice
                player_bank += player_bet *7;
            }
            else
            {
                cout << rand_1 << " " << rand_2 << endl; 
                cout <<"\nYou lose! Gambling Doesn't Pay!\n" << endl;
                player_bank-= player_bet;
            }
        }
        else
            {
                cout << "You don't have that much money try again :(" << endl;
            }
    }
    
    
    
}
