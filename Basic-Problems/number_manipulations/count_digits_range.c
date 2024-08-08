/*
 * ============================================================================
 * Program: Count the number of digits between 3 and 7 in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many digits
 *   in the number fall between 3 and 7 (exclusive). It then prints the count.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountRange
 * Description :   Counts the number of digits between 3 and 7 in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountRange(int iNo)
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

        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;   // Increment count if digit is between 3 and 7
        }

        iNo = iNo / 10;
    }

    return iCount;  // Return the count of digits in the range
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

    // Call CountRange function to count number of digits in the range
    iRet = CountRange(iValue);

    // Display count of digits in the range
    printf("count of digits in between 3 and 7 is %d\n",iRet);

    return 0;
}