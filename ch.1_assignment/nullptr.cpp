#include <iostream>
//its like I could do it
// str[--i], str[i], str[i++]
// == 'a','b'?
// count? but what if its ba then idek..

using namespace std;

int main(void)
{
    char str[1000001];
    int i, cnt = 0;
    const char *p = str; //made a pointer

    cin >> str;

    for(i=0; p[i] != '\0'; i++)//but im trying to scan how many "ab" are in my string
    {
        if(p[i] == 'a' && p[i + 1] == 'b')
        {
            cnt++;
        }
    }

    cout << "there are " << cnt << " abs in the string";

    return 0;
}