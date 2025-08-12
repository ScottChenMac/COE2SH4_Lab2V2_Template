#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

// Debugging Report Question
// 2 Semantic Errors, Debugger Report Required
// EVEN IF you see the error by code reading / by inspection, you need to still
//  1. Set up the breakpoint at the right place
//  2. Set up the watches over the relevant variables
//  3. Use stepping in debugger to show the exact moment where the bug occurs, and how it deviates from the expected behaviour
//  4. Show how your proposed fix defeats the bug.
void sortDatabyBubble(struct Q4Struct array[], int size)
{
    struct Q4Struct temp;
    temp.intData = 0;
    temp.charData = 0;

    int i;
    int curr, next;
    int done = 0;

    while(!done)
    {
        done = 1;
       
        // Error 1 - For Loop Range Incorrect
        // for(i = 0; i <= size - 1; i++)
        for(i = 0; i < size - 1; i++)
        { 
            curr = array[i].intData;
            next = array[i + 1].intData;

            // Swap two elements whenever current element value is larger than the value of the next element.
            if(curr > next)
            {
                temp.intData = array[i].intData;
                temp.charData = array[i].charData;

                // Error 2 - Swapping Done in Wrong Order
                //  array[i].intData = temp.intData;
                //  array[i].charData = temp.charData;

                //  array[i + 1].intData = array[i].intData
                //  array[i + 1].charData = array[i].charData;

                array[i].intData = array[i + 1].intData;
                array[i].charData = array[i + 1].charData;

                array[i + 1].intData = temp.intData;
                array[i + 1].charData = temp.charData;

                done = 0;
            }
        }

    }    
}


void sortDatabySelection(struct Q4Struct array[], int size)
{
    struct Q4Struct temp;
    temp.intData = 0;
    temp.charData = 0;

    int i, j;    
    int min, minIndex;
    
    for(i = 0; i < size; i++)
    {
        // Find the smallest value of the sub-array after index i
        min = array[i].intData;
        minIndex = i;

        for(j = i + 1; j < size; j++)
        {
            if(min > array[j].intData)
            {
                min = array[j].intData;
                minIndex = j;
            }
        }
       
        // If the smallest value is not at index i, swap value at index i with the smaller value
        if(minIndex != i)
        {
            temp.intData = array[i].intData;
            temp.charData = array[i].charData;

            array[i].intData = array[minIndex].intData;
            array[i].charData = array[minIndex].charData;

            array[minIndex].intData = temp.intData;
            array[minIndex].charData = temp.charData;
        }

    }
}

