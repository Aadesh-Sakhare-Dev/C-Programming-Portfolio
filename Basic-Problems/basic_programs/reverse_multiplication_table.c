/*
 * ============================================================================
 * Program: Display the multiplication table of a given number in reverse order.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and displays its multiplication
 *   table in reverse order up to 10 times. For example, if the user enters 2,
 *   the program will print: 20 18 16 14 12 10 8 6 4 2.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : TableRev
 * Description :   Displays the multiplication table of a given number in reverse order.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Display multiplication table in reverse order from 10 to 1
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d\t",iTable);
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

    //Call TableRev function to Display multiplication table in reverse order
    TableRev(iValue);
 
    return 0;
}