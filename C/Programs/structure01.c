#include<stdio.h>
#include<string.h>
//Author: Sharwan jung kunwar
//Purpose: To create a structure "employee having a name, department address, salary and age as number function. display the name of the employee having age between30 and 50 are living in kathmandu."

struct Employee{
    char name[50];
    char DAddress[50];
    int salary;
    int age;
}emp[5];


int main(){

    //taking input from the user to have our structure.
    printf("Input the details of 5 employees:\n");

    for(int i=0; i<5; i++){
        printf("Enter student %d info\n",i+1);
        
        printf("Enter name: ");
        scanf(" %[^\n]",emp[i].name);
        printf("Ente department address: ");
        scanf(" %[^\n]",emp[i].DAddress);
        printf("Enter salary: ");
        scanf("%d",&emp[i].salary);
        printf("Enter age: ");
        scanf("%d",&emp[i].age);
    }

    //now we have data in our structure we can display it and check the condition age and department address

    printf("\n\n Details of employee who have age between 30 and 50 and living in kathmandu:\n\n");

    for(int i=0; i<5; i++){
        if(emp[i].age>=30 && emp[i].age<=50 && strcmp(emp[i].DAddress, "kathmandu") == 0){
            printf("Name: %s\n",emp[i].name);
            printf("Department Address: %s\n",emp[i].DAddress);
            printf("Salary: %d\n",emp[i].salary);
            printf("Age: %d\n",emp[i].age);
            printf("\n");
        }
    }

    printf("\n\n all Employee data is below\n\n");
    for(int i=0; i<5; i++){
        printf("Name: %s\n",emp[i].name);
        printf("Department Address: %s\n",emp[i].DAddress);
        printf("Salary: %d\n",emp[i].salary);
        printf("Age: %d\n",emp[i].age);
    }

    

    return 0;

}