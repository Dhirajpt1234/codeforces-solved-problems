#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair <int , int> p1 = {1 , 2};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int , string > p2 ;
    p2 = make_pair(4, "Dhiraj");
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int , string > p3 ;
    p3 = make_pair(10, "Suraj");
    cout<<p3.first<<" "<<p3.second<<endl;

    p3.swap(p2);
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;




    return 0;
}