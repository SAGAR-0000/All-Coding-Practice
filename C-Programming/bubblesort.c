//bubble sort 2_0
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter Number Of values: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=1;i--){
        bool is_sorted = true;
        for(int j=1;j<=i;j++){
            if(a[j-1]>a[j]){
                if(j!=j-1){
                    a[j]=a[j]+a[j-1];
                    a[j-1]=a[j]-a[j-1];
                    a[j]=a[j]-a[j-1];
                }
                is_sorted = false;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}