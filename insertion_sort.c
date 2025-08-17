#include <stdio.h>
int main(){
    int a[]={12,11,13,5,6},n=5,key,j;
    for(int i=1;i<n;i++){
        key=a[i]; j=i-1;
        while(j>=0 && a[j]>key){ a[j+1]=a[j]; j--; }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
