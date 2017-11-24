#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char str1[60];
    char str2[60];
    char str3[60];
    char str4[60];

    cin >> str1;
    cin >> str2;
    cin >> str3;
    cin >> str4;

    //cout << str1 << endl;
    //cout << str2 << endl;
    //cout << str3 << endl;
    //cout << str4 << endl;

    char day, hour;
    int j = 0;
    while ((str1[j] < 'A' || str1[j] > 'Z') || str1[j] != str2[j])
    {
        j++;
    }
    day = str1[j++];

    //cout << day << endl;

    while (str1[j] != str2[j])
    {
        j++;
    }
    hour = str1[j];

    //cout << hour << endl;

    int k = 0;
    while (str3[k] != str4[k] || (str3[k] < 'a' || str3[k] > 'z'))
    {
        k++;
    }

    int minutes = k;

    //cout << str3[k] << endl;

    char week[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    cout << week[day - 'A'] << " " << setiosflags(ios::fixed) << setw(2) << setfill('0') 
    << ((hour >= 'A') ? ((int)(hour - 'A') + 10) : ((int)(hour - '0'))) << ":"
    << setiosflags(ios::fixed) << setw(2) << setfill('0') << minutes << endl;
    

    return 0;
}