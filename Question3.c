#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

void efficient(const int source[], struct Q3Struct effVector[], int size)
{
	int i;
    int effIndex = 0;

    for(i = 0; i < size; i++)
    {
        if(source[i] != 0)
        {
            effVector[effIndex].val = source[i];
            effVector[effIndex++].pos = i;
        }
    }

}

void reconstruct(int source[], int m, const struct Q3Struct effVector[], int n)
{
    int i;
	
    for(i = 0; i < m; i++)
        source[i] = 0;

    for(i = 0; i < n; i++)
    {
        source[effVector[i].pos] = effVector[i].val;
    }

}