/**************************************************
program to print the following pattern for n rows -
* * * * * * 
 * * * * *  
  * * * *   
   * * *    
    * *     
     *      
**************************************************/

#include <stdio.h>
int main()
{
	int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for (i = n; i >= 1; i--)
    {
    	for (j = n; j > i; j--)
    	{
    		printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}