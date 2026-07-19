#include <stdio.h>
char arry1[20], arry2[20], arry3[20], arry4[20], arry5[20], arry6[20];
int total=0;
void delete()
{
        if (total==0)
    {
        printf("No deta is available");
    }
    else {
    int a;
    printf("Enter 1 to delete all \n");
    printf("Enter 2 to delete spesific deta \n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("All deta has been deleted \n");
        total==0;
    }
    else{
        for (int i=0; i<total; i++)
        {
            for (int j=i; j<total; j++)
            {
                arry1[j]=arry1[i+1];
                arry2[j]=arry2[i+1];
                arry3[j]=arry3[i+1];
                arry4[j]=arry4[i+1];
                arry5[j]=arry5[i+1];
            }
            total--;
            printf("your deta has been deletd \n");
        }


        }
    }

}
void update ()
{
        if (total==0)
    {
        printf("No deta is available");
    }
    else {
     char rollno;
    for (int i=0; i<total; i++)
    {
        printf("Enter roll no \n");
        scanf("%s",rollno);
        if (arry2[i]==rollno)
        {
            printf("\n The previous deta of roll : %d \n",rollno);
            printf("name : %s \n",arry1);
            printf("student : %s \n",i+1);
            printf("class : %s \n",arry3);
            printf("course : %s \n",arry4);
            printf("contact : %s \n",arry5);
}
           printf("\n Enter new deta \n");
        printf("\n enter the deta of student \n");
        printf("\n Enter name :");
        scanf("%s",&arry1[i]);
        printf("\n Enter rollno :");
        scanf("%s",&arry2[i]);
        printf("\n Enter class :");
        scanf("%s",&arry3[i]);
        printf("\n Enter course :");
        scanf("%s",&arry4[i]);
        printf("\n Enter contact :");
        scanf("%s",&arry5[i]);

        }

    }
    }

void  search ()
{
        if (total==0)
    {
        printf("No deta is available");
    }
    else {
    char rollno;
    for (int i=0; i<total; i++)
    {
        printf("Enter roll no \n");
        scanf("%s",rollno);
        if (arry2[i]==rollno)
        {
            printf("\n The deta of roll : %d \n",rollno);
            printf("name : %s \n",arry1);
            printf("student : %s \n",i+1);
            printf("class : %s \n",arry3);
            printf("course : %s \n",arry4);
            printf("contact : %s \n",arry5);
}

        }
    }
    }


void show ()
{
    if (total==0)
    {
        printf("No deta is available");
    }
    else{
    for (int i=0; i<total; i++)
    printf("\n The deta of student : %d \n",i+1);
    printf("name : %s \n",arry1);
    printf("rollno : %s \n",arry2);
    printf("class : %s \n",arry3);
    printf("course : %s \n",arry4);
    printf("contact : %s \n",arry5);
}
}
void entry ()
{
    int choise;
    printf(" \n How many students you wann's to add \n");
    scanf("%d",&choise);

    if (total==0)
    {

        for (int i=0; i<choise; i++)
    {
        printf("\n enter the deta of students %d",i+1);
        printf("\n Enter name :");
        scanf("%s",&arry1[i]);
        printf("\n Enter rollno :");
        scanf("%s",&arry2[i]);
        printf("\n Enter class :");
        scanf("%s",&arry3[i]);
        printf("\n Enter course :");
        scanf("%s",&arry4[i]);
        printf("\n Enter contact :");
        scanf("%s",&arry5[i]);
    }
     total=choise+total;
    }
    else {
        for (int i=total; i<total+choise; i++)
    {
        printf("\n enter the deta of students %d",i+1);
        printf("Enter name :");
        scanf("%s",&arry1[i]);
        printf("Enter rollno :");
        scanf("%s",&arry2[i]);
        printf("Enter class :");
        scanf("%s",&arry3[i]);
        printf("Enter course :");
        scanf("%s",&arry4[i]);
        printf("Enter contact :");
        scanf("%s",&arry5[i]);
    }
    }
}
int main ()
{
    int value;
while (1)
{
    printf("Enter 1 to add data\n");
    printf("Enter 2 to show data\n");
    printf("Enter 3 to search data\n");
    printf("Enter 4 to update data\n");
    printf("Enter 5 to delete data\n");
    printf("Enter 6 to exit\n");

    if (scanf("%d", &value) != 1)
    {
        printf("Invalid input!\n");

        while (getchar() != '\n');
        continue;
    }
    if (value==6)
    {
        break;
    }

    switch (value)
    {
        case 1:
            entry();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            delete();
            break;



        default:
            printf("Invalid choice!\n");
    }
}

}
