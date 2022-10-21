#include "main.h"

/*making this so the compiler could know what type of function putchar is.*/
void        ft_putchar(char c)
            {
                    write(1, &c, 1);
            }

/*main just called ft_putstr which is prototyped as having a char return value. Sidenote: a function prototype tells the compiler what sort of function ft_putstr is*/

/*Here we will define the function.*/

/*iterate through the string. Since I can't use strlen() and since strlen stops at a "\0" character anyway, I'll declare an int variable of i and set its value to 0. Then i'll use a while loop to iterate through the string input and put it's character out the the OS (I think that's right) using putchar and passing in the str[i] as the argument. The loop willincrease by one until it reaches a the last bit character stored in it's memory address, which is "\0"*/

void        ft_putstr(char *str)
            {
                    int i;    
                    i = 0;   
                    while (str[i] != '\0')
                    {        
                            ft_putchar(str[i]);
                            i++;
                    }
             }
