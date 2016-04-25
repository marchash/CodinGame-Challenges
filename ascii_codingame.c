#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    fgets(T, 257, stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        fgets(ROW, 1025, stdin);

        int j = 1;
        do
        {
            if (T[j-1] >= 'A' && T[j-1]<= 'Z') //if the input char is in upper case
            {
                for (int b = (T[j-1] - 'A' + 'a'- '0' - '0' - 1)*L; b < (T[j-1] - 'A' + 'a'- '0' - '0')*L; b++)
                    printf ("%c", ROW[b]);
            }
            else if (T[j-1] >= 'a' && T[j-1] <= 'z') //if the input char is in lower case
            {
                for (int b = (T[j-1] - '0' - '0' - 1)*L; b < (T[j-1]  - '0' - '0')*L; b++)
                    printf ("%c", ROW[b]);
            }
            else //if the input char is not a letter
            {
                for (int b = ('z' - '0' - '0')*L; b < ('z'  - '0' - '0' + 1)*L; b++)
                    printf ("%c", ROW[b]);
            }
            j++;
        }
        while (j < strlen(T));
        printf ("\n"); //To go to a new row to represent correctly
    }

    return 0;
}
