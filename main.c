#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i , in = 1 , num , space ,m = 0;



    printf("enter any number: ");
    scanf("%d",&num);


    while(in<=num){

        space = (num / 2)+ m ;
        while(space > 0){
            printf(" ");
            space--;

        }
        m--;

        printf("%d",in);
        i = 1;

        while(i<in){
            printf("%d",in);
            i++;
        }
        while(i<in){
            printf("%d",in);
            i++;
        }

        printf("\n");
        in = in+2;



    }




    return 0;

}
