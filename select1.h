#include<stdio.h>

int select1()
{

	char work[20];

	char fiopen[20],ch;

	printf("-> ");
	scanf("%s %s",fiopen,work);
	
	if (strcmp(work,"all")==0){	

		FILE *fp;

		if ((fp = fopen(fiopen,"r"))!=NULL)
		{
			while((ch = fgetc(fp)) != EOF)
			{
				putchar(ch);
			}
			printf("\n");
		}
		else
		{
			printf("Could not open file %s\n",fiopen);
			return 1;
		}
	}

	else{
		printf("NO SUCH OPEARTION IS PRESENT\n");
	}
	return 0;
}
