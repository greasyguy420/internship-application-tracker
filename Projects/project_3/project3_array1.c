#include <stdio.h>

int main(){
	int length, i;
	int output = 1;
	printf("Enter the length of the input array: ");
	scanf("%d", &length);
	int a[length];
	printf("Enter the array elements: ");
	for(i=0;i<length;i++){
		int value;
		scanf("%d", &value);
		a[i] = value;

}
	
	for(i=0;i<length;i++){
		if(!(a[i] < a[i+1]))
			output = 0;
}	
	for(i=1;i<length;i++){
		if((a[i]%a[i-1]) == 0)
			output = 0;
}
	if(output == 0)
		printf("Output: no\n");
	else
		printf("Output: yes\n");
	return 0;
}
