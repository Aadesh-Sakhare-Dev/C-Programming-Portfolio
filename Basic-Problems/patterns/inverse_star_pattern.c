/*
 * ============================================================================
 * Program: Display a pattern of '*' and '#' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 14/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*' and '#' characters. The number of '*' characters
 *   decreases from left to right as you move down the rows, and the remaining
 *   characters in each row are '#'.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * *   *   *   * 
 * *   *   *   #
 * *   *   #   #
 * *   #   #   #
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*' and '#' characters based on the
 *                  number of rows and columns provided by the user. The pattern
 *                  starts with all '*' characters in the first row and gradually
 *                  replaces '*' with '#' from right to left as you move down
 *                  the rows.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           14/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

	// Loop through each row starting from iRow and decreasing
	for(i = iRow; i >= 1; i--)	
	{
		// Loop through each column in the current row
		for(j=1; j<=iCol; j++) 
		{
			// Print '*' if the current row index is greater than or equal to column index
			if(i >= j)
			{
				printf("*\t");
			}
			else	// Print '#' otherwise
			{
				printf("#\t");
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