//sorted array
#include<stdio.h>
int main()
{
void read(int[], int);
void sort(int[], int);
void print(int[], int);
void merge(int[], int[], int[], int, int);
int ar1[20], ar2[20], ar3[40], n1, n2, n3;
printf("No of elements in 1st array [1-20]: ");
scanf("%d", &n1);
    read(ar1, n1);

    printf("\nNo of elements in 2nd array [1-20]: ");
    scanf("%d", &n2);

    read(ar2, n2);

    sort(ar1, n1);
    sort(ar2, n2);

    merge(ar1, ar2, ar3, n1, n2);

    printf("\nSorted array 1: ");
    print(ar1, n1);

    printf("\nSorted array 2: ");
    print(ar2, n2);

    printf("\nMerged array: ");
    print(ar3, n1 + n2);

    return 0;
}

void read(int a[], int n)
{ int i;
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
return;
}
void sort(int a[], int n)
{
int i, j, temp;
for(i = 0; i < n; i++)
for(j = i + 1; j < n; j++)
if(a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
 }
  return;
}

void merge(int a[], int b[], int c[], int n1, int n2)
{ int i, j, k;
    i = j = k = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        c[k++] = a[i++];
        else
        c[k++] = b[j++];
    }
    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    return;
}

void print(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%d,", a[i]);

    return;
}

