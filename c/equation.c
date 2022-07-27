// simple algerbric equation

#include<math.h>
#include<stdio.h>

int main()

{
    int count=0, flag=0;
    float guess, root, test, error;

    printf("Enter your guess");
    scanf("%d",&guess);

    while(flag=0)
    {
        if (count<50)
        {
            test=(10-pow(guess,5));
            if (test>=0)
            {
                error=abs(guess-test);
                if (error <=0.000001)
                {
                    flag =1;
                    root=test;
                }
                else
                {
                    guess=test;

                }
            
            }
            else
            {
                printf("Your guess is out of range. Try another guess.");
            }
        }
    }
}