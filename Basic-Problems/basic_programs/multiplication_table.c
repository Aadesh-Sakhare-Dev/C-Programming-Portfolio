/*
 * ============================================================================
 * Program: Display the multiplication table of a given number.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and displays its multiplication
 *   table up to 10 times. For example, if the enters 2, the program will
 *   print: 2 4 6 8 10 12 14 16 18 20.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : Table
 * Description :   Displays the multiplication table of a given number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Display multiplication table from 1 to 10
    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    //Call Table function to Display multiplication table
    Table(iValue);
 
    return 0;
}