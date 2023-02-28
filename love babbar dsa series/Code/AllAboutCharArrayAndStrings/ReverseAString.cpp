#include <iostream>

using namespace std;

void reverse_char_array(char str[], int size_of_str)
{
    int s = 0, e = size_of_str - 1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
}
int main()
{
    char str[20];
    cin >> str; // cin terminates with sapce
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    reverse_char_array(str,i);
    cout << "reversed string is :  " << str ;
    return 0;
}