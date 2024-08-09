/*
 * ============================================================================
 * Program: Display all numbers within a given range.
 * Author: Aadesh Dipak Sakhare
 * Date: 09/08/2024
 * Description:
 *   This program accepts a starting and ending point from the user and prints
 *   all numbers between those two points inclusive.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : RangeDisplay
 * Description :   Prints all numbers in the range from iNo1 to iNo2.
 * Input :         Integer, Integer
 * Output :        Void
 * Author:         Aadesh Dipak Sakhare
 * Date:           09/08/2024
 * ============================================================================
 */

void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    // Loop through the range from iNo1 to iNo2
    for(iCnt = iNo1;iCnt <=iNo2; iCnt++)
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

    // Call RangeDisplay function to print numbers in the specified range
    RangeDisplay(iValue1, iValue2);
    
    return 0;
}