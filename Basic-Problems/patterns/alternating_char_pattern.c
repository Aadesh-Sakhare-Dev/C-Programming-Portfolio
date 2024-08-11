/*
 * ============================================================================
 * Program: Display an alternating pattern of uppercase and lowercase characters.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern where odd-numbered rows contain uppercase letters and
 *   even-numbered rows contain lowercase letters. The characters start from 'A'
 *   or 'a' and continue sequentially across the columns.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * A   B   C   D
 * a   b   c   d
 * A   B   C   D
 * a   b   c   d
 * ============================================================================
 */


#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of alternating uppercase and lowercase 
 *                  characters in a grid format based on the number of rows
 *                  and columns provided by the user. Uppercase letters are
 *                  printed on odd rows, while lowercase letters are printed
 *                  on even rows.
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
    char ch1 = '\0';
    char ch2 = '\0';

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
        // Print uppercase letters in odd rows
        if((i % 2) == 0)
        {
            for(j = 1,ch1 = 'a'; j <= iCol; j++, ch1++)
            {
                printf("%c\t",ch1);
            }
        }
        // Print lowercase letters in even rows
        else
        {
            for(j = 1,ch2 = 'A'; j <= iCol; j++, ch2++)
            {
                printf("%c\t",ch2);
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

    // Call the Pattern function with user input values for printing the pattern
    Pattern(iValue1, iValue2);
    
    return 0;
}