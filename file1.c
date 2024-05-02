
#include<stdio.h>
#include<string.h>
 struct student {
    char name[15];
    int roll;
    char dep[15];
    int year;
    };
    void shivam(struct student[],int);
int main()
{
    int n;
struct student s[450];
    printf("enter no of students-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter details of student no--> %d\n in order as follows -name,roll,department,year-->",i+1);
        scanf("%s",s[i].name);
           scanf("%d",&s[i].roll);
           getchar();
              scanf("%s",s[i].dep);
                 scanf("%d",&s[i].year);
                 getchar();
        
    }
     printf("details of students is-->");
     printf("\n");
    for(int i=0;i<n;i++){
        printf("name of the %d student is-->%s\n",i+1,s[i].name);
        printf("roll no of the %d student is-->%d\n",i+1,s[i].roll);
        printf("department of the %d student is-->%s\n",i+1,s[i].dep);
        printf(" Joining Year of the %d student is-->%d\n",i+1,s[i].year);
    }
      shivam(s,n);
    }
    void shivam(struct student s[],int n)
    {
        int y;
        printf("enter yeAR you want to get details");
        scanf("%d",&y);
        for(int i=0;i<n;i++){
            if(s[i].year==y){
                printf("name of the %d student is-->%s\n",i+1,s[i].name);
                
                
            }
        }
    }
 
