#include<stdio.h>
#define max 2147483647
int main(){


	int i,j,V,N;
	scanf("%d %d",&V,&N);
	int array[V+1],coins[N];
	for( j = 0 ; j < N ; j++)
		scanf("%d",&coins[j]);
	array[0] = 0;
	for(i = 1 ; i <= V ; i++ ){
		array[i] = max;
	}
	for(i = 1 ; i <= V ; i++){

		for( j = 0 ; j < N; j ++){

			if(coins[j] <= i){
			
				int sub_result = array[i - coins[j]];
				if(sub_result != max && ((sub_result + 1) < array[i]) )
					array[i] = sub_result+1;
		
			}
		}
	}
	
	printf("%d\n",array[V]);



	return 0;
}
