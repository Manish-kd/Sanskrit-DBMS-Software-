#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int search1(char filename[],char search_string[])


{
        FILE *fp;
        int m=1;
        char line[200];

        fp=fopen(filename,"r+");

        if(!fp)
        {
                perror("could not find the file");
        }


        while ( fgets ( line, 200, fp ) != NULL ) 
        {
                if(strstr(line,search_string))
                	m=0;
            	
        }
		if (m==1)
		printf("Invalid");
        fclose ( fp ); 
		return m;
}    


int connect(char username[],char password[])
{
	char x[20];
	strcpy(x,"username");
	if (search1(x,username)==0){



	if (search1("password",password)==0){
	printf("Login sucessful\n");
	return 0;}
}
	else{
		printf("Login unsucessful\n");
		getch();
		return 8;
	}
}

void new_login(){
	
	FILE *fp;
	FILE *fp1;
	
    fp=fopen("Username","w+");
    fp1=fopen("password","w+");
    
    char user[20],pass[20];
    
    printf("\t\t **NEW USER**\n");
    printf("Enter your username and password: \n");
	scanf("%s %s",user,pass);
	fprintf(fp,user);
	fprintf(fp1,pass);
	fclose(fp);
	fclose(fp);
}

