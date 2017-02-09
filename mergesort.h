//Merge Sort:

//function declaration so that merge is not implicitly defined in merge_sort

void merge(int[],int,int,int,int);

void merge_sort(int a[], int from, int to)
{
   if (from == to) return;
   int mid = (from + to) / 2;
   // Sort the first and the second half
   merge_sort(a, from, mid);
   merge_sort(a, mid + 1, to);
   merge(a, from, mid, mid +1 , to);
}

void merge( int a[],
            int from,  int mid,
            int mid_1, int to )
{
    int tempArray[256];
    int  index = from;
    int  firstSave = from;

        //  Merge segments (array subsets)
    while( (from <= mid) && (mid_1 <= to) )
    {
        if( a[from] < a[mid_1] )
        {
           tempArray[index] = a[from];
           from++;
        }
        else
        {
           tempArray[index] = a[mid_1];
           mid_1++;
        }
        index++;
    }
        //  Copy remainder of left array into tempArray
    while( from <= mid )
    {
        tempArray[index] = a[from];
        from++;
        index++;
    }

        //  Copy remainder of right array into tempArray
    while( mid_1 <= to )
    {
        tempArray[index] = a[mid_1];
        mid_1++;
        index++;
    }

        //  Copy back into original array
    for( index = firstSave ; index <= to ; index++ )
        a[index] = tempArray[index];
}
