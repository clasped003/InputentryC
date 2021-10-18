#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
/*Character attribute selection menu. Player can pick character attributes they want tied to
their character. This will be transferred over to the character struct later on.*/

int main(){
		char uName[20];
		char uGender[3];
		char uClass[10];
		int looper = 0;

while(looper == 0){
    system("clear");						

//Name selection
int nameChoiceLoop = 1;
while(nameChoiceLoop == 1){ 								
printf("What is your name? (Max 20 Characters) "); 
if (fgets(uName, 20, stdin) != NULL) { 
		if (!strchr(uName, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("Your name is too long, try again. . .  \n" ); 
				//nameChoiceLoop = 1;						
				} else{ 
										printf("Your name is: %s", uName); // name includes ENTER 
										nameChoiceLoop = 0;
				} //if else
		}//if
}//Name while		
//Gender Selection
int genChoiceLoop = 1;
while(genChoiceLoop == 1){				
printf("What is your Gender? ('M'ale, 'F'emale, or 'O'ther) "); 
if (fgets(uGender, 3, stdin) != NULL) { 
		if (!strchr(uGender, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("Only enter one letter for your gender. Try again. . . \n"); 
				} else { 
										printf("You selected: %s", uGender); // name includes ENTER 
										genChoiceLoop = 0;
				} //if else
		}//if	
}//Gender while
//Class Selection
int classChoiceLoop = 1;
while(classChoiceLoop == 1){								
printf("What is your Class? ('B'rute, 'S'tranger, 'T'hief) "); 
if (fgets(uClass, 10, stdin) != NULL) { 
		if (!strchr(uClass, '\n')) { // consume rest of chars up to '\n' 
				int ch; while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */; 
				if (ch == EOF) /* input error */; 
				printf("You are now a: %s \n", uClass); 
				} else { 
										printf("You are now a: %s \n", uClass); // name includes ENTER
										classChoiceLoop = 0; 
				} //if else
		}//if					
}	//Class while
				puts("Do you wish to proceed or would you like to redo your Character?\n");
			  char uContinue = getchar();
				getchar();
				if(tolower(uContinue) == 'y'){
						puts("You have decided to begin your journey.\n");
						sleep(1);
						looper = 1;
				}else if(tolower(uContinue == 'n')){
						puts("Resetting your character. . . \n");
						sleep(1);
						looper = 0;
				}//else if 												
}	//Main while		
		return 0;
}		

