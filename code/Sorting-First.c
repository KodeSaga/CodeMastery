#include <stdio.h>
#include <stdlib.h>             //included for using malloc()   

/* 
Sort any array of integers in ascending or descending order, where the arraylength, 
and choice of order are made by the end user.
*/

//int main(int argc, char **argv )
int main()
{
    int count=0;                //This variable stores the number of integers entered by the user.
    int order=0;                //This variable stores the order in which the sorting is to be done.
    int i = 0;
    int j = 0;
    int m =0;
    
    printf("\n\n Enter 1 for sorting in Ascending or -1 for Sorting in descending -- ");
    scanf("%d", &order);
    
    if (order != -1 && order != 1)
    {
        printf("\n\n Entered wrong option - Exiting Program");
        return 0;               //exit the program
    }
    
    printf("\n\n How many integers are you sorting ? --> ");
    scanf("%d", &count);
    
    if (count <= 0)
    {
        printf("\n\n It seems you entered invalid count -- Exiting Program");
        return 0;               //exit the program
    }
    
    
    int *numbers = (int*) malloc(count * sizeof(int));      //Dynamic array allocation
    printf("\n\n");
           
    for(i=0;i<count;i++)        //input of all integers to be sorted
    {
        printf("\nInter Count %d = ", i+1);
        scanf("%d",&numbers[i]);  
    }
    
    if(order==1)
        for(i=0;i<count;i++)
            for(j=i+1;j<count;j++)
            {
                if(numbers[i]>numbers[j]) 
                {
                    m=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=m;
                }
            }
    else
        for(i=0;i<count;i++)
            for(j=i+1;j<count;j++)
            {
                if(numbers[i]<numbers[j]) 
                {
                    m=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=m;
                }
            }
        
   
           
    for(i=0;i<count;i++)
    {
        printf("\nInter Count %d = %d", i+1, numbers[i]);
    }
    return 0;
}