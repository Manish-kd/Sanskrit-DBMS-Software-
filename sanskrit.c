#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "datav.h"

int main()
{
	int n;
	int j=0;
	char temp[10],temp1[20],username[20],password[20];
	int temp2;
	printf("\t\tWELCOME TO SANSKRIT\n\n");
	
	FILE *check;
	check=fopen("username","r+");
	if (!check){
		fclose(check);
		new_login();
	}
	else
	fclose(check);

	printf("Enter the ID and Password: \n");
	scanf("%s %s",username,password);
	j=connect(username,password);

	while (j==0){
	printf("SNK>> ");
	scanf("%s %s %d",temp,temp1,&temp2);

		if (strcmp(temp,"create")==0){
			n = create(temp1,temp2);
		}

		else if(strcmp(temp,"insert")==0){
			insert(temp2,temp1);
		}
		else if(strcmp(temp,"select")==0){
			select1();
		}

		else if((strcmp(temp,"quit")==0 || strcmp(temp,"exit")==0)){
			return 0;
		}

		else if(strcmp(temp,"search")==0){
			search(temp1);
		}

		else{
			printf("Error\n");
		}
	}
	return 0;
}




