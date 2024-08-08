/*
 * ============================================================================
 * Program: Print alphabets from 'A' to the specified number.
 * Author: Aadesh Dipak Sakhare
 * Date: 08/08/2024
 * Description:
 *   This program accepts a number from the user and prints alphabets starting
 *   from 'A' up to the specified number.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : PrintAlphaSeq
 * Description :   Prints the alphabet sequence up to a specified number.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           08/08/2024
 * ============================================================================
 */

void PrintAlphaSeq(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    // Updater : Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Filter: Limit to the number of letters in the alphabet (Limit to 26 alphabets)
    if((iNo == 0) || (iNo > 26))
    {
        printf("Enter a valid number within the range of alphabet.\n");
        return;
    }

    // Loop to print alphabets from 'A' to the specified number
    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
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

    // Call the function to print the pattern
    PrintAlphaSeq(iValue);

    return 0;
}