#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            { c=0;
                for(j=0;j<n;j++)
                {
                    if(i!=j){
                    if(a[i]==a[j]){
                        c=1;
                    }}
                }
                if(c!=1){
                    printf("%d",a[i]);
                }
            }
            return 0;
}
