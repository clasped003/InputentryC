#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
		char name[10];
		char petName[10];
		char momsName[10];
		int looper = 0;
while(looper == 0){
  system("clear");						
do{		
printf("Who are you? "); 
if (fgets(name, 10, stdin) != NULL) { 
		if (!strchr(name, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("Glad to meet you, %s.\n", name); 
				} else { printf("Glad to meet you, %s.", name); // name includes ENTER 
				} 
		}
	}while(looper == 1);
	do{		
printf("What is your pets name? "); 
if (fgets(petName, 10, stdin) != NULL) { 
		if (!strchr(petName, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("Glad to meet you, %s.\n", petName); 
				} else { printf("Glad to meet you, %s.", petName); // name includes ENTER 
				} 
		}
	}while(looper == 1);	
	do{		
printf("What is your Mom's name? "); 
if (fgets(momsName, 10, stdin) != NULL) { 
		if (!strchr(momsName, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("Glad to meet you, %s.\n", momsName); 
				} else { printf("Glad to meet you, %s.", momsName); // name includes ENTER 
				} 
		}
	}while(looper == 1);								
}				
		return 0;
}		