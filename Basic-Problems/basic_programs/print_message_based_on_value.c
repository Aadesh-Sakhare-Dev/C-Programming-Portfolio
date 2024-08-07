/*
 * ============================================================================
 * Program: Accept one number from user; if number is less than 10, print 'Hello',
 *          otherwise print 'Demo'.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user. If the number is less than 10,
 *   it prints "Hello". Otherwise, it prints "Demo".
 * ============================================================================
 */

#include<stdio.h>
#include<stdbool.h>

/*
 * ============================================================================
 * Function Name : Display
 * Description :   Checks if the given number is greater than 10.
 * Input :         Integer
 * Output :        Boolean
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

bool Display(int iNo)
{
    if(iNo > 10)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = 0;

    // Get input from user
    printf("Enter number:\n");
    scanf("%d",&iValue);

    // Call Display function and store result
    bRet = Display(iValue);

    // Print message based on the result of Display function
    if(bRet == true)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

    return 0;
}