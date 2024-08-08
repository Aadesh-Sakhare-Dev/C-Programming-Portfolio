/*
 * ============================================================================
 * Program: Check if a number contains the digit '0'.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and checks if it contains the
 *   digit '0'. It prints appropriate messages based on the presence of '0'.
 * ============================================================================
 */

#include<stdio.h>
#include<stdbool.h> // Include standard library for bool type

/*
 * ============================================================================
 * Function Name : CheckZero
 * Description :   Checks if the given number contains the digit '0'.
 * Input :         Integer
 * Output :        Boolean
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false; // Flag to indicate presence of '0'

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = true;   // Set flag to true if '0' is found
            break;
        }

        iNo = iNo /10;
    }

    return bFlag;   // Return the flag indicating presence of '0'
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
    bool bRet = false;  // Variable to store the return value of CheckZero

    // Get input from user
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // Call CheckZero function to check if '0' is present
    bRet = CheckZero(iValue);

    // Display appropriate message based on the return value
    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}