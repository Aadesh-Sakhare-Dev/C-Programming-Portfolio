/*
 * ============================================================================
 * Program: Display a pattern of alternating letters and numbers based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 12/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where rows alternate between letters and numbers.
 *   The odd rows display letters from 'a' to 'e' (or up to the number of columns),
 *   while the even rows display numbers from 1 to 5 (or up to the number of columns).
 * Example:
 * Input : iRow = 5    iCol = 5
 * Output:
 * a   b   c   d   e
 * 1   2   3   4   5
 * a   b   c   d   e
 * 1   2   3   4   5
 * a   b   c   d   e
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of alternating letters and numbers based on the
 *                  number of rows and columns provided by the user. Odd rows display
 *                  letters starting from 'a', and even rows display numbers starting from 1.
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
    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1,ch = 'a' ; j <= iCol; j++,ch++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",j);   // Print the number followed by a tab
            }
            else
            {
                printf("%c\t",ch);  // Print the character followed by a tab
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