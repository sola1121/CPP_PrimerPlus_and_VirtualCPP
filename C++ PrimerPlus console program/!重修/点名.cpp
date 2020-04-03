//����

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define STU_NUM_MAX 64 // ���������64��ѧ��
struct Student  
{
    char name[10];
    int  stuID;
}stu[STU_NUM_MAX];
int exist[STU_NUM_MAX]; // ���Ա��汻�����
static int index=0; // ��ס�����Ĵ��� 
void Iitialize(){
    for(int i=0;i<STU_NUM_MAX;i++) exist[i]=0;
}
bool IsExist(int id){
    for(int i=0;i<STU_NUM_MAX;i++)
        if(exist[i]==id) return true; //�Ѵ���
    return false; // ������
}
void Add() // �������
{
    FILE *fp;
    int stu_num;
    printf("\t\t You want to input the number of student?:");
    scanf("%d",&stu_num);
    for (int i=0;i<stu_num;i++){
        printf("\n");
        printf("\t\tPlease input student ID:");
        scanf("%d",&stu[i].stuID);
        printf("\t\tPlease input student name:");
        scanf("%s",stu[i].name);
        fflush(stdin);
    }
    if((fp=fopen("stu.dat","ab"))==NULL)   {
        printf("Can't open file\n");
        exit(1);
    }
    for(int j=0;j<stu_num;j++)
    {   
        if(fwrite(&stu[j],sizeof(struct Student),1,fp)!=1) 
            printf("Error writing file.\n");
    }
   fclose(fp); 
}
void rollcall() // �������
{
    FILE *fp;
    if((fp=fopen("stu.dat","rb"))==NULL)
    {
        printf("Can't open file.\n");
        exit(1);
    }
    srand((unsigned)time(NULL));
    int i=0;
    int randID=rand()%(64-1+1)+1; // 1~64
    printf("\t\t����㵽��ѧ��Ϊ:%d\n\t\t%s\t%s\n",randID,"StuID","StuName"); 
    do
    {
        fseek(fp,i*sizeof(struct Student),SEEK_SET); 
        if(fread(&stu[i],sizeof(struct Student),1,fp)) 
        {
            if(stu[i].stuID==randID&&!IsExist(randID)){
               printf("\t\t%4d\t%5s\n",stu[i].stuID,stu[i].name);
               exist[index++]=randID;
               break;}
        }
      i++;
    }while(!feof(fp));
     
    fclose(fp);
}
int main()
{
    int select=0;
    char answer='y';
    Iitialize();
    do 
    {
        printf("1.������� 2.������� 3.�˳�\n��ѡ��:");
        fflush(stdin);
        scanf("%d",&select);
        switch(select)
        {
        case 1:
            Add();
            break;
        case 2:
            rollcall();
            break;
        case 3:
             return 0;
        }
        fflush(stdin);
        printf("You want to continue?:");
        scanf("%c",&answer);
         
    } while (answer=='y'||answer=='Y');
     
    return 0;
} 
