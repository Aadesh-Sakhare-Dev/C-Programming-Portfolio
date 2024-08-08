/*
 * ============================================================================
 * Program: Count the frequency of the digit '2' in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and counts how many times the
 *   digit '2' appears in it. It then prints the frequency of '2'.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : CountTwo
 * Description :   Counts the frequency of the digit '2' in the given number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int CountTwo(int iNo)
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

        if(iDigit == 2)
        {
            iCount++;   // Increment count if digit is '2'
        }

        iNo = iNo /10;
    }

    return iCount;  // Return the count of digit '2'
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

    // Call CountTwo function to count frequency of '2'
    iRet = CountTwo(iValue);

    // Display frequency of '2'
    printf("frequency of number 2 is : %d\n",iRet);

    return 0;
}