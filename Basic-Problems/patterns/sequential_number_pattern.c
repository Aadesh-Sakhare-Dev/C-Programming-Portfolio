/*
 * ============================================================================
 * Program: Display a sequential number pattern in a grid format.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where each element in the grid contains a sequential
 *   number starting from 1. The numbers increase sequentially from left to
 *   right across columns and continue increasing with each new row.
 * Example:
 * Input : iRow = 3    iCol = 4
 * Output:
 * 1   2   3   4
 * 5   6   7   8
 * 9   10  11  12
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a sequential number pattern in a grid format based
 *                  on the number of rows and columns provided by the user. 
 *                  Each number starts from 1 and increases sequentially across
 *                  the columns and rows.
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

    iNo = 1;    // Initialize the starting number

    // Loop through each row
    for(i = 1 ; i <= iRow; i++)
    {
        // Loop through each column in the current row
        for(j = 1; j <= iCol; j++,iNo++)
        {
            printf("%d\t",iNo); // Print the current number followed by a tab
            
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