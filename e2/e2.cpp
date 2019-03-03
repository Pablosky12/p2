#include <stdio.h>
#include <math.h>

bool isPrime(int);
void allPrimes(int, int);
int main()
{
    int prime1, prime2;

    scanf("%d", &prime1);
    scanf("%d", &prime2);
    printf("%d %d \n", prime1, prime2);
    allPrimes(prime1, prime2);
    return 0;
}

void allPrimes(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == true)
        {
            printf("%d \n", i);
        }
    }
}

bool isPrime(int num)
{
    bool prime = true;
    int i = 2;
    if (num > 0)
    {
        while (prime && i <= floor(sqrt(num)))
        {
            if (num % i == 0)
            {
                prime = false;
            } else {
                i++;
            }
        }
    }
    return (prime);
}