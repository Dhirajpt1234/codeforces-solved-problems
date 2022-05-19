#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    char arr[s.length()+1] ;
    int k = 0;

    for(int i = 0 ; i<s.length() ; i+=2 )
    {
        arr[k] = s[i];
        k++;
    }

    sort(arr  , arr+k);

    cout<<arr[0];
    for(int i = 1 ; i<k ; i++)
    {
        cout<<'+'<<arr[i];
    }



    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         arr[0]++;
    //     }
    //     else if (s[i] == '2')
    //     {
    //         arr[1]++;
    //     }
    //     else if (s[i] == '3')
    //     {
    //         arr[2]++;
    //     }
    // }

    // char ans[s.length() + 1];
    // int k = 0;

    

    // if (s.length() == 1)
    // {
    //     cout << s;
    // }
    // else
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < arr[i]; j++)
    //         {
    //             ans[k] = arr[i];
    //             ans[k + 1] = '+';
    //         }
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < arr[i]; j++)
    //     {
    //         ans[k] = arr[j+1];
    //         ans[k + 1] = '+';
    //         k+=2;
    //     }
    // }

    // for (int i = 0; i < s.length() + 1; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    return 0;
}