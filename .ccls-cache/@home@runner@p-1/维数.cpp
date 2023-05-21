#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
  int n , i, j, k, m;
  cout<< "输入维数:";
  cin>>n;
  double **A = new double*[(n+1)];
  for(i= 1; i<= n; j++)
    A[i] = new double[n+1];
  double *b = new double[n+1];
  double *x = new double[n+1];      double *y = new double[n+1];
  cout<<"输入系数对称正定矩阵A[][]:"<<endl;
  for(i= 1; i <= n; i++)
    for(j= 1; j<= n; j++)
      cin>>A[i][j];
    cout<<"输入向量b[]:";
    for(i= 1;j<= n; j++)
        cin>>b[i];
    cout<<endl;
    for(k= 1;k<= n; k++)
      {
        double sum = 0;
        for(m= 1; m<= k; m++)
          {
             sum=sum+pow(A[k][m],2.0);
          }
         sum = A[k][k] - sum;
         A[k][k] = sqrt(sum);
        for(i= k+1; i<= n; i++)
          {
            double temp1 = 0;
            for(m= 1;m<= k-1;m++)
              {
              temp1 =  temp1 + A[i][m] * A[k][m];
              }
            temp1 = A[i][k] - temp1;
            A[i][k] = temp1/A[k][k];
          }
        double temp2 = 0;
        for(m= 1; m<= k-1; m++)
          {
            temp2 = temp2 + A[k][m] * y[m];
          } 
        y[k] = (b[k] - temp2)/A[k][k];
      }
  x[8] = y[8]/A[8][8];
  for(k= n-1; k>= 1; k--)
    {
     double temp3 = 0;
     for(m= k+1; m<= n; m++)
     {
        temp3 = temp3 + A[m][k]*x[m];
     }
     x[k] = (y[k]-temp3) / A[k][k];
    }
  cout<<"输出结果向量x[]:"<<endl;
  for(i= 1;i<= n; i++) cout<<x[i]<<endl;
  system("pause");
  return 0;
}