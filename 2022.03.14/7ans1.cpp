#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        puts((n & (n - 1)) ? "YES" : "NO");
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {

// public:
//     string name;
//     string middle;
//     string last;
// };

// int main()
// {
//     Student sakshi;
//     sakshi.name = "sdhfkj";
//     sakshi.middle = "ksdhfkj";
//     sakshi.last  = "djfkj";


//     Student *Dhiraj;
//     // Dhiraj = new Student();

//     Dhiraj->name = "dhiaraj";

//     delete Dhiraj;

//     return 0;
// }