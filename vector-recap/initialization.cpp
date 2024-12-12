#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<type> v;
    vector<int> v1; // Construct a vector with 0 elements.	O(1)
    cout << v1.size() << endl;

    // vector<type> v(N);
    vector<int> v2(100);
    cout << v2.size() << endl; // Construct a vector with N elements.	O(N)

    // vector<type> v(N, V);
    vector<int> v3(100, 20); // Construct a vector with N ele.. & initial value V.	O(N)

    // vector<type> v(v2);
    vector<int> v4(v3); // Construct a vector by copying another vector v2.O(N)
    cout << v4.size() << endl;

    // vector<type> v(A, A+N);
    int arr[4] = {10, 20, 450, 12};
    vector<int> v5(arr, arr + 4);
    cout << v5.size() << endl;
    // Construct a vector by copying all elements from an array A of size N.	O(N)

    return 0;
}