#include<stdio.h>
#include<string.h>



void insert(int n,char table[])
{
	
	int j = n;
	int i;



	char msg[100];

	FILE *fp;
	fp = fopen(table,"a+");
                printf("Enter the attributes in the sequence: \n");


	for (i=0;i<j;i++)
	{
		printf("-> ");
		scanf("%s",msg);
		fprintf(fp,msg);
		fprintf(fp,"\t");
	}
	fprintf(fp,"\n");
	fclose(fp);
	printf("Data Inserted\n");
}
