#include <iostream>
using namespace std;
int main()
{
    int A[] = {0,4,3,2,0,4,2,5};
    int n = 8;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            swap(A[j], A[i]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}