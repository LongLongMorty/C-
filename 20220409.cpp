*洛谷P5730
纯纯的暴力题，写了我一百多行
#include <iostream>
using namespace std;
string a[6][6000];
int main()
{
    int n, j = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0;i < n;i++)
    {
        int b = s[i] - '0';
        if(b == 0)
        {
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j++;
            a[0][j] = 'X';
            a[4][j] = 'X';
            j++;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j += 2;
        }
        else if(b == 1)
        {
            j+= 2;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j += 2;
        }
        else if(b == 2)
        {
            a[0][j] = 'X',a[2][j] = 'X',a[3][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[1][j] = 'X',a[4][j] = 'X';
            j += 2;
        }
        else if(b == 3)
        {
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j+= 2;
        }
        else if(b == 4)
        {
            a[0][j] = 'X',a[2][j] = 'X',a[1][j] = 'X';
            j++;
            a[2][j] = 'X';
            j++;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j+= 2;
        }
        else if(b == 5)
        {
            a[0][j] = 'X',a[2][j] = 'X',a[1][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[3][j] = 'X',a[4][j] = 'X';
            j+= 2;
        }
        else if(b == 6)
        {
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[3][j] = 'X',a[4][j] = 'X';
            j+= 2;
        }
        else if(b == 7)
        {
            a[0][j++] = "X";
            a[0][j++] = "X";
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j+=2;
        }
        else if(b == 8)
        {
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j+=2;
        }
        else if(b == 9)
        {
            a[0][j] = 'X',a[2][j] = 'X',a[1][j] = 'X',a[4][j] = 'X';
            j++;
            a[0][j] = 'X',a[2][j] = 'X',a[4][j] = 'X';
            j++;
            for(int f = 0; f <= 4;f++)
            {
                a[f][j] = 'X';
            }
            j+=2;
        }
    }
    for(int u = 0;u <= 4;u++)
    {
        for (int k = 0; k <= j - 2; k++)
        {
            if(a[u][k] != "X")
            {
                a[u][k] = '.';
            }
        }
    }
    for(int u = 0;u <= 4;u++)
    {
        for(int k = 0;k <= j-2;k++)
        {
            cout << a[u][k] ;
        }
        cout << endl;
    }
    return 0;
}
