/*
 * ============================================================================
 * Program: Display a specific pattern of characters based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 19/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user. If
 *   the number of rows and columns are the same, it displays a pattern of
 *   '$', '#', and '*' characters. The pattern is such that:
 *   - The diagonal elements (where row index equals column index) are '$'.
 *   - Above the diagonal (where row index is less than column index) are '*'.
 *   - Below the diagonal (where row index is greater than column index) are '#'.
 *   If the number of rows and columns are not the same, it prompts the user
 *   to enter the same value for both inputs.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * $   *   *   * 
 * #   $   *   * 
 * #   #   $   * 
 * #   #   #   $
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '$', '#', and '*' characters based on
 *                  the number of rows and columns provided by the user. The
 *                  pattern is such that:
 *                  - '$' is printed where the row index equals the column index.
 *                  - '*' is printed where the row index is less than the column index.
 *                  - '#' is printed where the row index is greater than the column index.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           19/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Check if the number of rows and columns are equal
    if(iRow != iCol)
    {
        printf("Please enter the same value for both rows and columns.\n");
        return;
    }

    // Loop through each row
	for(i= 1; i <= iRow; i++)	
	{
        // Loop through each column in the current row
		for(j=1; j<=iCol; j++) 
		{
            // Print '*' if row index is less than column index
            if(i < j)
            {
                printf("*\t");
            }
            // Print '#' if row index is greater than column index
            else if(i > j)
            {
                printf("#\t");
            }
            // Print '$' if row index equals column index
            else if(i == j)
            {
                printf("$\t");
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