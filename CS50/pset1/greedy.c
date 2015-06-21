#include <cs50.h>
#include <stdio.h>

int main(void)
    {
        float change = 0.0;
        
        //Prompts the user for the amount of change that is owed
        while(change <= 0)
            {
              printf("How much change is owed?\n");
              change = GetFloat(); 
              change *= 100; 
            }
        
        int quarters = 0,dimes = 0, nickles = 0, pennies = 0;
        while(change > 0)
            {
                if(change >= 25)
                    {
                        change -= 25;
                        quarters++;
                    }
                else if(change >= 10)
                    {
                        change -= 10;
                        dimes++;
                    }
                else if(change >= 05)
                    {
                        change -= 05;
                        nickles++;
                    }
                else if(change >= 01)
                    {
                        change -= 01;
                        pennies++;
                    }
                else
                    {
                        break;
                    }
            }
         printf("Quarters: %d \n", quarters);
         printf("Dimes:    %d \n", dimes);
         printf("Nickles:  %d \n", nickles);
         printf("Pennies:  %d \n", pennies);
    }					
