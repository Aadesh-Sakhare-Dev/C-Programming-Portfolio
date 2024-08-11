/*
 * ============================================================================
 * Program: Display a pattern of characters based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where each row contains characters starting from 'A'
 *   up to the specified number of columns. Each row is identical and repeats
 *   the same pattern.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * A   B   C   D
 * A   B   C   D
 * A   B   C   D
 * A   B   C   D
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of characters in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains sequential characters starting from 'A' up to the
 *                  number of columns. Each row is identical.
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
    char ch = '\0';

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
    for(i = 1; i <=iRow; i++)
    {
        // Loop through each column in the current row
        for(j = 1,ch = 'A'; j <= iCol; j++, ch++)
        {
            printf("%c\t",ch);  // Print character followed by a tab
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