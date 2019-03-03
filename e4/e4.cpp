#include <stdio.h>
#include <string.h>
#include <math.h>

bool esPalindrome(char *);

int main(int argc, char const *argv[])
{
    char *frase = new char[0];
    scanf("%s", frase);
    printf("%d", esPalindrome(frase));
    return 0;
}

bool esPalindrome(char *frase)
{
    bool palindrome = true;
    for (int i = 0; i < floor(strlen(frase) / 2); i++)
    {
        if (frase[i] != frase[strlen(frase) - (i + 1)])
            palindrome = false;
    }

    return palindrome;
}
