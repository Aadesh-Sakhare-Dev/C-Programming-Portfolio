/*
 * ============================================================================
 * Program: Display a specific pattern of '*' based on user input
 * Author: Aadesh Dipak Sakhare
 * Date: 20/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*' characters. The pattern features stars on the
 *   border of the grid and the main diagonal, creating a distinct shape.
 * Example:
 * Input : iRow = 6    iCol = 6
 * Output:
 *
 *  *       *       *       *       *       *
 *
 *  *       *                               *
 *
 *  *               *                       *
 *
 *  *                       *               *
 *
 *  *                               *       *
 *
 *  *       *       *       *       *       *
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*' characters based on the number of
 *                  rows and columns provided by the user. The pattern includes
 *                  stars on the border and the main diagonal of the grid.
 *                  Specifically:
 *                  - Stars are printed on the first and last rows.
 *                  - Stars are printed on the first and last columns.
 *                  - Stars are printed along the main diagonal.
 * Input :         Integer, Integer               
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           20/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Check if the number of rows and columns are the same
    if(iRow != iCol)
    {
        printf("Please enter the same value for both rows and columns.\n");
        return;
    }

    // Loop through each row
	for(i= 1; i <= iRow; i++)	
	{
        // Loop through each column in the current row
		for(j = 1; j <= iCol; j++) 
		{
            // Print '*' for border and diagonal elements
            if((j == iCol) || (i == iRow) || (j == 1) || (i == 1) || (i == j)) 
            {
                printf("*\t");
            } 
            else
            {
                // Print space for non-border and non-diagonal elements
                printf("\t");
            } 
		}
		printf("\n\n"); // Print a newline after each row
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