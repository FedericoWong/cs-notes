#include <iostream>
#include <cstdio>
#include <cstring>


bool Increment(char *number)
{
    bool isOverflow = false;
    int nTakeOver = 0;
    int nLength = strlen(number);

    for (int i = nLength - 1; i >= 0; --i)
    {
        int nSum = number[i] - '0' + nTakeOver;
        if (i == nLength - 1)
            ++nSum;

        if (nSum >= 10)
        {
            if (i == 0)
            {
                isOverflow = true;
                break;
            }
            nSum -= 10;
            number[i] = '0' + nSum;
            nTakeOver = 1;
        }
        else
        {
            number[i] = '0' + nSum;
            break;
        }
    }

    return isOverflow;
}

void PrintfNumber(char *number)
{
    bool isBeginning0 = true;
    int nLength = strlen(number);

    for (int i = 0; i < nLength; ++i)
    {
        if (isBeginning0 && number[i] != '0')
        {
            isBeginning0 = false;
        }

        if (!isBeginning0)
        {
            printf("%c", number[i]);
        }
    }

    printf("\t");
}

void Print1ToMaxOfNDigits(int n)
{
    if (n <= 0)
    {
        return;
    }

    char *number = new char[n + 1];
    memset(number, '0', n);
    number[n] = '\0';

    while (!Increment(number))
    {
        PrintfNumber(number);
    }

    delete[] number;
}


int main()
{
    Print1ToMaxOfNDigits(3);
    return 0;
}