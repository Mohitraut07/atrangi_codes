#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,flag =0;
	    scanf("%d",&n);
	    char s[n],a[n/2],b[n/2];
	    scanf("%s",s);
	    for(int i=0;i<n/2;i++){
	        a[i]=s[i];
	    }

	    for(int i=0,j=n/2;i<n/2,j<n;i++,j++){
	        b[i]=s[j];
	    }
	    
	    for(int i=0; i<n/2;i++){
	        if(a[i]!=b[i])
	        {
	            flag =1;
	        }
	    }
	    
	   // printf("%s\n",a);
	   // printf("%s\n",b);
	    if (flag!=1){
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}
