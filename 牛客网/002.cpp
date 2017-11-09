// A除以B

#include <iostream>
#include <cstring>

using namespace std;

int nums[1000];
int results[1000];
char str[1000];
int dividend;

int main()
{
    cin >> str;
    cin >> dividend;

    int length = strlen(str);
    for (int i = 0, j = 0; i < length; ++i)
    {
        nums[i] = str[j++] - '0';
    }

    int tmpDivisor;
    int carry = 0;
    for (int i = 0; i < length; ++i)
    {
        tmpDivisor = carry * 10 + nums[i];
        results[i] = tmpDivisor / dividend;
        carry = tmpDivisor % dividend;
    }

    int k = 0;
    while (results[k] == 0)
    {
        k++;
    }
    for (int i = k; i < length; ++i)
    {
        cout << results[i];
    }
    cout << " " << carry << endl;
    return 0;
}