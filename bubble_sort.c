#include <stdio.h>
int main(){
    int a[]={5,1,4,2,8},n=5,t;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){t=a[j]; a[j]=a[j+1]; a[j+1]=t;}
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
