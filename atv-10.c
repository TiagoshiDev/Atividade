/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int  n, mf=0,fmf=0;
    int c [1001]={0};
    
    while(1) {
    scanf("%d", &n); 
    if(n==0)break;
    
    c[n]++;
    
    if(c[n]>fmf || (c[n]==fmf &&n<mf)){
        mf=n;
        fmf=c[n];
    }
    }
    
    printf("mais frequente: %d\nFrequencia: %d\n",mf,fmf);

    return 0;
}