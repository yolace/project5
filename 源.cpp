#include<iostream>
#include<vector>
using namespace std;


int main()
{
     
    int n1, n2, n3, n4, i, j, m,l;
    cout << "�������1�����У�"<<endl; 
    cin >> n1 >> n2;
   
   
    float a[100][100];
    float b[100][100];
    float c[100][100];
    cout << "����1��"<<endl;
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
        {
            cin >> a[i][j];
            a[i][j + 1] = 0;
            a[i+1][j] = 0;
        }
    cout << "�������2�����У�"<<endl;
    cin >> n3 >> n4;
    cout << "����2��" <<endl;
    for (int i = 0; i < n3; i++)
        for (int j = 0; j < n4; j++)
        {
            cin >> b[i][j];
            b[i][j + 1] = 0;
            b[i + 1][j] = 0;
        }
    float sum = 0;
    cout << "�������";
     char t;
     cin >> t;
     switch (t)
     {
     case '+':
         if (n1 != n3 || n2 != n4)
         {
             cout << "�������������";
             return 0;
         }
         for (i = 0; i < n1; ++i)
         {
             for (j = 0,m = 0; j < n2; ++j)
             {
                 sum += a[i][j] + b[i][j];
                 cout << sum << " ";
                 sum = 0;
             }
             cout << endl;
         }
         break;
     case'-':
          if (n1 != n3 || n2 != n4)
         {
             cout << "�������������";
             return 0;
         }
         for (i = 0; i < n1; ++i)
         {
             for (j = 0; j < n2; ++j)
             {
                 sum += a[i][j] - b[i][j];
                 cout << sum << " ";
                 sum = 0;
             }
             cout << endl;
         }
         break;
     case'*':
         if (n2 != n3) {
             cout << "�������������";
             return 0;

         }
         for (i = 0; i < n1; i++)
         {
             for (j = 0, m = 0; j < n2; j++, m++)
             {
           
                 for (l = j; l < n2; l++)
                 {
                     sum += a[i][l] + b[l][i + m];
                 }
                 cout << sum << " ";
                 sum = 0;
          
             }
             cout << endl;

         }
      
         break;


     };
   
 
}