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
struct StudentInfo *arr;
int N;
//defining an array with students number N
struct StudentInfo* define_array()
{
    printf("Enter the number of students: ");
 scanf("%d",&N);
arr=(struct StudentInfo*)calloc(N,sizeof(struct StudentInfo));
return arr;
};

//inserting a student in the beginning
void insert_at_start(struct StudentInfo *arr) {
    if(arr[0].ID==0){
        printf("Enter ID: ");
  scanf("%d", &arr[0].ID);

   printf("Enter name: ");
   char garbage[100];
   fgets (garbage,100,stdin);
 gets (&arr[0].name);


  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[0].dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &arr[0].score);
    }
    else
    {
        if(arr[N-1].ID==0)
        {int j=0;
        while(arr[j].ID!=0)
            j++;
        for(int i = j;i > 0 ; i--)
            {
            arr[i].ID=arr[i-1].ID;
        strcpy(arr[i].name,arr[i-1].name);
        arr[i].dateofbirth[0]=arr[i-1].dateofbirth[0];
        arr[i].dateofbirth[1]=arr[i-1].dateofbirth[1];
        arr[i].dateofbirth[2]=arr[i-1].dateofbirth[2];
        arr[i].score=arr[i-1].score;

        }


printf("Enter ID: ");
  scanf("%d", &arr[0].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[0].name);


  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[0].dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &arr[0].score);


    }
    else{
            arr=(struct StudentInfo*)realloc(arr,(N+1)*sizeof(struct StudentInfo));
        int j=0;
        while(arr[j].ID!=0)
            j++;
        for(int i = j;i > 0 ; i--)
            {
            arr[i].ID=arr[i-1].ID;
        strcpy(arr[i].name,arr[i-1].name);
        arr[i].dateofbirth[0]=arr[i-1].dateofbirth[0];
        arr[i].dateofbirth[1]=arr[i-1].dateofbirth[1];
        arr[i].dateofbirth[2]=arr[i-1].dateofbirth[2];
        arr[i].score=arr[i-1].score;
    }
printf("Enter ID: ");
  scanf("%d", &arr[0].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[0].name);


  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[0].dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &arr[0].score);
    }


}}
//inserting a student in the End
void insert_at_end(struct StudentInfo *arr)
{int i =0;
if(arr[N-1].ID!=0){arr=(struct StudentInfo*)realloc(arr,(N+1)*sizeof(struct StudentInfo));
printf("Enter ID: ");
  scanf("%d", &arr[N].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[N].name);


  printf("Enter birth date (day month year): ");
  for (int j = 0; j < 3; j++)
    scanf("%d", &arr[N].dateofbirth[j]);

     printf("Enter score: ");
  scanf("%d", &arr[N].score);

}
else{
    while(arr[i].ID!=0){

        i++;
    }
printf("Enter ID: ");
  scanf("%d", &arr[i].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[i].name);


  printf("Enter birth date (day month year): ");
  for (int j = 0; j < 3; j++)
    scanf("%d", &arr[i].dateofbirth[j]);

     printf("Enter score: ");
  scanf("%d", &arr[i].score);
}

};
//inserting new student at middle
void insert_at_middle(struct StudentInfo *arr, int d)
{if(d>=N){printf("The position is not found");}
else{
    if(arr[d].ID==0)
        {printf("Enter ID: ");
  scanf("%d", &arr[d].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[d].name);


  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[d].dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &arr[d].score);}

else{
        for(int j = N-1; j >= d;j--){
        arr[j].ID=arr[j-1].ID;
        strcpy(arr[j].name,arr[j-1].name);
        arr[j].dateofbirth[0]=arr[j-1].dateofbirth[0];
        arr[j].dateofbirth[1]=arr[j-1].dateofbirth[1];
        arr[j].dateofbirth[2]=arr[j-1].dateofbirth[2];
        arr[j].score=arr[j-1].score;
        }
        printf("Enter ID: ");
  scanf("%d", &arr[d].ID);

   printf("Enter name: ");
 fgets (garbage,100,stdin);
 gets (&arr[d].name);


  printf("Enter birth date (day month year): ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[d].dateofbirth[i]);

     printf("Enter score: ");
  scanf("%d", &arr[d].score);
        }

}};
//printing the array
void print_array(struct StudentInfo *arr){
if(arr[0].ID==0){printf("The array is empty\n");}
else{int i=0;
 printf("--------------------------------------------------------------\n");
  printf("|     ID |           Name           |  Birth Date  |   Score |\n");
  printf("--------------------------------------------------------------\n");
        while(arr[i].ID!=0){
            char birthDate[13];
  sprintf(birthDate, "%d/%d/%d", arr[i].dateofbirth[0],
          arr[i].dateofbirth[1], arr[i].dateofbirth[2]);

       printf("| %6d | %-24s | %-12s | %6d%  |\n",
        arr[i].ID, arr[i].name,
         birthDate, arr[i].score);
         i++; }
      printf("--------------------------------------------------------------\n\n");  }
};

int main()
{ printf("############### Welcome ###############\n\n");

arr=define_array();
insert_at_start(arr);
insert_at_start(arr);
int start1 = clock();
insert_at_end(arr);
int finish1 = clock();
int start2 = clock();
insert_at_middle(arr,1);
int finish2 = clock();
int start = clock();
insert_at_start(arr);
int finish = clock();

printf("time elapsed when inserting at start  = %f\n",(double)(finish-start)/CLOCKS_PER_SEC);
printf("time elapsed when inserting at end = %f\n",(double)(finish1-start1)/CLOCKS_PER_SEC);
    printf("time elapsed when inserting at middle = %f\n",(double)(finish2-start2)/CLOCKS_PER_SEC);

print_array(arr);
    return 0;
}
