/*
 * ============================================================================
 * Program: Calculate difference between summation of factors and non-factors of a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the difference
 *   between the summation of its factors and non-factors. Factors are the numbers
 *   that divide the given number without leaving a remainder.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : FactDiff
 * Description :   Calculate difference between summation of factors and non-factors.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;
    int iSumFact = 0;
    int iSumDiff = 0;

    // Updater : Convert negative number to positive  
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate summation of factors and non-factors
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;    // Summation of factors
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;    // Summation of non-factors
        }
    }

    // Calculate difference between summation of factors and non-factors
    iSumDiff = iSumFact - iSumNonFact;

    return iSumDiff;
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

    // Call FactDiff function
    iRet = FactDiff(iValue);

    // Display the result
    printf("Difference between summation of all its factors and non factors is : %d",iRet);

    return 0;
}