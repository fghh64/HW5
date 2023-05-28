#include<stdio.h>

int abs_arr(int arr[], int n) {
    for (int i=0;i<n;i++) {
        scanf("%d", arr+i); //arr+i==arr[i]
    }
    
    int *ptr=arr; //хранит значение arr[0]
    int cnt=0; 

    for (int i=0;i<n; *ptr++, i++) {
        if (*ptr>=0) {
            printf("%d ", *ptr);
        } else {
            *ptr=*ptr * (-1); 
            printf("%d ", *ptr); 
            cnt++;
        }
    }

    printf("\n");
    printf(" %d", cnt);
    printf("\n");
    return 0;
}

    int main() {
        int n;
        scanf("%d", &n);
        int arr[1000];
        abs_arr(arr, n);
        return 0;
    }