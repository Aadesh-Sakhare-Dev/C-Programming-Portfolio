/*
 * ============================================================================
 * Program: Print numbers from 1 to a specified number provided by the user.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints numbers from 1 up to
 *   that number, separated by tabs.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : PrintNumbers
 * Description :   Prints numbers from 1 to the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void PrintNumbers(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print numbers from 1 to iNo    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

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
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // Call PrintNumbers function to print the numbers
    PrintNumbers(iValue);
    
    return 0;
}