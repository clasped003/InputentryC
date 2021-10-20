#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
/*Character attribute selection menu. Player can pick character attributes they want tied to
their character. This will be transferred over to the character struct later on.*/

int main(){
		char uName[20];
		char uGenderLetter;
		char uGender[10];
		char uClassLetter;
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
				} else{ 
										printf("Your name is: %s", uName); // name includes ENTER 
										nameChoiceLoop = 0;
				} //if else
		}//if
}//Name while		
//Gender Selection
int genChoiceLoop = 1;
while(genChoiceLoop == 1){				
puts("What is your gender?('M'ale, 'F'emale, or 'O'ther)");
		uGenderLetter	= getchar();
		int uGenderch; while (((uGenderch = getchar()) != EOF) && (uGenderch != '\n')) /* void */;
		if(tolower(uGenderLetter) == 'm'){
						puts("You are a Male.");
						strcpy(uGender, "Male");		
						genChoiceLoop = 0;								
				}else if(tolower(uGenderLetter) == 'f'){
						puts("You are a Female");
						strcpy(uGender, "Female");		
						genChoiceLoop = 0;		
				}	else if(tolower(uGenderLetter) == 'o'){
						puts("You are an Other");
						strcpy(uGender, "Other");		
						genChoiceLoop = 0;		
				}	else{
						puts("Wrong selection");
				}	
}//Gender while
//Class Selection			
int classChoiceLoop = 1;
while(classChoiceLoop == 1){	
		puts("What is your Class? ('B'rute, 'S'tranger, 'T'hief?)");
		uClassLetter = getchar();
		int uClassch; while (((uClassch = getchar()) != EOF) && (uClassch != '\n')) /* void */;
		if(tolower(uClassLetter) == 'b'){
		    puts("Your class is: Brute");
				strcpy(uClass, "Brute");    				
				classChoiceLoop = 0;				
		}else if(tolower(uClassLetter) == 's'){
						puts("Your class is: Stranger");
						strcpy(uClass, "Stranger");		
						classChoiceLoop = 0;							
				}else if(tolower(uClassLetter) == 't'){
						puts("Your class is: Thief");
						strcpy(uClass, "Thief");		
						classChoiceLoop = 0;								
				}else{
						puts("Wrong selection -- Try again. . .");
				}//else if
}	//Class while
				int confirmLooper = 1;
				while(confirmLooper == 1){
						system("clear");
					 printf("Your chosen Name is: '%s' \n", uName);
					 printf("Your Gender is: '%s' \n", uGender);						
					 printf("Your chosen class is: '%s' \n", uClass);    
				   puts("Do you wish to proceed or would you like to redo your Character?");
				   puts("Press 'y' to continue to game, 'n' to redo your character\n");
			  char uContinue = getchar();
				int chSecond; while (((chSecond = getchar()) != EOF) && (chSecond != '\n')) /* void */;		
				if(tolower(uContinue) == 'y'){
						puts("You have decided to begin your journey.\n");
						sleep(1);
						confirmLooper = 0;		
						looper = 1;
				}else if(tolower(uContinue == 'n')){	
						puts("Resetting your character. . . \n");
						sleep(1);
						confirmLooper = 0;					
						looper = 0;								
				}else{				
						puts("Invlid Entry - - Try again.");
						system("clear");		
						sleep(1);		
				}//else if
			}//confirmLooper		while	 												
}	//Main while		
		return 0;
}		

