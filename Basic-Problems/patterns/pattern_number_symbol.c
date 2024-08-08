/*
 * ============================================================================
 * Program: Print a pattern with numbers followed by '#' symbols and '*' symbols.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and prints a pattern where each
 *   number is followed by '#', then '*', and repeats for each number up to the
 *   specified number.
 *
 * Example:
 *   Input: 5
 *   Output: #   1   *   #   2   *   #   3   *   #   4   *   #   5   *
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern where each number is followed by '#' and '*'.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

void Pattern(int iNo)
{
    int iCnt = 0;

    // Updater: Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print pattern
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
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
    int iValue = 0;

    // Get input from user
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // Call the Pattern function to print the pattern
    Pattern(iValue);

    return 0;
}