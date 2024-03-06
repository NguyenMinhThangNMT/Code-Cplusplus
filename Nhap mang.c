#include <stdio.h>

int main()
{
    int arr[100];
    int n,i;
    
    printf("Nhap so luong phan tu trong mang :");
    scanf("%d",&n);
    
    printf("Nhap gia tri cua cac phan tu : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Mang ban vua nhap la :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
