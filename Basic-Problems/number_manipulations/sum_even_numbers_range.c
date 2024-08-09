/*
 * ============================================================================
 * Program: Calculate addition of all even numbers within a given range.
 * Author: Aadesh Dipak Sakhare
 * Date: 09/08/2024
 * Description:
 *   This program accepts a starting and ending point from the user and computes
 *   the sum of all even numbers between those two points inclusive. The range
 *   must contain only positive numbers.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : SumEvenNumbersInRange
 * Description :   Computes the sum of all even numbers in the range from iNo1 to iNo2.
 * Input :         Integer, Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           09/08/2024
 * ============================================================================
 */

int SumEvenNumbersInRange(int iNo1, int iNo2)
{

    int iCnt = 0;
    int iSumEven = 0;

    // Check if either iNo1 or iNo2 is less than 0
    if(iNo1 < 0 || iNo2 <0)
    {
        return -1;  // Return -1 to indicate invalid range
    }

    // Calculate sum of even numbers from iNo1 to iNo2
    for(iCnt = iNo1; iCnt <=iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSumEven = iSumEven + iCnt;
        }
    }

    return iSumEven;    // Return the computed sum of even numbers
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
    int iRet = 0;

    // Get starting point from user
    printf("Enter starting point :");
    scanf("%d",&iValue1);

    // Get ending point from user
    printf("Enter ending point :");
    scanf("%d",&iValue2);

    // Call SumEvenNumbersInRange function to compute sum of even numbers in the specified range
    iRet = SumEvenNumbersInRange(iValue1, iValue2);
    
    // Check if SumEvenNumbersInRange returned -1 (invalid range)
    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is Even numbers : %d\n",iRet); // Print the computed sum of even numbers
    }
    
    return 0;
}