/*
 * ============================================================================
 * Program: Display a pattern of numbers and '*' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 16/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern with numbers on the borders and '*' in the inner area.
 *   The numbers increment from 1 up to the column number.
 * Example:
 * Input : iRow = 4    iCol = 5
 * Output:
 * 1   2   3   4
 * 1   *   *   4
 * 1   *   *   4
 * 1   2   3   4
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern where the borders are filled with numbers 
 *                  corresponding to the column index and '*' in the inner area.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           16/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

	// Loop through each row
	for(i= 1; i <= iRow; i++)
	{
		// Loop through each column in the current row
		for(j=1; j<=iCol; j++) 
		{
			// Print numbers on the borders and '*' otherwise
			if((i == 1) || (j == 1) || (i == iRow) || (j == iCol)) 
			{
				printf("%d\t",j);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");	// Move to the next line after each row is printed
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