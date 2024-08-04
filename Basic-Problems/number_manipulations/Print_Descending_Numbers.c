/*
 * ============================================================================
 * Program: Print Numbers in Descending Order
 * Author: Aadesh Dipak Sakhare
 * Date: 04/08/2024
 * Description:
 *   This program accepts a number from the user and prints numbers in
 *   descending order from that number down to 1. If a negative number
 *   is entered, it is converted to positive before printing.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Prints numbers in descending order from a specified number
 *                  down to 1.
 * Input :         Integer
 * Output :        void
 * Author :        Aadesh Dipak Sakhare
 * Date :          04/08/2024
 * ============================================================================
 */

void Display(int iNo)
{
//  Updater - which convert negitive number to positive   (ex. -7 to 7)
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

//  Print numbers from iNo to 1
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
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
    printf("Enter Number : \n");
    scanf("%d",&iValue);

// Call Display function
    Display(iValue);


    return 0;
}