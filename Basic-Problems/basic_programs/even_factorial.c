/*
 * ============================================================================
 * Program: Find even factorial of a given number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the factorial
 *   of all even numbers up to that number. The factorial of a number n is the
 *   product of all even numbers from 2 up to n. For example, if the user enters
 *   5, the program calculates the factorial of 4 (4 * 2) and outputs 8.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : EvenFactorial
 * Description :   Calculates the even factorial of the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate factorial of even numbers
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt %2)==0)
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

    // Call EvenFactorial function to calculate even factorial
    iRet = EvenFactorial(iValue);

    // Display the result
    printf("Even factorial of number is :%d\n",iRet);

    return 0;
}