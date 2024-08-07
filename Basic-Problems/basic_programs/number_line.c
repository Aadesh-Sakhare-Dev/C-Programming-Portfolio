/*
 * ============================================================================
 * Program: Print a range of numbers centered around zero based on user input.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints a sequence of numbers
 *   from -iNo to +iNo, inclusive of zero, separated by tabs.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a sequence of numbers centered around zero.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void Display(int iNo)
{
    int iCnt = 0;

    // Loop from -iNo to +iNo
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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

    // Call Display function to print the number line
    Display(iValue);

    return 0;
}