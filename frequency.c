#include<stdio.h>
#include<stdlib.h>
int main(){

	
		static long int minus[1000001], plus[1000001];
		long int n ,i = 0 , temp,answer = 1000000 , frequency = 0 , tempFreq;


		scanf("%ld",&n);


		for(i ; i < n ; i++){
			scanf("%ld",&temp);
			if(temp < 0) // if negative comes add in minus and check with min and freq
			{
				tempFreq = minus[abs(temp)]+1;
				minus[abs(temp)]++;
				
			}else{
				tempFreq = plus[temp]+1;
				plus[temp]++;
			}

			if(tempFreq > frequency || (tempFreq == frequency && temp < answer) ){
					answer = temp;
					//printf("i=%d and ans=%d\n",i,answer);
					frequency = tempFreq;						
			}
		}
		printf("%ld\n",answer);

	

 	return 0;
}
