#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char *pA = malloc(100 * (sizeof(char)));
    char *pB = malloc(100 * (sizeof(char)));

    printf("Player 1 : ");
    scanf("%99s", pA);

    printf("Player 2 : ");
    scanf("%99s", pB);

    if (pA == NULL || pB == NULL)
    {
        printf("Memory allocation failed\n");

        return 1;
    }

    int len_a = strlen(pA);
    int len_b = strlen(pB);

    if(len_a > len_b){
        printf("Player 1 wins \n");

    }
    else if (len_b > len_a)
    {
        printf("Player 2 wins \n");
    }
    else if (len_a == len_b)
    {
        printf("Tie! \n");
    }
    
    else{
        printf("Invalid input\n" );
    }

    free(pA);
    free(pB);
    


}