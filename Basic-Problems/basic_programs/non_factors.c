/*
 * ============================================================================
 * Program: Accept a number from user and print numbers which are not factor of that number.
 * Author: Aadesh Dipak Sakhare
 * Date: 05/08/2024
 * Description:
 *   This program accepts a number from the user and prints all numbers which are not
 *   factors of that number. Factors are the numbers that divide the given number
 *   without leaving a remainder.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : NonFact
 * Description :   Prints all numbers which are not factors of the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           05/08/2024
 * ============================================================================
 */

void NonFact(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive     
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print all non-factors
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    // Call NonFact function to print non-factors
    NonFact(iValue);

    return 0;
}