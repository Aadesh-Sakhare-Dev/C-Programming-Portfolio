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

    iCnt = 1;
    
    // Print * on console iNo times using while loop
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
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