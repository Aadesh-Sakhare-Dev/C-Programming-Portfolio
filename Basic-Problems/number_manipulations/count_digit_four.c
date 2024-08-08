/*
 * ============================================================================
 * Program: Count the frequency of the digit '4' in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many times the
 *   digit '4' appears in it. It then prints the frequency of '4'.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountFour
 * Description :   Counts the frequency of the digit '4' in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;   // Increment count if digit is '4'
        }

        iNo = iNo /10;
    }

    return iCount;  // Return the count of digit '4'
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
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // Call CountFour function to count frequency of '4'
    iRet = CountFour(iValue);

    // Display frequency of '4'
    printf("frequency of number 4 is : %d\n",iRet);

    return 0;
}
