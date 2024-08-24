/*
 * ============================================================================
 * Program: Display a border and diagonal pattern of '*' based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 24/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of '*' characters. The pattern consists of '*' characters
 *   on the borders and the main diagonal of the matrix. If the number of rows 
 *   and columns are not equal, the program will prompt the user to enter the same
 *   value for both inputs.
 * Example:
 * Input : iRow = 6    iCol = 6
 * Output:
 *      *   *   *   *   *   *
 *      *               *   *
 *      *           *       *
 *      *       *           *
 *      *   *               *
 *      *   *   *   *   *   *
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of '*' characters based on the number of rows
 *                  and columns provided by the user. The pattern includes '*' characters
 *                  along the borders (top, bottom, left, and right edges) and the
 *                  main diagonal of the matrix. If the number of rows does not equal
 *                  the number of columns, the function prompts the user to correct
 *                  their input.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           24/08/2024
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
            // Print a tab space for other positions
            else
            {
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