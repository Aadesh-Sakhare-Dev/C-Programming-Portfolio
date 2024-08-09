/*
 * ============================================================================
 * Program: Display numbers between a given range in reverse order.
 * Author: Aadesh Dipak Sakhare
 * Date: 09/08/2024
 * Description:
 *   This program accepts a starting and ending point from the user and prints
 *   all numbers between those two points inclusive in reverse order.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : DisplayRangeInReverse
 * Description :   Prints all numbers in the range from iNo1 to iNo2 in reverse order.
 * Input :         Integer, Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           09/08/2024
 * ============================================================================
 */

void DisplayRangeInReverse(int iNo1, int iNo2)
{
    int iCnt = 0;

    // Print numbers from iNo2 down to iNo1
    for(iCnt = iNo2;iCnt >= iNo1; iCnt--)
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
    int iValue1 = 0;
    int iValue2 = 0;

    // Get starting point from user
    printf("Enter starting point :");
    scanf("%d",&iValue1);

    // Get ending point from user
    printf("Enter ending point :");
    scanf("%d",&iValue2);

    // Call DisplayRangeInReverse function to print numbers in reverse order in the specified range
    DisplayRangeInReverse(iValue1, iValue2);
    
    return 0;
}