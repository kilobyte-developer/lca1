#include <stdio.h>
int main(){
    int a[]={64,25,12,22,11},n=5,t,min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j;
        t=a[i]; a[i]=a[min]; a[min]=t;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
