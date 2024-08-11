/*
 * ============================================================================
 * Program: Display a numeric pattern based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern in which each row contains the same number repeated,
 *   with the row number indicating the number to be repeated.
 * Example:
 * Input : iRow = 4    iCol = 4
 * Output:
 * 1   1   1   1
 * 2   2   2   2
 * 3   3   3   3
 * 4   4   4   4
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains the same number, with the number in each row 
 *                  equal to the row index.
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
            printf("%d\t",i);   // Print the row number followed by a tab
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