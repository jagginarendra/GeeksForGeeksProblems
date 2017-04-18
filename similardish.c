#include<stdio.h>
#include<string.h>
int main(){

	
		int T;
		char temp;
		scanf("%d",&T);
		//
		while(T--){

			char a[4][11];
			char b[4][11];
			int i = 0 , j ;
			for(i ; i < 4 ; i++)
				scanf("%s",a[i]);
			for(i = 0 ; i < 4 ; i++)
				scanf("%s",b[i]);
			
			/*for(i =0 ; i < 4 ; i++)
				printf("%s ",a[i]);
			printf("\n");				
			for(i = 0 ; i < 4 ; i++)
				printf("%s ",b[i]);*/
			//printf("\n"); 
			int count = 0;
			
			for(i = 0 ; i < 4 ; i++){
				for(j = 0; j < 4 ; j++)	
				{
					//printf("comparing %s and %s ,result %d \n",a[i],b[j],strcmp(a[i],b[j]));
					
					if(strcmp(a[i],b[j]) == 0){
						count++;
						break;
					}
				}
				
			}
			//printf("%d\n",count);
			if(count >= 2)
					printf("similar\n");
				else
					printf("dissimilar\n");		
		}

 	return 0;
}
