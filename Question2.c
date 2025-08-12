#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr [])
{

    int i, j, count;
    int arrIndex = 0;

    for(count = 0; count < (2 * N3) - 1; count++)
    {
        for(i = 0; i < N3; i++)
        {
            for(j = 0; j < N3; j++)
            {
                if( (i + j) == count )
                {
                    arr[arrIndex++] = mat[i][j];
                }
            }
        }
    }

}

