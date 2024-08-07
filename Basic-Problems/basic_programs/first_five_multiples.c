/*
 * ============================================================================
 * Program: Print the first 5 multiples of a given number N.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number N from the user and prints the first 5 multiples
 *   of N, separated by tabs.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : MultipleDisplay
 * Description :   Prints the first 5 multiples of the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to calculate and print the first 5 multiples of iNo
    for(iCnt = 1; iCnt <= 5; iCnt++)
    { 
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
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

    // Call MultipleDisplay function to print the first 5 multiples
    MultipleDisplay(iValue);

    return 0;
}