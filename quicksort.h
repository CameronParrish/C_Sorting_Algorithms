int Pivot(int[],int,int);

void Quicksort( int a[], int first, int last )
{
    int pivot;

    if( first < last ) {
        pivot = Pivot( a, first, last );
        Quicksort( a, first, pivot-1 );
        Quicksort( a, pivot+1, last );
    }
}


/*  Pivot:  Find and return the index of pivot element.
 */

int Pivot( int a[], int first, int last )
{
    int  p = first;
    int pivot = a[first];

    for( int i = first+1 ; i <= last ; i++ ) {
        if( a[i] <= pivot ) {
            p++;
            int * a1 = &a[i];
            int * a2 = &a[p];
            swap( a1 , a2 );
        }
    }
    int * b1 = &a[p];
    int * b2 = &a[first];
    swap( b1, b2 );

    return p;
}
