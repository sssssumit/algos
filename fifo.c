#include<stdio.h>

int a[100],b[100],i,n,z,f,j,pf,h,temp;
void main(){
scanf("%d",&n);
scanf("%d",&f);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(i=0;i<f;i++){		
b[i]=-1;
}
i=0;j=0;h=0;



while(i<n){
if(b[i]=-1 && i<f ){	
b[i]=a[i];
pf++;					
}
else{
z=0;
for(j=0;j<f;j++){		
	if(b[j]==a[i]){		
	h++; 				
	}
	else{
	z++;			
	}
}
if(z==f){					
	pf++;				
	for(j=0;j<f-1;j++){		
	temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;
	}
	b[f-1]=a[i];		
}
}
printf("CF:  %d \t %d \t %d \n",b[2],b[1],b[0]);
i++;
}
printf("frame :");	
for(i=0;i<f;i++){
printf("b[%d] = %d",i,b[i]); 
}
printf("PF = %d ",pf);
printf("Hit = %d ",h);
printf("\n");
}
