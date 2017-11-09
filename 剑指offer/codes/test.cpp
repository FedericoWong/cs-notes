#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    cout << a.capacity() << endl;
    a.push_back(3);
    cout << a.capacity() << endl;
    a.push_back(4);
    cout << a.capacity() << endl;
    a.push_back(5);
    cout << a.capacity() << endl;
    for (int i = 0; i < 9; ++i)
    {
        a.push_back(i);
        cout << a.capacity() << endl;
    }

    return 0;
}