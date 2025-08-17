#include <stdio.h>
int main(){
    int a[]={2,4,6,8,10},n=5,x=8,l=0,r=n-1,mid,found=0;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x){ printf("Found at %d\n",mid); found=1; break; }
        else if(a[mid]<x) l=mid+1; else r=mid-1;
    }
    if(!found) printf("Not Found\n");
}
