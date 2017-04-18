#include<stdio.h>
#include<string.h>
int main(){

	
		int T;
		char temp;
		scanf("%d",&T);
		
		while(T--){

			int N , K , i , distinctCounter = 0 ,elements , answer = 0;//sad 1 all 2 some;
			scanf("%d %d",&N,&K);
			int array[K+1];
			for( i = 1 ; i <=  N ; i++){
				
				scanf("%d",&elements);
				int j = 0 , temp ;
				for( j  ; j < elements ; j++){
					scanf("%d",&temp);
					
					if(array[temp] == 0 ){
				
						array[temp] = 1;
						distinctCounter++;
						if(distinctCounter == K && i == N)
						{	
							answer = 1; // all
							break;
						}
						else if(distinctCounter == K && i < N)
						{
							answer = 2; // some
							break;
						}
					}
				}
				if(answer == 1  ){
					printf("all\n");	
				}else if(answer == 2)
					printf("some\n");
			}
			if(answer == 0)
					printf("sad\n");
		}

 	return 0;
}
