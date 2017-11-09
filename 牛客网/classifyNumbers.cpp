#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int nums;
    cin >> nums;

    vector<int> allNums;
    int tmp;
    for (int i = 0; i < nums; ++i)
    {
        cin >> tmp;
        allNums.push_back(tmp);
    }

    int a1 = 0;
    for (auto e : allNums)
    {
        if ((e % 5 == 0) && (e % 2 == 0))
        {
            a1 += e;
        }
    }

    int a2 = 0;
    bool a2Exist = false;
    bool a2Flag = true;
    for (auto e : allNums)
    {
        if (e % 5 == 1)
        {
            a2Exist = true;
            if (a2Flag)
            {
                a2 += e;
                a2Flag = false;
            }
            else
            {
                a2 -= e;
                a2Flag = true;
            }
        }
    }

    int a3 = 0;
    for (auto e : allNums)
    {
        if (e % 5 == 2)
        {
            a3++;
        }
    }

    int a4 = 0;
    int count = 0;
    for (auto e : allNums)
    {
        if (e % 5 == 3)
        {
            a4 += e;
            count++;
        }
    }

    int a5 = 0;
    for (auto e : allNums)
    {
        if (e % 5 == 4)
        {
            if (e > a5)
            {
                a5 = e;
            }
        }
    }

    if (a1)
        cout << a1 << " ";
    else
        cout << "N ";

    if (a2Exist)
    {
        cout << a2 << " ";
    }
    else
    {
        cout << "N ";
    }

    if (a3)
    {
        cout << a3 << " ";
    }
    else
    {
        cout << "N ";
    }

    if (count)
    {
        cout << setiosflags(ios::fixed) << setprecision(1) << (double) a4 / count << " ";
    }
    else
    {
        cout << "N ";
    }

    if (a5)
    {
        cout << a5;
    }
    else
    {
        cout << "N";
    }


    return 0;
}