/*
 * ============================================================================
 * Program: Display a pattern of '*', '#', and '@' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 23/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*' and '#' characters based on the following rules:
 *   - '*' characters appear in positions where the row index is greater than
 *     the column index.
 *   - '#' characters appear in positions where the row index equals the column index.
 *   - '@' characters appear in positions where the row index is less than the column index.
 *   The pattern is displayed in a square format where the number of rows equals
 *   the number of columns. If the row and column numbers are not equal, the program
 *   prompts the user to enter the same value for both inputs.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * *   *   *   *   #
 * *   *   *   #   @
 * *   *   #   @   @
 * *   #   @   @   @
 * #   @   @   @   @
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*', '#', and '@' characters based on the
 *                  number of rows and columns provided by the user. The pattern
 *                  starts with all '*' characters in the first row and gradually
 *                  replaces '*' with '#' and '@' from right to left as you move down
 *                  the rows. The pattern will be displayed only if the number of rows
 *                  equals the number of columns; otherwise, a prompt will be shown.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           23/08/2024
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

    // Loop through each row starting from iRow and decreasing
	for(i= iRow; i >= 1; i--)	
	{
        // Loop through each column in the current row
		for(j = 1; j <= iCol; j++) 
		{
            // Print '@' if the row index is less than the column index
            if (i < j)
            {
                printf("@\t");
            }
            // Print '*' if the row index is greater than the column index
            else if (i > j)
            {
                printf("*\t");
            }
            // Print '#' if the row index equals the column index
            else if(i == j)
            {
                printf("#\t");
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