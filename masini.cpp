#include <iostream>
#include <fstream>

using namespace std;

ifstream in("masini.in");
ofstream out("masini.out");

void sortare(int A[1001], int n)
{
    int aux;

    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(A[i] > A[j])
        {
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
}

int main()
{
    int n, T;

    in>>n>>T;

    int A[1001];

    for(int i=1;i<=n;i++)
        in>>A[i];

    sortare(A, n);

    int s = 0;
    int i = 1;
    int ok = 0;

    while(s <= T)
    {
        s = s + A[i];
        ok++;
        i++;


    }

    out<<ok-1;
}
