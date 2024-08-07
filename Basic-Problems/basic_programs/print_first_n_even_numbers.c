/*
 * ============================================================================
 * Program: Accept one number from user and print that number of even numbers.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and prints that many even numbers.
 *   If the input number is less than or equal to 0, it prints
 *   an error message and does not print any numbers.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : DisplayEven
 * Description :   Prints the first iNo even numbers.
 * Input :         Integer
 * Output :        void
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

void DisplayEven(int iNo)
{
    int iCnt = 0;

    // Filter : Return and print an error message if iNo is 0 or negative.
    if(iNo <= 0)
    {
        printf("Enter a valid number greater than 0.\n");
        return;
    }

    // Print the first iNo even numbers
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
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
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    // Call DisplayEven function
    DisplayEven(iValue);

    return 0;
}