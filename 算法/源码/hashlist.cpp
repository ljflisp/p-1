


// Hash Table
#include<iostream>
using namespace std;
#define M 11
#define N 7

struct hterm {
  int key;
  int si;
};

struct hterm hashlist[M+1];
int i, address, sum, d, X[N+1];
float average;

int main() {
  for (i = 1; i <= M; i++) {
    hashlist[i].key = 0;
    hashlist[i].si = 0;
  }
  X[1] = 22; X[2] = 41; X[3] = 53;
  X[4] = 46; X[5] = 30; X[6] = 13;
  X[7] = 1;

  for (i = 1; i <= N; i++) {
    sum = 0;
    address = (3*X[i]) % M;
    d = address;
    if (hashlist[address].key == 0) {
      hashlist[address].key = X[i];
      hashlist[address].si = 1;
    }
    else {
      do {
        d = (d + (X[i] * 7) % 10 + 1) % 11;
        sum = sum + 1;
      } while (hashlist[d].key != 0);
      hashlist[d].key = X[i];
      hashlist[d].si = sum + 1;   
    }
  }
  printf("哈希表地址: ");
  for (i = 0; i < M; i++)
    printf("%-4d",i);
  printf("\n");
  printf("哈希表关键字: ");
  for (i = 0; i < M; i++)
    printf("%-4d",hashlist[i].key);
  printf("\n");
  printf("搜索长度: ");
  for (i = 0; i < M; i++)
    printf("%-4d", hashlist[i].si);
  printf("\n");
  average = 0;
  for(i = 0; i < M; i++)
    average = average + hashlist[i].si;
  average = average / N;
  printf("平均搜索长度: ASL(%d) = %g", N, average);
  system("pause");
  return 0;
}