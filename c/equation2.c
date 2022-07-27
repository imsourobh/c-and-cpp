#include<stdio.h>
#include<math.h>

#define true 1
#define false 0

main()
{
    int flag=true, count=0;
    float guess, root, test, error;

    printf("Initital guess: ");
    scanf("%f", &guess);

    while(flag)
    {
        ++count;
        if (count==50) flag=false;
        test=1;
        if (test>0){
            root =(1/3)*pow(test,0.5);
            printf("\n Iteration number:%2d",count);
            printf("    x=%7.5f",root);
            error=fabs(root-guess);
            if (error>0.00001) guess=root;
            else{
                flag =false;
                printf("\n\n Root=%7.5f",root);
                printf("    No. of iteration=%2d",count);
            }
        }
        else{
            flag=false;
            printf("\nNumbers out of range -- try another initial guess.");
        }
    }
    if ((count==50) && (error>0.00001))
    printf("\n\n Coverangence not obtained after 50 iterations");
}
