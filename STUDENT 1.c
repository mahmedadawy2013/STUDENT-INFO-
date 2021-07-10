#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//عمر حسام الدين فتحي علي sec:3 B.N.:14
//عمر مصطفي احمد الشيمي sec:3 B.N.:11
//محمد احمد العدوي sec:3 B.N.:28
struct StudentInfo
{
  char name[25];
  int ID;
  int dateofbirth[3];
  int score;
} ;
char garbage[100];
struct node{
struct StudentInfo studentInfo ;
struct node *next;};

struct node* head=NULL;
struct node* current=NULL;
//Insertion in the the End
void insert_at_end(){
struct node* newnode=(struct node*)malloc(sizeof(struct node));

printf("Enter ID: ");
  scanf("%d", &newnode->studentInfo.ID);

   printf("Enter name: ");
fgets (garbage,100,stdin);
 gets (&newnode->studentInfo.name);

  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &newnode->studentInfo.dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &newnode->studentInfo.score);


   newnode->next = NULL;
   if(head==NULL)
   {
      head =newnode ;


      return;
   }
   current=head;
    while(current->next != NULL)
   {
	   current = current->next;
   }
current->next= newnode;

};

int count_nodes(struct node *head )
{struct node *temp = head;
int n=0;
while(temp!=NULL)
    {temp=temp->next;
n++;
}return n;
};
//Insertion in the beginning
void insert_at_start(){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter ID: ");
  scanf("%d", &newnode->studentInfo.ID);

   printf("Enter name: ");
  fgets (garbage,100,stdin);
 gets (&newnode->studentInfo.name);

  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &newnode->studentInfo.dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &newnode->studentInfo.score);

newnode->next=head;
head=newnode;
};

//Insertion in the middle
void insert_anode(){
    int n;
     printf("Enter the position: ");
  scanf("%d", &n);
  if(n>count_nodes(head))
    {printf("The position is not found\n "); return;}
  else{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter ID: ");
  scanf("%d", &newnode->studentInfo.ID);

   printf("Enter name: ");
  fgets (garbage,100,stdin);
 gets (&newnode->studentInfo.name);

  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &newnode->studentInfo.dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &newnode->studentInfo.score);

newnode->next=NULL;
struct node* ptr=head;
n--;
while(n>=1){
    ptr=ptr->next;
  n--;
}
newnode->next=ptr->next;
ptr->next=newnode;
}
}

//printing the list
void print_list(struct node *head)
{ if(head==NULL)
{printf("The List is Empty\n");
return;}
else{
    printf("--------------------------------------------------------------\n");
  printf("|     ID |           Name           |  Birth Date  |   Score |\n");
  printf("--------------------------------------------------------------\n");
  current=head;
  while(current!=NULL){
     // Format birth date
  char birthDate[13];
  sprintf(birthDate, "%d/%d/%d", current->studentInfo.dateofbirth[0],
          current->studentInfo.dateofbirth[1], current->studentInfo.dateofbirth[2]);

  // Print student in tabular form
printf("| %6d | %-24s | %-12s | %6d% |\n",
         current->studentInfo.ID, current->studentInfo.name,
         birthDate, current->studentInfo.score);
         current=current->next;
}
printf("--------------------------------------------------------------\n\n");
  }
};





int main()
{
     printf("############### Welcome ###############\n\n");
insert_at_end();

int start = clock();
insert_at_start();
int finish = clock();

    int start1 = clock();
insert_at_end();
int finish1 = clock();

    int start2 = clock();
insert_anode();
int finish2 = clock();

printf("time elapsed when inserting at start  = %f\n",(double)(finish-start)/CLOCKS_PER_SEC);
printf("time elapsed when inserting at end = %f\n",(double)(finish1-start1)/CLOCKS_PER_SEC);
    printf("time elapsed when inserting at middle = %f\n",(double)(finish2-start2)/CLOCKS_PER_SEC);

print_list(head);
    return 0;
}
