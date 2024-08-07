/*
 * ============================================================================
 * Program: Find odd factorial of a given number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the factorial
 *   of all odd numbers up to that number. The factorial of a number n is the
 *   product of all odd numbers from n down to 1. For example, if the user enters
 *   5, the program calculates the factorial of 5, 3, and 1 (5 * 3 * 1) and outputs 15.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : OddFactorial
 * Description :   Calculates the odd factorial of the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate factorial of odd numbers
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt %2)!=0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
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
    int iRet = 0;

    // Get input from user
    printf("Enter Number :");
    scanf("%d",&iValue);

    // Call OddFactorial function to calculate odd factorial
    iRet = OddFactorial(iValue);

    // Display the result
    printf("Odd factorial of number is :%d\n",iRet);

    return 0;
}