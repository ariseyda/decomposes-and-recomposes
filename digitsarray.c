#include<stdio.h>

//A computer program receives an integer, uses a function that decomposes the value to digits and stores the digits in an array, 
//and uses another function that recomposes the value from digits array. 
//Write C code for program and functions. 

void recomposes_the_value(int array[],int size);
void split_into_steps(int n);

int main(){
	
	int b;
	printf("Please enter a value:");
	scanf("%d",&b);
    
    split_into_steps(b);
	

	
	

	return 0;
}

void split_into_steps(int n){
	int count=0,i;
	int a =n;
	
	while(n>0){
		
		n=n/10;
		count++;
		
		
	}
	n=a;
	int array[count];
	
		
	for(i=0;i<count;i++){
			
		array[i]=n%10;
		n=n/10;
	
			
			
	}
	
	recomposes_the_value(array,count);
	
	
	
}
void recomposes_the_value(int array[],int size){
	
	
	int k;
	for(k=size-1;k>=0;k--){
		printf("%d",array[k]);
	}
	
	
	
	
	
}
