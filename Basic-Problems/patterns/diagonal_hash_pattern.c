/*
 * ============================================================================
 * Program: Display a pattern of '*' and '#' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 22/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*' and '#' characters. The pattern is such that
 *   in each row, there is exactly one '#' character at a position determined
 *   by the row number, and all other positions in that row contain '*'.
 *   The pattern is only displayed if the number of rows equals the number
 *   of columns. If not, an error message is shown.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * *   *   *   *   #
 * *   *   *   #   *
 * *   *   #   *   *
 * *   #   *   *   *
 * #   *   *   *   *
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*' and '#' characters based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains one '#' character at the position corresponding
 *                  to the row index, and all other positions in that row
 *                  are filled with '*'. The pattern is only printed if the
 *                  number of rows is equal to the number of columns.
 * Input :         Integer ,Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           22/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Check if the number of rows and columns are the same
    if(iRow != iCol)
    {
        printf("Please enter the same value for both inputs.\n");
        return;
    }

    // Loop through each row
	for(i= iRow; i >= 1; i--)	
	{
        // Loop through each column in the current row
		for(j = 1; j <= iCol; j++) 
		{
            // Print '#' if the current column index matches the row index
            if (j == i)
            {
                printf("#\t");
            }
            else
            {
                // Print '*' otherwise
                printf("*\t");
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