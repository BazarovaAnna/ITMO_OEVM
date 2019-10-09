#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	
	char str[40]="This programmator";
	int b=0;
	int i=0;
	//
	
	for(i;i<strlen(str);i++){
		if(b==1){
			if(str[i] >= 'a' && str[i] <= 'z') {
				str[i] = str[i] -32;
			}
		}
		if(str[i]=='r'||str[i]=='R'){
			b=1;
		}else{
			b=0;
		}
	}
	for(i=0; i<strlen(str);i++){
		printf("%c",str[i]);
	}
	printf("\n");
	
	return 0;
}
