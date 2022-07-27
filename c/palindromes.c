#include<stdio.h>
#include<string.h>


int main()
{
// declaration of all variable
    char name[10]="hh";
    int i=0,j=strlen(name)-1, flag=0;

// running a for  loop to check if ith and jth letter is same
    for (i;i<j;i++)
    {
        if (name[i]!=name[j-i]){
            flag=1;
        }

    }
    

    if (flag==1)
    printf("Not palindrome.");

    else 
    printf("Palindrome");
}