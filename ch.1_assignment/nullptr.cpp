#include <iostream>
//its like I could do it
// str[--i], str[i], str[i++]
// == 'a','b'?
// count? but what if its ba then idek..

using namespace std;

int main(void)
{
    char str[1000001];
    int i, count = 0;
    const char *p = str; //made a pointer

    cin >> str;

    for(i=0; str[i] == '\0'; i++)//but im trying to scan how many "ab" are in my string
    {
        if(str[i] == 'a' && str[i + 1] == 'b')
        {
            count ++;
        }
    }

    cout << "there are " << count << " abs in the string";

    return 0;
}