/*
 * ============================================================================
 * Program: Display a numerical pattern based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 21/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of numbers. The numbers start from 1 in the first row
 *   and increment in each subsequent column. As you move down the rows, the
 *   pattern shifts to the right, with earlier numbers being replaced by tabs.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * 1       2       3       4
 *         2       3       4
 *                 3       4
 *                         4
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of numbers based on the number of rows and
 *                  columns provided by the user. The pattern starts with all
 *                  numbers from 1 to the number of columns in the first row and
 *                  shifts to the right in subsequent rows, replacing earlier
 *                  numbers with tabs.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           21/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Check if the number of rows and columns are equal
    if(iRow != iCol)
    {
        printf("Please enter the same value for both inputs.\n");
        return;
    }

    // Loop through each row
	for(i= 1; i <= iRow; i++)	
	{
        // Loop through each column in the current row
		for(j = 1; j <= iCol; j++) 
		{
            // Print the number if the column index is greater than or equal to row index
            if(i <= j) 
            {
                printf("%d\t",j);
            } 
            else
            {
                // Print a tab for positions where no number is displayed
                printf("\t");
            }
            
		}
		printf("\n");   // Move to the next line after each row is printed
    }
}

/*
* ============================================================================
*   Function Name :     main
*   Description :       Its a entry point function.
* ============================================================================
*/

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    // Get input from user for the number of rows
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    // Get input from user for the number of columns
    printf("Enter number of column : ");
    scanf("%d",&iValue2);

    // Call the Pattern function with user input values to print the pattern
    Pattern(iValue1, iValue2);

    return 0;
}