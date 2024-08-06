//2.2. Accept one number from user and print that number of * on screen.
/*
 * ============================================================================
 * Program: Accept a number from the user and print that number of '*' on the screen.
 * Author: Aadesh Dipak Sakhare
 * Date: 06/08/2024
 * Description:
 *   This program accepts a number from the user and prints that number of '*' 
 *   characters on the screen, each on a new line. If a negative number is entered, 
 *   it is converted to positive before printing.
 * ============================================================================
 */
#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints a specified number of '*' characters, each on a new line.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           06/08/2024
 * ============================================================================
 */

void Display(int iNo)
{
    int iCnt = 0;

    // updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' on console iNo times, each on a new line using a while loop
    iCnt = 1;
    while(iNo >= iCnt)
    {
        printf("*\n");
        iNo--;  //  Decrement counter to print the remaining '*' characters
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

    // get input from user
    printf("Enter number how many time you want to print * :\n");
    scanf("%d",&iValue);

    // call Display function
    Display(iValue);

    return 0;
}