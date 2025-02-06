#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
int main()
{
    int A[50];
    int n;
    int metoda;
    printf("Introduceti marimea sirului: ");
    scanf("%d", &n);
    printf("Alegeti metoda de sortare pe care o doriti:\n");
    printf("Scrieti 1 pentru quicksort\n");
    printf("Scrieti 2 pentru heapsort\n");
    scanf("%d", &metoda);
    switch(metoda){
    case 1:
        read_array(A, n);
        quick_sort(A, 1, n);
        print_array(A, n);
    break;
    case 2:
        read_array(A, n);
        heap_sort(A, n);
        print_array(A, n);
    break;
    }
    return 0;
}

