洛谷P1614
方法1：常规的指针移动
#include <iostream>
using namespace std;
int a[10001] ;
int main()
{
    int n,m,min,ins = 0;
    cin >> n >> m;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i <= m-1;i++)
    {
        ins += a[i];
    }
    min = ins;
    for(int i = m,j = 0;i < n;i++,j++)
    {
           ins = ins + a[i] - a[j];
         if( ins < min)
         {
             min = ins;
         }
    }
    cout << min;
    return 0;
}
方法2：前缀和//呜呜，没想到呢，太菜了
#include <iostream>
using namespace std;
int a[10001] ,b[10001];
int main()
{
    int n,m,min = 100000,ins = 0;
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    for(int i = 0,j = m;j <= n;j++,i++)
    {
        ins = b[j] - b[i];
        if(ins < min)
            min = ins;
    }
    cout << min;
    return 0;
}//记得min初始化时开大一点
