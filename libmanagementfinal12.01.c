#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct library{
char book[100];
char name[100];
int flag;
int accession;
};

int main() {
struct library l[100];
char author[100];
char bk_nm[100];
int i,k=0;
int count=0;

printf("*********************************************************************************************************************\n");
printf("\t\t\t\t\tWelcome to Library Management \n\n");
printf("*********************************************************************************************************************\n*");

while(k!=6){
printf("\n Choose an option");

printf("\n1. Add book information.\n2. Display book information\n3.List all books of given author\n");
printf("4. List the title of specified book.\n");
printf("5. List the count of books in the library.\n");
printf("6. Exit.\n");

printf("\nEnter one of the above.\n");
scanf("%d",&k);

switch(k){
case 1:
    printf("Enter book name= ");
    scanf("%s",l[i].book);

    printf("Enter author name= ");
    scanf("%s",l[i].name);

    printf("Enter accession number: ");
    scanf("%d",&l[i].accession);

    printf("Enter 1 if book is already issued and 0 if book is not issued.\n ");
    scanf("%d", &l[i].flag);

    i++;
    count++;

    break;

case 2:

        printf("You have entered the following information.\n");
    for(i=0;i<count;i++){
        printf("*****************************************************************************************************************\n");
        printf("book name:%s \t author name: %s \t accession number:%d \t Issued/not issued: %d\n\n",l[i].book,l[i].name,l[i].accession,l[i].flag);
    }

break;

case 3:
    printf("Enter author name: ");
    scanf("%s",author);
    for(i=0;i<count; i++){
    if(strcmp(author,l[i].name)== 0){
    printf("%s by %s\t accession number:%d\tIssued(1)/Not Issued(0):%d\n\n",l[i].book,l[i].name,l[i].accession,l[i].flag);
    }
    }
    break;

case 4:
    printf("Enter book name: ");
    scanf("%s",bk_nm);
    for(i=0;i<count;i++){
    if(strcmp(bk_nm,l[i].book)==0){
    printf("%s by %s \taccession number: %d\tIssued(1)/not issued(0):%d\n\n", l[i].book,l[i].name,l[i].accession,l[i].flag);
    }
    }
    break;

case 5:
    printf("\n Number of books in the library: %d\n",count);
    break;

case 6:
exit (0);
}
}
return 0;
}
