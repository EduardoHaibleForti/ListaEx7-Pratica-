#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a, b, c;
    float delta,x1,x2;
    float xv,yv;

    printf("Digite os coeficientes a,b e c da parabola(y=ax^2+bx+c):");
    scanf("%f %f %f",&a,&b,&c);

    if(a>0){
        printf("A concavidade da parabola eh positiva(para cima)");

    }else if(a==0){
    printf("Não eh uma parabola (a=0)");
    return 0;

    }
delta=b*b-4*a*c;

if(delta>0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("As raizes da equacao sao : x1=%.2f e x2=%.2f",x1,x2);

}else if(delta==0){
x1=-b/(2*a);
printf("A equacao possui uma unica raiz:x=%.2f",x1);
}else{
printf("A equacao nao possui raizes reais(delta<0)");
}
xv=-b/(2*a);
yv=a*xv*xv+b*xv+c;
printf("O vertice da parabola esta no ponto :(%.2f,%.2f)",xv,yv);
return 0;

}
