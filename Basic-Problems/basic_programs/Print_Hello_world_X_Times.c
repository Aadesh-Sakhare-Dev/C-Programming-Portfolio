/*
 * ============================================================================
 * Program: Print "Hello world" multiple times.
 * Author: Aadesh Dipak Sakhare
 * Date: 04/08/2024
 * Description:
 *   This program accepts a number from the user and prints "Hello world"
 *   that many times on the screen. The number of times to print is provided
 *   by the user. The program also handles negative input by converting it
 *   to positive.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints "Hello world" a specified number of times.
 * Input :         Integer
 * Output :        void
 * Author :        Aadesh Dipak Sakhare
 * Date :          04/08/2024
 * ============================================================================
 */

void Display(int iNo)
{

    int iCnt = 0;

//  Updater - which convert negitive number to positive   (ex. -7 to 7)
    if(iNo < 0)
    {
        iNo = -iNo;
    }

//  Print "Hello world" iNo times 
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Hello world\n");
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

//  get input from user
    printf("Enter number how many time you want to print Hello world on screen :\n");
    scanf("%d",&iValue);

// Call Display function
    Display(iValue);

    return 0;
}