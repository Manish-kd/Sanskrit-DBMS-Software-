#include<stdio.h>
#include<string.h>


void search(char filename[])


{

        FILE *fp;
        char line[200],search_string[15];
        printf("\n Enter the search: ");
        scanf("%s",search_string);
		int i=1;
        fp=fopen(filename,"r");

        if(!fp)
        {
                perror("could not find the file");
        }

        while ( fgets ( line, 200, fp ) != NULL ) 
        {
                if(strstr(line,search_string)){
                fputs ( line, stdout ); 
                i=0;}
        }
        if (i==1){
        	printf("Data not found in the table\n");
		}
        fclose ( fp );   
}    

