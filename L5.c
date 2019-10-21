#include <stdlib.h>
#include <stdio.h>

//z=/x1(x2 v /x3) v x1x4

int main()
{
	int x1,x2,x3,x4;
	int f;
	x1=0;
	x2=0;
	x3=0;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x3=1;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x2=1;
	x3=0;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x3=1;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x3=1;
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	x1=1;
	x2=0;
	x3=0;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=0;
	x3=0;
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=0;
	x3=1;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=0;
	x3=1;
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=1;
	x3=0;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=1;
	x3=0;
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=1;
	x3=1;
	x4=0;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
	x1=1;
	x2=1;
	x3=1;
	x4=1;
	f=!(x1)&&(x2||!x3)||x1&&x4;
	printf("x1: %d, x2: %d, x3: %d, x4: %d    z: %d;\n",x1,x2,x3,x4,f);
}
