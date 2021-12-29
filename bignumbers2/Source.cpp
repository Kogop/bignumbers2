#include <string>
#include <iostream>
//#include <climits>

using namespace std;
string a = "", n = "";

int length = 0;
int main()
{

    cin >> a;
    cin >> n;
   
    int* A = new int[a.size()];
    int* B = new int[n.size()];

    for (int i = 0; i < a.size(); i++) {
        A[i] = a[a.size() - i - 1] - '0';
    }
    for (int i = 0; i < n.size(); i++) {
        B[i] = n[n.size() - i - 1] - '0';
    }

    length = a.size() + n.size() - 1;
    int l = length;
    int* C = new int[length];
    for (int ix = 0; ix < length; ix++)
    {
        C[ix] = 0;
    }

    for (int ix = 0; ix < a.size(); ix++)
    {
        for (int jx = 0; jx < n.size(); jx++)
        {
            C[ix + jx] += A[ix] * B[jx];
        }
    }

    for (int ix = 0; ix < length - 1; ix++)
    {
        C[ix + 1] += C[ix] / 10;
        C[ix] %= 10;
    }

    while (C[length] == 0) {
        length--;
    }
   // cout << " 4to do etogo, to ne schitaetsya    ";
    for (int i = length-1; i >-1; i--) {
        cout << C[i];
    }
        
    
    delete[] A;
    delete[] B;
    // system("PAUSE");
    return 1;
}