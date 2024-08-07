/*
 * ============================================================================
 * Program: Calculate summation of all non-factors of a given number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the summation
 *   of all numbers which are not factors of that number. Factors are the numbers
 *   that divide the given number without leaving a remainder.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : FactNonSum
 * Description :   Calculate summation of all non-factors of the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int FactNonSum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Updater : Convert negative number to positive  
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate summation of non-factors
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
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
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    // Calculate summation of all non-factors
    iRet = FactNonSum(iValue);

    // Display the result
    printf("Summation of all its non factors is: %d\n",iRet);

    return 0;
}