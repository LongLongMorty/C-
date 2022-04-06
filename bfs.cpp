```cpp
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
int h[101][101],g[101][101];
pair<int,int> pa[101][101];
int bfs(int n,int m)
{
    int bx[] = {1,-1,0,0},by[] = {0,0,1,-1};
    queue<pair<int,int>>a;
    memset(g,-1,sizeof g);
    pair<int,int> t = {1,1};
    g[1][1] = 0;
    a.push(t);
    while(!a.empty())
    {
        pair<int,int> s = a.front();
        a.pop();
        for(int i = 0;i < 4;i++)
        {
            int x = s.first+bx[i],y = s.second + by[i];
            if(x >= 1 && x <= n && y >= 1 && y <= m && h[x][y] == 0 && g[x][y] == -1)
            {
                g[x][y] = g[s.first][s.second] + 1;
                pa[x][y] = s;
                a.push({x,y});
            }
        }
    }
    int i = n,j = m;
    while(!(i == 0 && j == 0))
    {
        cout << i << " " <<  j << " ";
         pair<int,int> x = pa[i][j];
         i = x.first;
         j = x.second;
    }
    return g[n][m];
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin >> h[i][j];
        }
    }
    cout << bfs(n,m);
    return 0;
}
```
