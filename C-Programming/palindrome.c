#include<stdio.h>

int main(){
    int n,i=0,r,s;
    printf("Enter Number: ");
    scanf("%d",&n);
    s=0;
    int t=n;
    while(t>0){
        r=t%10;
        s=(s*10)+r;
        t=t/10;
    }
    if(n==s){
        printf("Is Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}