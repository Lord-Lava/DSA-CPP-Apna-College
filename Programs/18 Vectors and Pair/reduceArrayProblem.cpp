//Problem Statement -> Reduce the given array.
//By reducing we mean to put 0 in place of least element, 1 for second-smallest, 2 for third and so on...
//ex-> refer img.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{ //will sort the vector array according in increasing order of elements with their original indexes in the vector of pairs.
    return p1.first < p2.first;
}

int main()
{

    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        // pair<int, int> p;
        // p.first=arr[i];
        // p.second=i;
        // v.push_back(p);
        //OR

        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), myCompare);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}