//Selection sort:

void selection( int a[], int N)
{
 int i, j, min;

 for (i = 0; i < N-1; ++i)
 {
  //Elements from 0 to i-1 are in the correct place

   min = i;
   for (j = i+1; j < N; ++j)
    if (a[j] < a[min])
       min = j;

    int * a1 = &a[i];
    int * a2 = &a[min];
   swap( a1, a2 );

  //Elements from 0 to i are in the correct place
 }
}
