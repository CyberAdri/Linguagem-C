#include <stdio.h>

int main() 
{
    int mat[3][3],lin, col,maior=0,contigual=0;
    printf ("\nDigite valor para os elementos da matriz\n\n"); 
    for ( lin=0; lin<3; lin++ )
    for ( col=0; col<3; col++ ) 
    {
        printf ("Elemento[%d][%d] = ", lin, col);
        scanf ("%d", &mat[lin][col]);
        if (mat[lin][col]>maior) 
        {
            maior=mat[lin][col];
            contigual=1;
        } 
        else
            if (mat[lin][col]==maior)
            contigual++;    
        }

    printf("\n Maior: %d ",maior);
    printf("\n Ocorrenias do maior: %d ",contigual);
        return 0;
}
