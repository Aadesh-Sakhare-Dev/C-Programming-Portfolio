/*
 * ============================================================================
 * Program: Display a pattern of numbers based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 12/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where even numbers are displayed in even rows and
 *   odd numbers in odd rows. The pattern repeats the sequence of numbers
 *   per row, and the sequence starts from 2 for even rows and 1 for odd rows.
 * Example:
 * Input : iRow = 5    iCol = 5
 * Output:
 * 2   4   6   8   10
 * 1   3   5   7   9
 * 2   4   6   8   10
 * 1   3   5   7   9
 * 2   4   6   8   10
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Even numbers
 *                  are displayed in even rows and odd numbers in odd rows. The
 *                  sequence of numbers starts from 2 for even rows and from 1 for
 *                  odd rows. Each row follows the same sequence of numbers.
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

    // Updater : Convert negative number to positive
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    // Loop through each row
    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1; j <= (iCol * 2); j++)
        {
            if((i % 2) == 0)    // Even row
            {
                if((j % 2) != 0)
                {
                    printf("%d\t",j);
                }    
            }
            else    // Odd row
            {
                if((j % 2) == 0)
                {
                    printf("%d\t",j);
                }
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