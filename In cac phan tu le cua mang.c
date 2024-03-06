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
    
    printf("Phan tu le cua mang la :");
    for(i=0;i<n;i++){
        if(arr[i]%2==1){
        printf("%d ",arr[i]);
            
        }
    }

    return 0;
}
