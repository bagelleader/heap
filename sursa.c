#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void read_array(int A[], int n){
    for(int i=1; i<=n; i++){
        printf("Introduceti elementul al %d-lea: ", i);
        scanf("%d", &A[i]);
    }
}

void print_array(int A[], int n){
    printf("\nAici este array-ul sortat:\n");
    for(int i=1;i<=n;i++){
        printf("%d ", A[i]);
    }
}

void quick_sort(int A[], int P, int R){
    int q=0;
    if(P<R){
        q = partitie(A, P, R);
        quick_sort(A, P, q-1);
        quick_sort(A, q+1, R);
    }
}

int partitie(int A[], int P, int R){
    int x = A[R];
    int i = P-1;
    for(int j=P;j<R;j++){
        if(A[j]<x){
            int aux;
            i++;
            aux=A[i];
            A[i]=A[j];
            A[j]=aux;
        }
    }
    A[R] = A[i+1];
    A[i+1] = x;
    return i+1;
}

int left(int x){
    return (2*x);
}
int right(int x){
    return (2*x+1);
}

void max_heapify(int A[], int x){
    int largest;
    int aux;
    int l = left(x);
    int r = right(x);

    if(l <= heap_size && A[l] > A[x]){
        largest = l;
    }
    else{
        largest = x;
    }

    if(r<=heap_size && A[r] > A[largest]){
        largest = r;
    }

    if(largest != x){
        aux = A[x];
        A[x] = A[largest];
        A[largest] = A[x];
        max_heapify(A, largest);
    }
}

void build_max_heap(int A[], int n){
    heap_size = n;
    for (int i = (n/2);i>=1;i--){
        max_heapify(A, i);
    }
}

void heap_sort(int A[], int n){
    int i;
    int aux;
    build_max_heap(A, n);
    for(i=n; i>=2; i--){
        aux=A[1];
        A[1]=A[i];
        A[i]=aux;
        heap_size=heap_size-1;
        max_heapify(A, 1);
    }
}
