/*
 * ============================================================================
 * Program: Print a pattern of $ and * based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 06/08/2024
 * Description:
 *   This program accepts a number from the user and prints a pattern of alternating
 *   $ and * characters, repeated according to the input number.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints a pattern of $ and * based on input number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           06/08/2024
 * ============================================================================
 */

void Pattern(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print pattern of $ and *
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
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

    // Call Pattern function to print the pattern
    Pattern(iValue);

    return 0;
}