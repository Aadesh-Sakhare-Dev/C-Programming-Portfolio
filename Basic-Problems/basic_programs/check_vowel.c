/*
 * ============================================================================
 * Program: Accept a character from the user and check if it is a vowel.
 * Author: Aadesh Dipak Sakhare
 * Date: 07/08/2024
 * Description:
 *   This program accepts a single character from the user and determines if
 *   it is a vowel (a, e, i, o, u) or not. It checks for both lowercase and
 *   uppercase vowels.
 * ============================================================================
 */

#include<stdio.h>
#include<stdbool.h>

/*
 * ============================================================================
 * Function Name : CheckVowel
 * Description :   Checks if the given character is a vowel.
 * Input :         Character
 * Output :        Boolean
 * Author:         Aadesh Dipak Sakhare
 * Date:           07/08/2024
 * ============================================================================
 */

bool CheckVowel(char cAlpha)
{
    // Check for both lowercase and uppercase vowels
    if(cAlpha == 'a' || cAlpha == 'e' || cAlpha == 'i' || cAlpha == 'o' || cAlpha == 'u' ||
       cAlpha == 'A' || cAlpha == 'E' || cAlpha == 'I' || cAlpha == 'O' || cAlpha == 'U')
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
 * Function Name : main
 * Description :   Entry point of the program.
 * ============================================================================
 */

int main()
{
    char cValue = '\0';
    bool bRet = false;

    // Get input from user
    printf("Enter Character :\n");
    scanf("%c",&cValue);

    // Call CheckVowel function
    bRet = CheckVowel(cValue);

    // Print the result based on the CheckVowel function
    if(bRet == true)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}