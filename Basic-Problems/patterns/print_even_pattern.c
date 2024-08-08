/*
 * ============================================================================
 * Program: Print a pattern of even numbers starting from 2 up to a specified number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and prints even numbers starting
 *   from 2 up to the specified number.
 *
 * Example:
 *   Input: 8
 *   Output: 2   4   6   8   10  12  14  16
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints even numbers from 2 up to a specified number.
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

    // Loop to print even numbers
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
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

    // Call the Pattern function to print the even numbers pattern
    Pattern(iValue);

    return 0;   // Indicate successful execution to the operating system
}