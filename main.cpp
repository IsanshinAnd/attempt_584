#include <iostream>
using namespace std;

void prime_1 (int& n) // решето Эратосфена
{
  int c[3] = {0, 0, 0};
  bool s[n];
  int k = 2;
  s[0]= false;s[1] = false; s[2] = true;
  for (k = 3; k<=n; k++)
  {
      if (k%2!=0) s[k] = true;
      else s[k] = false;
  }
  for (k = 3; k*k <= n ;k+=2)
  {
      if (s[k]== true)
      {
          for(int L = k*k; L<=n; L+=k)
              s[L] = false;
      }
  } // теперь S[k]= true тогда и только тогда, когда k - простое


  int p , j, i= 0; int b = n;
  while (b - c[0]-c[1]-c[2] > 0)
  {
   for (k = 0; k<=n; ++k)
    {
      if (s[k]== true) p = k;
    }
   j = b - c[0] - c[1] - p;
   if (j == 0) {c[i] = p; i++;}
   else if (j == 1) n = p-1;
   else if (j > 1) {c[i] = p; ;n = j; i ++;}
  }


  cout << i << endl;
  for (j=0; j<i;j++)
  cout << c[j] << " ";

}

int main()
{
    int n = 0;
    cout << "Enter n: "<< endl;
    cin >> n;
    prime_1(n);

    return 0;
}
