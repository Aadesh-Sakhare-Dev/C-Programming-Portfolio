/*
 * ============================================================================
 * Program: Division of two number
 * Author: Aadesh Dipak Sakhare
 * Date: 04/08/2024
 * Description:
 *   This program accepts two numbers from the user,
 *   performs division on them, and displays the result. The division
 *   is performed using a separate function for better modularity and
 *   reusability.
 * ============================================================================
 */

#include<stdio.h>

/*
* ============================================================================
*   Function Name :     Divide
*   Description :       It is used to division of two numbers
*   Input :             Integer, Integer
*   Output :            Integer
*   Author :            Aadesh Dipak Sakhare
*   Date :              04/08/2024
* ============================================================================
*/
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

//  Filter out condition
    if(iNo2 > iNo1)
    {
        return -1;
    }

//  Perform division
    iAns = iNo1 / iNo2;
    return iAns;
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

//  Getting input from user
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

//  call Divide function
    iRet = Divide(iValue1, iValue2);

// Check for errors and display results
    if(iRet == -1)
    {
        printf("The first value should be greater than the second value. Please enter valid numbers.");
    }
    else
    {
        printf("Division of two number is : %d\n",iRet);
    }

    return 0;
}