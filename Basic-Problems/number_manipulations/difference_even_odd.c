/*
 * ============================================================================
 * Program: Calculate the difference between summation of even digits and odd digits.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the difference
 *   between the summation of its even digits and odd digits. It then prints the result.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountDiff
 * Description :   Calculates the difference between summation of even digits and odd digits.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;
    
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
            iEvenSum = iEvenSum + iDigit;   // Add even digit to iEvenSum
        }
        else
        {
            iOddSum = iOddSum + iDigit; // Add odd digit to iOddSum
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum; // Calculate the difference

    return iDiff;   //Reture the difference
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

    // Call CountDiff function to calculate difference between even and odd digit sums
    iRet = CountDiff(iValue);

    // Display the difference
    printf("Difference between summation of even digits and summation of odd digits is : %d\n",iRet);

    return 0;
}