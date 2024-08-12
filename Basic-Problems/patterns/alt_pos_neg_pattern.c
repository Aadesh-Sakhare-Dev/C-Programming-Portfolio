/*
 * ============================================================================
 * Program: Display a pattern of alternating positive and negative numbers based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 12/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where odd rows contain positive numbers from 1 to the number of columns,
 *   and even rows contain negative numbers from -1 to the negative of the number of columns.
 * Example:
 * Input : iRow = 5    iCol = 5
 * Output:
 * 1   2   3   4   5
 * -1  -2  -3  -4  -5
 * 1   2   3   4   5
 * -1  -2  -3  -4  -5
 * 1   2   3   4   5
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of alternating positive and negative numbers based on the
 *                  number of rows and columns provided by the user. Odd rows display positive
 *                  numbers, while even rows display negative numbers. Each row contains numbers
 *                  from 1 to the number of columns, with negative numbers for even rows.
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
        // Loop through each column in the current row
        for(j = 1; j <= iCol; j++)
        {
            // Print negative numbers for even rows
            if((i % 2) == 0)
            {
                printf("%d\t",-j);  
            }
            else    // Print positive numbers for odd rows
            {
                printf("%d\t",j);
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