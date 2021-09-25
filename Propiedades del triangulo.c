#include <stdio.h>
#include<conio.h>
int main ()
{
	//Calculo de las propiedades de un triangulo
	float base, altura, area;
	int ecuacion;
	printf("Marque letra minuscula que parte del triangulo quiere saber\nArea - a\nBase - b\nAltura - c\n\n->");
	scanf("%d",&ecuacion);
	if(ecuacion==1){
		printf("\nDigite la  altura del triangulo\n:");
		scanf("%f",&altura);
		printf("\nDigite la base del triangulo\n:");
		scanf("%f",&base);
		area=base*altura;
		printf("\nEl area del trianguloe es--> %1.1f",area);
	}
	else if(ecuacion==2){
		printf("\nDigite el  area del triangulo\n:");
		scanf("%f",&area);
		printf("\nDigite la altura del triangulo\n:");
		scanf("%f",&altura);
		base=area/altura;
		printf("\nLa base del trianguloe es--> %1.1f",base);
	}
	else if(ecuacion==3){
		printf("\nDigite el  area del triangulo\n:");
		scanf("%f",&area);
		printf("\nDigite la base del triangulo\n:");
		scanf("%f",&base);
		altura=area/base;
		printf("\nLa altura del trianguloe es--> %1.1f",altura);
	}
	else{
		printf("Error\nNo se pudo completar la accion, vuelva a intentarlo\n(Recuerde colocar la letra indicada y en minuscula)");
	}
	return 0;
}
