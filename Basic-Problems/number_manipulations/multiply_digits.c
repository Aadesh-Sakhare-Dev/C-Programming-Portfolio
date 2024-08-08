/*
 * ============================================================================
 * Program: Calculate the multiplication of all digits in a number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the
 *   multiplication of all its non-zero digits. It then prints the result.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : MultDigits
 * Description :   Calculates the multiplication of all non-zero digits in the number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit; // Multiply non-zero digit to iMult
        }

        iNo = iNo / 10;
    }

    return iMult;   // Return the multiplication of all digits
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
    printf("Enter number : ");
    scanf("%d",&iValue);

    // Call MultDigits function to calculate multiplication of digits
    iRet = MultDigits(iValue);

    // Display multiplication of all digits
    printf("Multiplication of all digits is %d\n",iRet);

    return 0;
}