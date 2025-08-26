//Guessing the number by computer 
// and then user has to decide which number the computer guessed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int acnum, prnum, count = 0;
    srand(time(NULL));
    acnum = rand() & 100;
    while (acnum !=prnum)
    {
        printf("Enter the guessed number by you : ");
        scanf("%d", &prnum);
        if (acnum > prnum)
        {
            printf("Smaller then the actual number\n");
        }
        else if (acnum < prnum)
        {
            printf("Greater then the actual number\n");
        }
        count++;
    }
    printf("After the guessing the number by %d times ,the guessed number is %d", count, prnum);
    return 0;
}
