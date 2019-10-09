#include <math.h>
#include <string.h>
#include <stdlib.h>
main()

{
	
	double binTD;
	double decTB=12.75;
	
	double aftcom;
	double befcom;
	double * befcomptr;
	int s[40];
	int i=0;
	double pw=1;
	int j;
		
	aftcom = modf(decTB, befcomptr);
	befcom = *befcomptr;
	
	//before comma to bin:
	while(befcom>1){
		if(befcom/2==(int)(befcom/2)){
			s[i]=0;
		}else{
			s[i]=1;
		}
		i=i+1;
		befcom=(int)(befcom/2);
	}
	befcom=0;

	//collect to number
	for(j=i;j>0;j--){
		befcom=befcom+s[j]*pw;
		pw=pw*10;
	}
	
	i=0;
	
	//after comma to bin
	while(aftcom!=(int)(aftcom)){
		aftcom=aftcom*2;
		s[i]=(int)(aftcom);
		i=i+1;
		aftcom=aftcom-(int)(aftcom);
	}
	pw=0.1;
	aftcom=0;
	//collect to number
	for(j=0;j<i;i++){
		aftcom=aftcom+s[j]*pw;
		pw=pw/10;
	}
	binTD=befcom+aftcom;
	
	return 0;
	
}