#include <iostream>

using namespace std;

int main()
{

    return 0;
}
unordered_set<int> f;
int maxi = 0;
for (int i : nums)
{
    f.insert(i);
}
for (int i : f)
{

    if (f.find(i - 1) == f.end())
    {
        int count = 1;
        while (f.find(i + 1) != f.end())
        {
            i++;
            count++;
        }
        maxi = max(maxi, count);
        continue;
    }
    else
    {
        continue;
    }
}
return maxi;
