#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Matrix
{
    int nbrLigne;
    int nbrColonne;
    int *tabL;
    int *tabC;
};
typedef struct Matrix Matrix;

int scanUnElement()
{
    int buf;
    scanf("%i\n", &buf);
    return buf;
}

void *scanUneMatrice(struct Matrix matrix[])
{
    int TailleL = scanUnElement();
    printf("%d", TailleL);
    int TailleC = scanUnElement();
    printf("%d", TailleC);
    for (int i = 0; i <= TailleL; i++)
    {
        for (int j = 0; j <= TailleC; j++)
        {
            int nbMatrices = scanUnElement();
            printf("%d", nbMatrices);
        }
    }
}
void *scanMatrices(int nbrgagnant, struct Matrix matrix[])
{
    for (int i = 0; i <= nbrgagnant; i++)
    {
        matrix[i].tabC = scanUneMatrice();
    }
}

/* void printSameData()
{
    for (int i = 0; i < nbrMatrices; i++)
    {
        int nbrLigne = scanLine();
        for (int j = 0; j < nbrLigne)

    }
} 
 */

char *scanLine()
{
    int maxLineSize = 255;
    char c, *line = calloc(maxLineSize + 1, sizeof(char));
    scanf("%250[^\n]", line);
    if ((c = getchar()) != '\n')
    {
        line[250] = '[';
        line[251] = line[252] = line[253] = '.';
        line[254] = ']';
        while (((c = getchar()) != '\n') && c != EOF)
            ;
    }
    return line;
}
int main(void)
{
    int nbMatrices = scanUnElement();
    printf("%d", nbMatrices);
    Matrix matrix[nbMatrices];
    // scanUneMatrice(matrix);
    scanMatrices(nbMatrices, matrix);
    //readMatrix(nbMatrices, matrix);


    // Print fichier identique
    for(int m=0; m<15;m++){
        scanLine();
    }
    return 0;
}