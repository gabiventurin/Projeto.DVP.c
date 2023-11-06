#include <stdio.h>
#include <stdlib.h>


float valorTotal; // O valor cobrado pelo evento 
float imposto = 0.935; // O valor de 1 - o imposto 
int custo;
int x; // condição do imposto 1 para sim e 0 para nao 
float valorFinal;
float dezporcento;
float valorLiquido1;


// calculo do lucro liquido 1, ou seja, o lucro sem os 10% da empresa e, eventualmente sem o imposto

float calculoLucroLiquido1 (int valorTotal, float imposto, int custo, int x){ //Calcula o lucro do evento tirando o imposto e os 10% guardados no caixa da empresa 
  float valorTotal1; // Valor líquido sem o imposto 
  if (x==1) // Se for cobrado imposto o usuário deve digitar 1 
  {
  valorTotal1 = valorTotal*imposto;  // Calculando o valor líquido tirando o imposto 
  printf("Valor do imposto: %.2f:\n\n" , valorTotal - valorTotal1 ); 
  printf("valor do lucro sem o imposto :%.2f\n\n" , valorTotal1 );
  valorFinal = valorTotal1*0.9;  // o lucro liquido final é calculado assim pois 10% do mesmo é guardado pra empresa
  dezporcento = valorTotal1*0.1;
  printf("A porcentagem do lucro para a empresa é: %.2f\n\n" , dezporcento );
    printf("O lucro total da empresa nesse evento é %.2f\n\n" , valorFinal); 
  }
    else
  {
 valorFinal = valorTotal*0.9; 
dezporcento = valorTotal*0.1;
  printf("A porcentagem do lucro para a empresa é: %.2f\n\n" , dezporcento );
    printf("O lucro total da empresa nesse evento é %.2f\n\n" , valorFinal); 
  }
  
    return valorFinal; 
}
    


float valorLiquido2( float resultadof1, float custo){ //calcula o lucro, igualmente, para cada socio 
float valorfinal1 = resultadof1 - custo;
  float valorsocio = valorfinal1/2;
 printf("Até agora o valor final para cada um dos sócios é: %.2f" , valorsocio );
return valorsocio;
}





int main(){
printf("Cálculo dos lucros DVP:\n");
printf("Qual é o lucro bruto do evento?\n");
scanf("%f", &valorTotal);
printf("Teve imposto? (Digite 1 para sim e 0 para não)\n");
scanf("%i", &x);
float valorLiquido1 =  calculoLucroLiquido1 ( valorTotal , imposto , custo, x);
  printf("Qual foi o custo do evento?\n");
  scanf("%i" , &custo);


float lucroSocio = valorLiquido2( valorLiquido1 , custo);
 

return 0;
  
}
 //acrescentando um comentario