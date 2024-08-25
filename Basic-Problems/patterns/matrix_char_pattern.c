/*
 * ============================================================================
 * Program: Display a pattern of '*', '$', and '#' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 25/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*', '$', and '#' characters in a square matrix.
 *   The pattern includes:
 *   - '*' characters on the borders (top, bottom, left, and right edges) and
 *     the diagonal of the matrix.
 *   - '$' characters in positions where the row index is greater than the column index.
 *   - '#' characters in positions where the row index is less than the column index.
 *   The pattern will be displayed only if the number of rows equals the number
 *   of columns. If not, the user is prompted to enter equal values for both inputs.
 * Example:
 * Input : iRow = 6    iCol = 6
 * Output:
 * *   *   *   *   *   *
 * *   $   $   $   *   *
 * *   $   $   *   #   *
 * *   $   *   #   #   *
 * *   *   #   #   #   *
 * *   *   *   *   *   *
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*', '$', and '#' characters based on the
 *                  number of rows and columns provided by the user. The pattern
 *                  includes '*' characters on the borders and diagonal of the matrix.
 *                  '$' characters are printed where the row index is greater than
 *                  the column index, and '#' characters are printed where the row
 *                  index is less than the column index. The function only displays
 *                  the pattern if the number of rows equals the number of columns.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           25/08/2024
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
	for(i= iRow; i >= 1; i--)	
	{
        // Loop through each column in the current row
		for(j = 1; j <= iCol; j++) 
		{
            // Print '*' if it's on the border (first or last row/column) or on the diagonal
            if ((i == iRow)||(j == iCol) || (i == 1) || (j == 1) || (i == j))
            {
                printf("*\t");
            }
            // Print '#' if the row index is less than the column index
            else if( i < j)
            {
                printf("#\t");
            }
            // Print '$' if the row index is greater than the column index
            else if(i > j)
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