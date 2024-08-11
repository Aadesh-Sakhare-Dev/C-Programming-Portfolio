/*
 * ============================================================================
 * Program: Display a numeric pattern based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 11/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of numbers in a grid format, where each row contains
 *   numbers in decreasing order starting from the number of columns down to 1.
 *   Each row is identical.
 * Example:
 * Input : iRow = 3    iCol = 5
 * Output:
 * 5   4   3   2   1
 * 5   4   3   2   1
 * 5   4   3   2   1
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains numbers in decreasing order starting from the 
 *                  number of columns down to 1.
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
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);   // Print the column number in decreasing order followed by a tab
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