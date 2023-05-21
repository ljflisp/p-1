


// Dijkstra algorithm
#include <iostream>
using namespace std;
#define Max 0xffffff
int n;
int Map[1000+1][1000+1];
int visit[1000+1];
int d[1000+1];

void Dijkstra(int x)
{
  int i,j,Min,p;
  for (i = 1; i <= n; i++)
    d[i] = Map[x][i];
  visit[x] = 1;
  d[x] = 0;
  for (i = 1; i < n; i++)
    {
      Min = Max;
      for (j = 1; j < n; j++)
        if (!visit[j] && Min > d[j])
        {
          p = j;
          Min = d[j];
        }
      visit[p] = 1;
      for (j=1;j<=n;j++)
        if (!visit[j]&&Min+Map[p][j] < d[j])
          d[j] = Min + Map[p][j];
    }
  for (int i = 1; i <= n; i++)
    cout << d[i] << ' ';
    cout << endl;
}

void init() {
  cin >> n;
  int i, j;
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
        {
          cin >> Map[i][j];
          if (Map[i][j] == 0)
            Map[i][j] = Max;
        }
    }
}

int main() {
  init();
  Dijkstra(1);
  return 0;
}