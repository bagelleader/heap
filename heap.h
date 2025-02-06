#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int heap_size;
int left(int x);
int right(int x);
void read_array(int A[], int n);
void print_array(int A[], int n);
void quick_sort(int A[], int P, int R);
int partitie(int A[], int P, int R);
void build_max_heap(int A[], int n);
void max_heapify(int A[], int x);
void heap_sort(int A[], int n);


/*
void max_heapify(int A[],int x){
    int largest,aux;
    int l=left(x);
    int r=right(x);
    if(l<=heap_size && A[l]>A[x]){
        largest=l;
    }
    else
    {
        largest=x;
    }
    if(r<=heap_size && A[r]>A[largest])
    {
        largest=r;
    }
    if(largest!=x)
    {
      aux=A[x];
      A[x]=A[largest];
      A[largest]=aux;
      max_heapify(A,largest);
    }
}
*/
#endif // HEADER_H_INCLUDED
