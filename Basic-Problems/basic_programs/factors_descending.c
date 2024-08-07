/*
 * ============================================================================
 * Program: Display factors of a number in decreasing order.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints its factors in
 *   decreasing order. If the input number is less than 0, it treats it as positive
 *   for factor calculation purposes.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : FactRev
 * Description :   Print factors of a number in decreasing order.
 * Input :         Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void FactRev(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print factors in decreasing order
    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
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

    // Get input from user
    printf("Enter Number :");
    scanf("%d",&iValue);

    // Call FactRev function to print factors in decreasing order
    FactRev(iValue);

    return 0;
}