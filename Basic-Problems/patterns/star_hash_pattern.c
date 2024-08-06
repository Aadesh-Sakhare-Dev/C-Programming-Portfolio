/*
 * ============================================================================
 * Program: Display a pattern based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 06/08/2024
 * Description:
 *   This program accepts a number from the user and displays a pattern consisting
 *   of '*' characters followed by '#' characters, both repeated 'n' times where
 *   'n' is the user input. For example, if the user enters 5, the output will be:
 *   *   *   *   *   *   #   #   #   #   #
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Displays the pattern based on user input.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           06/08/2024
 * ============================================================================
 */

void Display(int iNo)
{
    int iCnt = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' characters
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }

    // Print '#' characters
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("#\t");
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
    printf("Enter Number :");
    scanf("%d",&iValue);

    // Call Display function to display pattern based on input
    Display(iValue);
 
    return 0;
}