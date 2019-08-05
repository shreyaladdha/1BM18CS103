#include<stdio.h>
#include<conio.h>
struct stud
{
	char name[20];
	char usn[20];
	int marks[20];
	char subject[20];
	int credits[20];
	int grade[20];
}s1;
void main()
{
	int i,n,totcredit=0,total=0;
	int tot[20];
	float sgpa;
	clrscr();
	printf("enter ypur name:");
	scanf("%s",s1.name);
	printf("enter your usn:");
	scanf("%s",s1.usn);
	printf("number of subjects:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter subject,marks and credits:");
		scanf("%s %d %d",s1.subject,&s1.marks[i],&s1.credits[i]);
		if((s1.marks[i]>=90)&&(s1.marks[i]<=100))
		s1.grade[i]=10;
		if((s1.marks[i]>=80)&&(s1.marks[i]<90))
		s1.grade[i]=9;
		if((s1.marks[i]>=70)&&(s1.marks[i]<80))
		s1.grade[i]=8;
		if((s1.marks[i]>=60)&&(s1.marks[i]<70))
		s1.grade[i]=7;
		if((s1.marks[i]>=50)&&(s1.marks[i]<60))
		s1.grade[i]=6;
		if((s1.marks[i]>=40)&&(s1.marks[i]<50))
		s1.grade[i]=0;
		totcredit=totcredit+s1.credits[i];
	switch(s1.grade[i])
	{
		case 10:
		tot[i]=10*s1.credits[i];
		break;
		case 9:
		tot[i]=9*s1.credits[i];
		break;
		case 8:
		tot[i]=8*s1.credits[i];
		break;
		case 7:
		tot[i]=7*s1.credits[i];
		break;
		case 6:
		tot[i]=6*s1.credits[i];
		break;
		case 0:
		tot[i]=0;
		break;
	}
}
for(i=0;i<n;i++)
{
	total=total+tot[i];
}
sgpa=total/totcredit;
printf("sgpa is %f",sgpa);
getch();
}












