#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int currentIndex = 0;

    while (n > 0)
    {
        if (currentIndex == index)
        {
            if (n % 2 == 1)
                return 1; 
            else
                return 0;
        }
        n = n >> 1;
        currentIndex++;
    }
    if (index >= currentIndex && index < 63)
        return (0);
    return -1;
}
