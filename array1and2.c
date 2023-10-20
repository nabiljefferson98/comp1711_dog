#include <stdio.h>
#include <stdlib.h>

int array1[30];
int array2[30];

int count;
int exclude;

int main()
{
    for (count=1; count<11; count++) 
    {
        do
        {
            array1[count] = rand()%10; //generate random num for array 1
            array2[count] = rand()%10+1; //generate random num for array 2


        } while (array1[count] == array2[count]); //remove same number from array 1 and 2
      
    }

    
    //buat filter / exception / benda yg tapiskan nombor sama
    // output 2 : inclusive or dan exclusive or

    for (count=1; count<11; count++) // print 20 random num from array 1 and 2
    {
        printf ("\n%d) First array is %d\n", count, array1[count]);
        printf ("   Second array is %d\n", array2[count]);
        
    }

    //print number that are excluded from array 1 and 2
    printf ("\nExluded number from first and second array are %d\n\n", exclude);
    
    return 0;
}