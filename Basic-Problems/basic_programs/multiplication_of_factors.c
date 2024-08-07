/*
 * ============================================================================
 * Program: Accept a number from the user and display the multiplication of its factors.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and calculates the multiplication of 
 *   its factors. If the input number is less than or equal to 0,
 *   it treats the number as positive for the purpose of finding factors.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : MultFact
 * Description :   Calculate the multiplication of all factors of a number.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate the multiplication of factors
    iMult = 1;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    
    return iMult;
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
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    // Call MultFact function
    iRet = MultFact(iValue);

    // Print the result
    printf("Multiplication of factors is : %d\n",iRet);

    return 0;
}