#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 9};
//     int brr[] = {2, 4, 6, 8};
//     int sizea = 5;
//     int sizeb = 4;

//     vector<int> ans;

//     for (int i = 0; i < sizea; i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     for (int i = 0; i < sizeb; i++)
//     {
//         ans.push_back(brr[i]);
//     }
//     cout << "Printing ans array " << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

int main()
{

    vector<int> arr{1, 2, 4, 6, 8, 10};
    vector<int> brr{3, 4, 5, 6};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
            ans.push_back(brr[i]);
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
}