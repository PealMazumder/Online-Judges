//Problem Link: https://lightoj.com/problem/ferris-wheel
#include<bits/stdc++.h>
using namespace std;
int casino = 0;
bool isDone(int cur, int vis[30][30], int m)
{
    for(int i = 0; i<m; i++)
        if(vis[cur][i] == 0) return false;
    return true;
}
void solve()
{
    int n, m, curSeat = 0, totalTime = 0, done = 0;
    int vis[30][30] = {0}, CurOnWheel[30] = {0};
    list<int> Q;

    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
        Q.push_back(i);

    while(true)
    {
        curSeat %= m;
        int curr =  CurOnWheel[curSeat];
        CurOnWheel[curSeat] = 0;

        if(isDone(curr, vis, m)) done++;
        else if(curr != 0) Q.push_back(curr);

        for(list<int> ::iterator it = Q.begin(); it !=Q.end(); it++)
        {
            if(vis[*it][curSeat] == 0)
            {
                vis[*it][curSeat] = 1;
                CurOnWheel[curSeat] = *it;
                Q.erase(it);
                break;
            }
        }
        totalTime += 5;
        curSeat++;
        bool ck = false;
        for(int i = 0; i < m; i++)
        {
            if(CurOnWheel[i] != 0)
            {
                ck = true;
                break;
            }
        }
        if(!ck and done >= n) break;
    }
    printf("Case %d: %d\n", ++casino, totalTime);

}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();
    return 0;
}
