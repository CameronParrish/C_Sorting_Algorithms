//Insertion sort:

void Insertion(int a[], int N)
{
 int i, j;
 int v;

 for (i = 1; i < N; ++i)
 {
  v = a[i];
  j = i;

  while (j > 0 && a[j-1] > v)
  {
    a[j] = a[j-1];
    j = j-1;
  }

  a[j] = v;
 }
}
