/*
 * ============================================================================
 * Program: Count the frequency of digits less than 6 in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many digits
 *   in the number are less than 6. It then prints the frequency of such digits.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountLessThanSix
 * Description :   Counts the frequency of digits less than 6 in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountLessThanSix(int iNo)
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

        if(iDigit < 6)
        {
            iCount++;   // Increment count if digit is less than 6
        }

        iNo = iNo /10;
    }

    return iCount;  // Return the count of digits less than 6
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

    // Call CountLessThanSix function to count frequency of digits less than 6
    iRet = CountLessThanSix(iValue);

    // Display frequency of digits less than 6
    printf("The frequency of digits less than 6 in the input number is: %d\n",iRet);

    return 0;
}
