#include <bits/stdc++.h>
using namespace std;

vector<int> plusone(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i]++;
            return arr;
        }
        arr[i] = 0;
    }
    arr.insert(arr.begin(), 1);
    return arr;
}

int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = plusone(arr);

    cout << "answer is";
    for (auto it : result)
    {
        cout << it;
    }
}