/*
 * ============================================================================
 * Program: Count the number of even digits in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many digits
 *   in the number are even. It then prints the count of even digits.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountEven
 * Description :   Counts the number of even digits in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountEven(int iNo)
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

        if((iDigit % 2) == 0)
        {
            iCount++;   // Increment count if digit is even
        }

        iNo = iNo / 10;
    }

    return iCount;  // Return the count of even digits
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

    // Call CountEven function to count number of even digits
    iRet = CountEven(iValue);

    // Display count of even digits in the number
    printf("Count of even digits is %d\n",iRet);

    return 0;
}