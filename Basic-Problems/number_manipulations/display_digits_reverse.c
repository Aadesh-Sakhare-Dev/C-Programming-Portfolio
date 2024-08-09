/*
 * ============================================================================
 * Program: Display digits of a number in reverse order.
 * Author: Aadesh Dipak Sakhare
 * Date: 09/08/2024
 * Description:
 *   This program accepts a number from the user and prints its digits in reverse
 *   order, each on a new line.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : DisplayDigit
 * Description :   Prints digits of the given number in reverse order.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           09/08/2024
 * ============================================================================
 */

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10; // Get the last digit
        printf("%d\n", iDigit); // Print the last digit
        iNo = iNo / 10; // Remove the last digit from the number
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
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // Call DisplayDigit function to display digits in reverse order
    DisplayDigit(iValue);

    return 0;
}