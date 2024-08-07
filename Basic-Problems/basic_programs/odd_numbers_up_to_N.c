/*
 * ============================================================================
 * Program: Print all odd numbers up to a specified number N.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number N from the user and prints all odd numbers
 *   from 1 up to N, separated by tabs.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : OddDisplay
 * Description :   Prints all odd numbers up to the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void OddDisplay(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop through numbers from 1 to iNo and print odd numbers    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }  
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

    // Call OddDisplay function to print odd numbers up to iValue
    OddDisplay(iValue);

    return 0;
}