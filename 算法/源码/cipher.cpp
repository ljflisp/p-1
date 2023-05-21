


// Cipher
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#define maxn 1600005

bool Hash[maxn];
int name[256];
int n, nc;
char st[maxn];

int main() {
  cin >> n >> nc >> st; // 3 (stand for childstrlen) 4 (be made up of diff char)
  // daababac (1.daa 2.aab 3.bab 4.aba 5.bac)
  memset(name,0,sizeof(name));
  memset(Hash,0,sizeof(Hash));
  int len = strlen(st);
  int t = 0;
  for (int i = 0; i < len; i++)
    if (name[st[i]] == 0)
      name[st[i]] = t++;
  int temp = 0;
  t = nc;
  for (int i = 0; i < n-1; i++)
    {
      temp = temp * nc + name[st[i]];
      t*=nc;
    }
  int ans = 0;
  for (int i = n-1; i < len; i++)
    {
      temp = (temp * nc + name[st[i]]) % t;
      if (!Hash[temp])
      {
        ans++;
        Hash[temp] = true;
      }
    }
  cout << ans << endl; // 5
  return 0;
}