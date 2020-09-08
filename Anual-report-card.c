/*
C programme to print annual report
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

char name[40],section;
int std;
int math,hindi,english,science,social_science;

printf("\t\tWelcome");
usleep(10000000);

printf("\n-------------------------------------------------\n");
printf("\tJawahar Navodaya Vidyalaya \n\tAnnual Report Card");

printf("\nEnter name:");
scanf("%[^\n]%*c",name);
printf("%s", name);

printf("\nStandard:");
scanf("%d",&std);
printf("%d",std);

while ((getchar()) != '\n');

printf("\nSection:");
scanf("%[^\n]%*c",&section);
printf("%c",section);

printf("\n\nMarks secured out of 100");

printf("\nMathematics:");
scanf("%d",&math);
printf("%d",math);

printf("\nHindi:");
scanf("%d",&hindi);
printf("%d",hindi);

printf("\nEnglish:");
scanf("%d",&english);
printf("%d",english);

printf("\nScience:");
scanf("%d",&science);
printf("%d",science);

printf("\nSocial science:");
scanf("%d",&social_science);
printf("%d",social_science);

int Total_Marks = math + english + hindi + science + social_science;

printf("\n\nTotal marks secured:%d\n",Total_Marks);

if(Total_Marks > 500){
printf("Something went wrong\n");
}else if(Total_Marks >= 450 && Total_Marks <= 500) {
//Total marks secured between 450-500
printf("Grade A\n");
 }
else if(Total_Marks >= 400 && Total_Marks <= 449) {
//Total marks secured between 400-449
printf("Grade B\n");
}
else if(Total_Marks >= 350 && Total_Marks <= 399) {
//Total marks secured between 350-399
printf("Grade C\n");
}
else if(Total_Marks >= 300 && Total_Marks <= 349) {
//Total marks secured between 300-349
printf("Grade D\n");
}
else if(Total_Marks >= 200 && Total_Marks <= 299) {
//Total marks secured between 200-299
printf("Grade E\n");
}
else if(Total_Marks >= 0 && Total_Marks <= 200) {
//Total marks secured below 200 but greater than equal to 0
 printf("Grade F\n");
}else{
printf("Something went wrong\n");
 }
 
printf("\n----------------------------------------------------\n");
usleep(10000000);
printf("\t\tThank you");

return 0;
}
  
