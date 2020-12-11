
#include <stdio.h>
#include <stdlib.h>

int M_harf(int x)
{
    int i,j,yboyut;

    yboyut=x-x/2-1;

    if(x%2!=0)
    {
        yboyut=x+1-x/2-1;
    }

    if(x<9)
    {
        yboyut=x-2;
    }

    for (i = 0; i < yboyut+2; i++)
    {
        for (j = 0; j < yboyut; j++)
        {
            if (j==0 || i==j && j<yboyut/2 && i<yboyut/2 || i==yboyut-j-1 && i<yboyut/2 && j<yboyut &&  j>yboyut/2+-1 || j==yboyut-1 || i==j && i==yboyut/2-1 && j==yboyut/2-1)
            {
                printf(" * *");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}

int U_harf(int x)
{

    int i,yboyut,a,j;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }


    a=yboyut;

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");



        for(j=0; j<yboyut-2; j++)
        {


            printf("  ");


        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut+2; i++)
    {
        printf(" *");
    }
    printf("\n");
    for(i=0; i<yboyut+2; i++)
    {
        printf(" *");
    }
    printf("\n\n");

    return 0;
}


int S_harf(int x)
{


    int i,yboyut,a,j;

    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }
    printf("\n");
    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }
    printf("\n");
    for(i=0; i<yboyut/4+1; i++)
    {
        printf(" * *");
        printf("\n");
    }
    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }
    printf("\n");

    a=yboyut/2-1;

    for(i=0; i<yboyut/4+1; i++)
    {

        for(j=0; j<yboyut-2; j++)
        {
            printf("  ");
        }
        printf(" * *");
        printf("\n");
    }


    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }

    printf("\n");

    for(i=0; i<yboyut/2; i++)
    {
        printf(" * *");

    }

    printf("\n\n");

    return 0;
}

int T_harf(int x)
{


    int yboyut,c=0;
    yboyut=x;
    if(x%2!=0)
    {
        yboyut=x+1;
    }

    int i;

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    int b=yboyut/2-1;

    printf("\n");
de :
    for(i=0; i<b; i++)
    {

        printf("  ");

    }
    for(i=0; i<yboyut; i++)
    {
        c=c+1;
        printf(" * *");
        printf("\n");
        if(yboyut==c+2)
        {
            break;
        }
        else if(c!=yboyut)
        {
            goto de;
        }

    }
    printf("\n");

    return 0;
}

int A_harf(int x)
{

    int i,yboyut,a,j;

    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {
            printf("  ");
        }
        printf(" * *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");
        }

        printf(" * *");
    }
    printf("\n\n");

    return 0;
}

int F_harf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2;

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut; j++)
        {

            printf("  ");
        }
    }

    printf("\n");

    for(i=0; i<yboyut-3; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut-3; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut; j++)
        {


            printf("  ");
        }

    }
    printf("\n\n");

    return 0;
}




int bosluk_harf(int x)
{

    int i;

    for(i=0; i<x; i++)
    {
        printf("\n");
    }

    return 0;
}


int D_harf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a+7; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {


            printf("  ");


        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }

    printf("\n\n");

    return 0;
}


int G_harf(int x)
{

    int i,yboyut,a,j;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2;
    printf("\n");

    for(i=0; i<a; i++)
    {

        printf(" * *");
        printf("\n");
    }
    if(yboyut>15)
    {
        a=a-3;
    }

    printf(" * *");

    for(i=0; i<a; i++)
    {
        printf(" ");
    }

    for(i=0; i<yboyut-a; i++)
    {
        printf(" *");
    }

    printf("\n");
    printf(" * *");

    for(i=0; i<a; i++)
    {
        printf(" ");
    }

    for(i=0; i<yboyut-a; i++)
    {
        printf(" *");
    }

    for(i=0; i<a-1; i++)
    {

        printf("\n");
        printf(" * * ");

        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");

        }
        printf(" * * ");

    }
    printf("\n");
    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n\n");
    return 0;
}


int main(){

	while(1){

		int boyut;
		printf("\n\n   Boyut giriniz (cikmak icin -1 giriniz) : ");

		scanf("%d",&boyut);

		if(boyut<=0){
			return 1;
		}

		system("clear");

		M_harf(boyut);
		U_harf(boyut);
		S_harf(boyut);
		T_harf(boyut);
		A_harf(boyut);
		F_harf(boyut);
		A_harf(boyut);

		bosluk_harf(boyut);

		D_harf(boyut);
		A_harf(boyut);
		G_harf(boyut);


	}


}
