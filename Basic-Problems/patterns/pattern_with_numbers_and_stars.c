/*
 * ============================================================================
 * Program: Print numbers with '*' symbols in between them up to a specified number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and prints numbers in
 *   ascending order with '*' symbols alternating between them up to the specified number.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Pattern
 * Description :   Prints numbers with '*' symbols in between them up to a specified number.
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

    // Loop to print numbers with '*' symbols
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
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

    // Call the Pattern function to print the pattern
    Pattern(iValue);

    return 0;
}