#include<stdio.h>
void bubble(int t[],int size){
	int i,j,temp,max=t[0],newsize,pos;
	for(j=0;j<size;j++){
	
	for(i=0;i<newsize;i++){
		if(t[i]>=max){
		max=t[i];
		pos=i;
		
	}
	for(i=pos;i<newsize;i++){
		temp=t[i];
		t[i]=t[i+1];
		t[i+1]=temp;
	}
	
	newsize=newsize-1;
	}
}
}
int main(){
	int t[50],size,i;
	puts("what is the size of the array?");
	scanf(" %d", &size);
	puts("great!!,now fill that array");
	for(i=0;i<size;i++){
		scanf(" %d", &t[i]);
	}
	bubble(t,size);
	
}