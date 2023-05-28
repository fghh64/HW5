#include <stdio.h>
#include <string.h>

int main() {
    int n, s;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    s=n/2;
    for (int i=0;i<s;i++) {
        int e=arr[i];
        arr[i]=arr[s + i];
        arr[s + i]=e;
    }
    for (int i=0;i<n;i++) {
    printf("%d ", arr[i]);
    }
}