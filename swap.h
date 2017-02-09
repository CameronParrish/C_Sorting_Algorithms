// swap.h , simple swap function

void  swap(int * v1, int * v2 )
{
    int tmpVal;

    tmpVal = *v1;
    *v1 = *v2;
    *v2 = tmpVal;
}
