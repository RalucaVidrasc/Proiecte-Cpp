#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

float maxim(float a, float b, float c)
{
    if(a>b && a>c)
       return a;
    if(b>a && b>c)
       return b;
    return c;
}
void calculeaza(float ab, float bc, float ac)
{
    float max=maxim(ab,bc,ac);
    if(max==ab)
    {
       /*printf("\n\nPentru ca cele trei puncte sa fie coliniare trebuie ca:\n\tBC+AC=AB");
       printf("\n\n%.2f+%.2f=%.2f",bc,ac,bc+ac);*/

       if(ab==bc+ac)
       {
          printf("\n=>Cele 3 puncte sunt coliniare!");
          float r=ab/(bc+ab);
          printf("\nRaportul = %.2f", r);
          printf("\nAlfa = %.2f\nBeta = %.2f", 1/(r+1), 2/(r+1));
       }
       else
          printf("\n=>Cele 3 puncte NU sunt coliniare!");
    }
    else
       if(max==bc)
       {
          /*printf("\n\nPentru ca cele trei puncte sa fie coliniare trebuie ca:\n\tAB+AC=BC");
          printf("\n\n%.2f+%.2f=%.2f",ab,ac,ab+ac);*/

          if(bc==ab+ac)
          {
             printf("\n=>Cele 3 puncte sunt coliniare!");
             float r=bc/(ab+ac);
             printf("\nRaportul = %.2f", r);
             printf("\nAlfa = %.2f\nBeta = %.2f", 1/(r+1), 2/(r+1));
          }
          else
             printf("\n=>Cele 3 puncte NU sunt coliniare!");
       }
       else
          if(max==ac)
          {
             /*printf("\n\nPentru ca cele trei puncte sa fie coliniare trebuie ca:\n\tAB+BC=AC");
             printf("\n\n%.2f+%.2f=%.2f",ab,bc,ab+bc);*/

             if(ac==ab+bc)
             {
                printf("\n=>Cele 3 puncte sunt coliniare!");
                float r=ac/(ab+bc);
                printf("\nRaportul = %.2f", r);
                printf("\nAlfa = %.2f\nBeta = %.2f", 1/(r+1), r/(r+1));
             }
             else
                printf("\n=>Cele 3 puncte NU sunt coliniare!");
          }
}
int main()
{
int xA, yA, zA, xB, yB, zB, xC, yC, zC;

printf("Dati coordonatele punctului A1:\nx1=");
scanf("%d",&xA);
printf("y1=");
scanf("%d",&yA);
printf("z1=");
scanf("%d",&zA);

printf("\n\nDati coordonatele punctului A2:\nx2=");
scanf("%d",&xB);
printf("y2=");
scanf("%d",&yB);
printf("z2=");
scanf("%d",&zB);


printf("\n\nDati coordonatele punctului A3:\nx3=");
scanf("%d",&xC);
printf("y3=");
scanf("%d",&yC);
printf("z3=");
scanf("%d",&zC);

/*printf("\n\n>Punctele sunt:");

printf("\n\tA(%d,%d,%d)",xA,yA,zA);
printf("\n\tB(%d,%d,%d)",xB,yB,zB);
printf("\n\tC(%d,%d,%d)",xC,yC,zC);*/


float ab,bc,ac;

ab=sqrt(pow(xB-xA,2)+pow(yB-yA,2)+pow(zB-zA,2));
bc=sqrt(pow(xC-xB,2)+pow(yC-yB,2)+pow(zC-zB,2));
ac=sqrt(pow(xC-xA,2)+pow(yC-yA,2)+pow(zC-zA,2));

/*printf("\n\n>Lungimile laturilor sunt: \n");
printf("\nAB=%.2f",ab);
printf("\nBC=%.2f",bc);
printf("\nAC=%.2f",ac);*/

calculeaza(ab,bc,ac);


getch();
return 0;
}
