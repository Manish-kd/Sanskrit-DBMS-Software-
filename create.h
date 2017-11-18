#include<stdio.h>
#include<string.h>


int create (char name[],int n)
{

	FILE *fp;

	fp = fopen(name,"w+");

	typedef struct{
		char natt[20];
		char type[20];
	}attributes;

	attributes p[n];
	printf("ENTER THE ATTRIBUTES AND THEIR TYPES\n");


	int i;
	for (i=0;i<n;i++)
	{
		printf("\nEnter the %d th attribute: ",i+1);
		scanf("%s",p[i].natt);
		fprintf(fp,p[i].natt);
		fprintf(fp,"\t");

		printf("Enter the %d th attribute type: ",i+1);
		scanf("%s",p[i].type);
	}

	fprintf(fp,"\n");

	printf("Your table is created\n");

	fclose(fp);
	return n;

}

