#include <stdio.h>

int main(){
	
	int n, a[1000]={0}, m, i;
    double sum=0;
    double b[1000]={0};
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d ", &a[i]);
	}
	m=a[0];
	for(i=0;i<n;i++){
		if(m<a[i]){
			m=a[i];
		}else{
			continue;
		}
	}
	
	for(i=0;i<n;i++){
		b[i]=(double)a[i]*100/m;
		sum=sum+b[i];
	}
	
	printf("%.2lf", (double)sum/(double)n);
	
	
	return 0;
}