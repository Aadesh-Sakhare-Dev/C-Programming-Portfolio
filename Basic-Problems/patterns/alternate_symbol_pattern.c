/*
 * ============================================================================
 * Program: Display a pattern of symbols based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern in a grid format. Each cell alternates between '*' and '#',
 *   starting with '*' at the first column. Each row follows this alternating pattern.
 * Example:
 * Input : iRow = 3    iCol = 4
 * Output:
 * *   #   *   #
 * *   #   *   #
 * *   #   *   #
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a pattern of symbols in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  alternates between '*' and '#', starting with '*' at the
 *                  first column.
 * Input :         Integer, Integer               
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           11/08/2024
 * ============================================================================
 */

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    // Loop through each row
    for(i = 1; i <= iRow; i++)
    {
        // Loop through each column in the current row
        for(j = 1; j <= iCol; j++)
        {
            if((j % 2) == 0)
            {
                printf("#\t");  // Print '#' for even columns
            }
            else
            {
                printf("*\t");  // Print '*' for odd columns
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
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    // Call the Display function with user input values for printing the pattern
    Display(iValue1,iValue2);
    
    return 0;
}