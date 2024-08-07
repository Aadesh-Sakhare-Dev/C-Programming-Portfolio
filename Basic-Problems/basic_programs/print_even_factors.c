/*
 * ============================================================================
 * Program: Accept a number from user and print the even factors of that number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints all even factors of that
 *   number. Factors are the numbers that divide the given number without leaving
 *   a remainder.
 * ============================================================================
 */
 
#include<stdio.h>

/*
 * ============================================================================
 * Function Name : DisplayEvenFactor
 * Description :   Prints all even factors of the given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    // Filter : Return and print an error message if iNo is 0 or negative.
    if(iNo <= 0)
    {
        printf("Enter a valid number greater than 0.\n");
        return;
    }

    // Print even factors
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
           
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
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

    // Call DisplayEvenFactor function
    DisplayEvenFactor(iValue);

    return 0;
}