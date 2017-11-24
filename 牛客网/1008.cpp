#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[3] = {0}; // 分别记录甲c,j,b的获胜次数
    int b[3] = {0}; // 分别记录乙c,j,b的获胜次数
    char oneA;
    char oneB;
    int totalNum = n;

    while (n--)
    {
        cin >> oneA >> oneB;

        switch (oneA)
        {
            case 'C':
                if (oneB == 'C')
                {
                    ;
                }
                else if (oneB == 'J')
                {
                    a[0]++;
                }
                else
                {
                    b[2]++;
                }
            break;
            case 'J':
                if (oneB == 'C')
                {
                    b[0]++;
                }
                else if (oneB == 'J')
                {
                    ;
                }
                else
                {
                    a[1]++;
                }
            break;
            case 'B':
                if (oneB == 'C')
                {
                    a[2]++;
                }
                else if (oneB == 'J')
                {
                    b[1]++;
                }
                else
                {
                    ;
                }
            break;
        }    
    }
    // 统计甲乙获胜的结果
    int numAWin = 0;
    int numBWin = 0;
    for (int i = 0; i < 3; ++i)
    {
        numAWin += a[i];
        numBWin += b[i];
    }

    int numTie = totalNum - numAWin - numBWin;

    cout << numAWin << " " << numTie << " " << numBWin << endl;
    cout << numBWin << " " << numTie << " " << numAWin << endl;

    // 分别统计甲乙出什么获胜次数最多
    char winA;
    int numA = 0;
    if (a[2] > numA)
    {
        numA = a[2];
        winA = 'B';
    }
    if (a[0] > numA)
    {
        numA = a[0];
        winA = 'C';
    }
    if (a[1] > numA)
    {
        numA = a[1];
        winA = 'J';
    }

    char winB;
    int numB = 0;
    if (b[2] > numB)
    {
        numB = a[2];
        winB = 'B';
    }
    if (b[0] > numB)
    {
        numB = a[0];
        winB = 'C';
    }
    if (b[1] > numB)
    {
        numB = a[1];
        winB = 'J';
    }

    cout << winA << " " << winB << endl;
}