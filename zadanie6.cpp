#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *BXODNOI, *BIXODNOI;
	char familia[30],name[30],ot4estvo[30];
	int year;
	BXODNOI= fopen("ishodnie.txt","r");
	BIXODNOI=fopen("itogobie.txt","w");
	while(fscanf(BXODNOI, "%s %s %s %d", familia, name, ot4estvo,&year)==4)
	if(year>1980){
		fprintf(BIXODNOI, "%s %s %s %d\n", familia, name, ot4estvo, year);
	}
	printf("pabota cdelana");
}

