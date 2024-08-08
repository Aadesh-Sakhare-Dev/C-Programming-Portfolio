/*
 * ============================================================================
 * Program: Count the number of odd digits in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many digits
 *   in the number are odd. It then prints the count of odd digits.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountOdd
 * Description :   Counts the number of odd digits in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCount++;   // Increment count if digit is odd
        }

        iNo = iNo / 10;
    }

    return iCount;  // Return the count of odd digits
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
    printf("Enter the number : ");
    scanf("%d",&iValue);

    // Call CountOdd function to count number of odd digits
    iRet = CountOdd(iValue);

    // Display count of odd digits in the number
    printf("Count of odd digits is %d\n",iRet);

    return 0;
}