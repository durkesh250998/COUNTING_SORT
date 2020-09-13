#include<stdio.h>
void main(){
    int a[14]={6,5,4,3,2,1,6,5,4,3,2,1,0,0};
    int n=14,k=6,count[6],b[14],i;
    for(i=0;i<=k;i++){
        count[i]=0;
    }
    
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[--count[a[i]]]=a[i];
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    for(i=0;i<n;i++){
        printf("\n%d\n",a[i]);
    }
}