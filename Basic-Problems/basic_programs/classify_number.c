/*
 * ============================================================================
 * Program: Classify a number as Small, Medium, or Large based on its value.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a number from the user and classifies it as "Small"
 *   if less than 50, "Medium" if between 50 and 100 (inclusive), or "Large"
 *   if greater than 100.
 * ============================================================================
 */

#include<stdio.h>

/*
 * ============================================================================
 * Function Name : ClassifyNumber
 * Description :   Classifies the number as Small, Medium, or Large.
 * Input :         Integer
 * Output :        Integer
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

int ClassifyNumber(int iNo)
{
    if(iNo < 50)
    {
        return 1;   // Small
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        return 2;   // Medium
    }
    else if(iNo > 100)
    {
        return 3;   // Large
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
    int iRet = 0;

    // Get input from user
    printf("Enter Number : ");
    scanf("%d",&iValue);

    // call ClassifyNumber function to Classify the number
    iRet = ClassifyNumber(iValue);

    // Print the classification based on the returned value
    if(iRet == 1)
    {
        printf("Small");
    }
    else if(iRet == 2)
    {
        printf("Medium");
    }
    else if(iRet == 3)
    {
        printf("Large");
    }

    return 0;
}

