/*
 * ============================================================================
 * Program: Check if a number is divisible by 5.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and checks if it is divisible
 *   by 5. It handles both positive and negative numbers by converting negative
 *   numbers to positive before performing the check.
 * ============================================================================
 */
#include<stdio.h>
#include<stdbool.h>

/*
 * ============================================================================
 * Function Name : CheckDivisible
 * Description :   Determines if a given number is divisible by 5.
 * Input :         Integer
 * Output :        Boolean
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

bool CheckDivisible(int iNo)
{
    // updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Check divisibility by 5    
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    // get input from user
    printf("Enter number to check that number is divisible by 5 or not : \n");
    scanf("%d",&iValue);

    // call CheckDivisible function
    bRet = CheckDivisible(iValue);

    // Print result
    if(bRet == true)
    {
        printf("%d is divisible by 5.\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5.\n",iValue);
    }

    return 0;
}