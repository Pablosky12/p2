#include <stdio.h>
#include <string.h>

int Ocurrencias(char[], int, char);
int main()
{
    char frase[100];
    scanf("%s", frase);
    printf("%d", Ocurrencias(frase, strlen(frase), 'a'));
    return 0;
}

int Ocurrencias(char frase[], int largo, char letra)
{
    int times = 0;
    for (int i = 0; i < largo; i++)
    {
        if (frase[i] == letra)
        {
            times++;
        }
    }
    return times;
}
