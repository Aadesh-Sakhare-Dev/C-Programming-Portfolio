/*
 * ============================================================================
 * Program: Calculate the difference between even factorial and odd factorial
 *          of a given number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the factorial
 *   of all even and odd numbers up to that number. It then computes the
 *   difference between the even factorial and the odd factorial. For example,
 *   if the user enters 5, the program calculates even factorial (4 * 2 = 8) and
 *   odd factorial (5 * 3 * 1 = 15), and then outputs the difference (-7).
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : FactorialDiff
 * Description :   Calculates the difference between even factorial and odd factorial
 *                 of the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiffFact = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate even and odd factorials
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt %2)==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    // Calculate the difference
    iDiffFact = iEvenFact - iOddFact;

    return iDiffFact;
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

    // Call FactorialDiff function to calculate factorial difference
    iRet = FactorialDiff(iValue);

    // Display the result
    printf("Factorial differnce is :%d\n",iRet);

    return 0;
}