/*
 * ============================================================================
 * Program: Display a pattern of numbers based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 12/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where numbers start from 1 and increase sequentially.
 *   After reaching 9, the numbers reset to 1. Each row continues the pattern
 *   from where the previous row left off.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * 1   2   3   4
 * 5   6   7   8
 * 9   1   2   3
 * 4   5   6   7
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Numbers
 *                  start from 1 and increment sequentially. After reaching 9,
 *                  the sequence wraps around to 1 again. Each row continues the
 *                  sequence from where the previous row left off.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           12/08/2024
 * ============================================================================
 */

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 0;

    // Updater : Convert negative number to positive
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    iNo = 1;

    // Loop through each row
    for(i = 1 ; i <= iRow; i++)
    {
        // Loop through each column in the current row
        for(j = 1; j <= iCol; j++,iNo++)
        {
            printf("%d\t",iNo); // Print the current number followed by a tab

            // Reset the number to 1 if it exceeds 9
            if(iNo >= 9)
            {
                iNo = 0;
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
    printf("Enter number of row : ");
    scanf("%d",&iValue1);

    // Get input from user for the number of columns
    printf("Enter number of column : ");
    scanf("%d",&iValue2);

    // Call the Pattern function with user input values to print the pattern
    Pattern(iValue1, iValue2);

    return 0;
}