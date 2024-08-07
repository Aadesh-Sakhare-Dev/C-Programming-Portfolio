/*
 * ============================================================================
 * Program: Calculate factorial of a non-negative integer.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program computes the factorial of a non-negative integer entered by
 *   the user. Factorial of a number 'n' (denoted as n!) is the product of all
 *   positive integers up to 'n'. For example, 5! (5 factorial) equals 5 * 4 * 3 * 2 * 1 = 120.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Factorial
 * Description :   Calculates the factorial of a non-negative integer.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate factorial using a for loop
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
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

    // call Factorial function to Calculate factorial
    iRet = Factorial(iValue);

    //Print factorial
    printf("Factorial is :%d\n",iRet);

    return 0;
}