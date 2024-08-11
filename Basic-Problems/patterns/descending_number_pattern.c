/*
 * ============================================================================
 * Program: Display a descending pattern of numbers based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where each row contains the same number. The numbers
 *   start from the number of rows and decrease with each subsequent row. Each
 *   row contains the same number repeated across all columns.
 * Example:
 * Input : iRow = 3    iCol = 5
 * Output:
 * 4   4   4   4   4
 * 3   3   3   3   3
 * 2   2   2   2   2
 * 1   1   1   1   1
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains the same number, which starts from the number of
 *                  rows and decreases sequentially with each new row.
 * Input :         Integer, Integer               
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           11/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Updater : Convert negative number to positive
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    // Loop through each row, starting from iRow down to 1
    for(i = iRow ; i >= 1; i--)
    {
        // Loop through each column in the current row
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);   // Print the current number followed by a tab
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
    printf("Enter number of row : ");
    scanf("%d",&iValue1);

    // Get input from user for the number of columns
    printf("Enter number of column : ");
    scanf("%d",&iValue2);

    // Call the Pattern function with user input values for printing the pattern
    Pattern(iValue1, iValue2);

    return 0;
}