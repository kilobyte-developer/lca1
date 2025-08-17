#include <stdio.h>
int main(){
    int a[]={5,8,3,9,2},n=5,x=9,found=0;
    for(int i=0;i<n;i++) if(a[i]==x){printf("Found at %d\n",i); found=1;}
    if(!found) printf("Not Found\n");
}
