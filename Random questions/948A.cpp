#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int flag = 0;
    char A [510][510];
    int rows, columns;
    cin >> rows >> columns;
    for(int i = 0; i < rows; i++)
        for(int j = 0;  j < columns; j++)
            cin >> A[i][j];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns - 1; j++)
        {
            if(A[i][j] == 'S' && A[i][j + 1] == 'W')
                ++flag;
            else if(A[i][j] == 'W' && A[i][j + 1] == 'S')
                ++flag;
        }

    for(int i = 0; i < columns; i++)
        for(int j = 0; j < rows - 1 ; j++)
        {
            if(A[j][i]== 'S' && A[j + 1][i] == 'W')
                ++flag;
            else if(A[j][i] == 'W' && A[j + 1][i] == 'S')
                ++flag;
        }

    if(flag == 0)
    {
        cout << "YES" << endl;
        for(int i = 0; i < rows; i++)
            for(int j = 0;  j < columns; j++)
            {
                if(A[i][j] == '.')
                    A[i][j] = 'D';
            }
        for(int i = 0; i < rows; i++)
            for(int j = 0;  j < columns; j++)
            {
                if(j == columns - 1)
                    cout << A[i][j] << endl;
                else
                    cout << A[i][j];
            }
    }
    else
        cout << "NO" << endl;

    return 0;
}
