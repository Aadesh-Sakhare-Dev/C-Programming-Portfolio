/*
 * ============================================================================
 * Program: Display a numeric pattern based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 10/08/2024
 * Description:
 *   This program accepts the number of rows and columns from the user and
 *   displays a pattern of numbers in a grid format, where each row contains
 *   sequential numbers starting from 1 up to the number of columns.
 * Example:
 * Input : iRow = 4    iCol = 3
 * Output:
 * 1   2   3
 * 1   2   3
 * 1   2   3
 * 1   2   3
 * ============================================================================
 */
#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a pattern of numbers in a grid format based on the
 *                  number of rows and columns provided by the user. Each row
 *                  contains sequential numbers from 1 to the number of columns.
 * Input :         Integer, Integer                
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           10/08/2024
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
            printf("%d\t",j);   // Print the column number followed by a tab
        }
        printf("\n");
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

    // Call the Display function with user input values for the print specified pattern
    Display(iValue1,iValue2);

    return 0;
}