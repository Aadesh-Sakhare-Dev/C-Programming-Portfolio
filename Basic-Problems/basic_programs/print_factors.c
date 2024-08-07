/*
 * ============================================================================
 * Program: Accept a number from the user and print the factors of that number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints all factors of that
 *   number. Factors are the numbers that divide the given number without leaving
 *   a remainder.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : DisplayFactor
 * Description :   Prints all factors of the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    // Filter : Return and print an error message if iNo is 0 or negative.
    if(iNo <= 0)
    {
        printf("Enter a valid number greater than 0.\n");
        return;
    }
    
    // Print factors from 1 to iNo / 2
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
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
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    // Call DisplayFactor function
    DisplayFactor(iValue);

    return 0;
}