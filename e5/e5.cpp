#include <stdio.h>

void sortArray(int *, int len);
int loadArray(int *);
void printArray(int arr[], int len);

int main()
{
    int arr[100];
    int lenght;
    lenght = loadArray(arr);
    sortArray(arr, lenght);
    return 0;
}

void sortArray(int *baseArray, int len)
{
    int *result = new int[0];
    int temp, tempIndex;
    for (int i = 0; i < len; i++)
    {
        temp = baseArray[i];
        tempIndex = i;
        printf("temp: %d\n", temp);
        for (int j = i; j < len; j++)
        {
            if (temp > baseArray[j])
            {
                temp = baseArray[j];
                tempIndex = j;
                printf("temp actualizado: %d\n", temp);
            }
        };
        baseArray[tempIndex] = baseArray[i];
        baseArray[i] = temp;
    }
    printArray(baseArray, len);
}

int loadArray(int *array)
{
    int val, i = 0;
    scanf("%d", &val);
    while (val >= 0)
    {
        array[i] = val;
        i++;
        scanf("%d", &val);
    }

    return i;
}

void printArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        printf("%d ", arr[j]);
    }
}