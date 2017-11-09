#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> primes(n);
    if (n > 0)
    {
        primes[0] = 2;
    }
    //cout << primes.size() << " " << primes.capacity() << endl;

    int num = 2;
    int count = 1;
    bool isPrime = true;
    int line = 1;
    while (true)
    {
        if (count > n)
        {
            break;
        }
        if (count >= m && count != n && isPrime)
        {
            
            if (line % 10 == 0)
            {
                cout << num;
                cout << endl;  
            }
            else
            {
                cout << num << " ";
            }
            line++;
        }
        else if (count == n && isPrime)
        {
            cout << num;
        }

        //cout << "test1" << endl;
        num++;
        int i;
        for (i = 0; i < count; ++i)
        {
            if (num % primes[i] == 0)
            {
                break;
            }
        }
        //cout << "test2" << endl;
        if (i == count)
        {
            primes[count++] = num;
            isPrime = true;
        }
        else
        {
            isPrime = false;
        }
    }

    return 0;
}