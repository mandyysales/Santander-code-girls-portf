//Trabalho em C (1 semestre). Esse é um modelo de programa que calcula a quantidade de caractere
// de um texto que tenha um paragrafo escrito FIM, vai mostrar na tela os caracteres que 
//foram contados e a media. (Amanda G. de Sales)
#include <stdio.h>
#include <string.h>
int main(){
    char paragrafos[1001];
    char vet_minusculo[26]= {"abcdefghijklmnopqrstuvwxyz"}; //string para verificar a ocorrencia de caracteres minusculos no paragrafo;
    int num, num2, num3; //variaveis de controle; 
    char vet_maiusculo[26]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; //string para verificar a ocorrencia de caracteres maiusculos no paragrafo;
    int digito[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int total_caracteres=0; //variavel para contar o numero total de caractere. 
    char aux[]= {"FIM"}; //string paradeterminar o fim da função.
    int crt1=0, crt2=0, crt3=0; //variaveis de controle;
    int lm[26];
    int lMM[26];
    float digito2[10];
    int lmM[10];
    
    for(num=0; num<26; num++){
        lMM[num]=0;
        lm[num]=0;
    }
    for(num=0;num<10; num++){
        lmM[num]=0;
    }
    fgets(paragrafos, 1001, stdin); //entrada do primeiro paragrafo.
    crt2++; //contagem do numero de paragrafos 
    for(crt1=0; crt1<crt2; crt1++){    //a ideia é que esse for aconteça sempre que tiver um enter, então apartir dele aconteça um if else
    if(strstr(paragrafos, aux)==NULL){ //o if else vai servir para decidir se faz leitura de um novo paragrafo ou termina a função.
        for(num=0; num<strlen(paragrafos); num++){
        
            for(num2=0; num2<26; num2++){
            
        if (paragrafos[num] == vet_minusculo[num2]){
        
          if(paragrafos[num] == 'a') lm[0]++;//a++;
          else if(paragrafos[num]=='b')lm[1]++;//b++;
          else if(paragrafos[num]=='c')lm[2]++;//c++;
          else if(paragrafos[num]=='d')lm[3]++;//d++;
          else if(paragrafos[num]=='e')lm[4]++;//e++;
          else if(paragrafos[num]=='f')lm[5]++;//f++;
          else if(paragrafos[num]=='g')lm[6]++;//g++;
          else if(paragrafos[num]=='h')lm[7]++;//h++;
          else if(paragrafos[num]=='i')lm[8]++;//i++;
          else if(paragrafos[num]=='j')lm[9]++;//j++;
          else if(paragrafos[num]=='k')lm[10]++;//k++;
          else if(paragrafos[num]=='l')lm[11]++;//l++;
          else if(paragrafos[num]=='m')lm[12]++;//m++;
          else if(paragrafos[num]=='n')lm[13]++;//n++;
          else if(paragrafos[num]=='o')lm[14]++;//o++;
          else if(paragrafos[num]=='p')lm[15]++;//p++;
          else if(paragrafos[num]=='q')lm[16]++;//q++;
          else if(paragrafos[num]=='r')lm[17]++;//r++;
          else if(paragrafos[num]=='s')lm[18]++;//s++;
          else if(paragrafos[num]=='t')lm[19]++;//t++;
          else if(paragrafos[num]=='u')lm[20]++;//u++;
          else if(paragrafos[num]=='v')lm[21]++;//v++;
          else if(paragrafos[num]=='w')lm[22]++;//w++;
          else if(paragrafos[num]=='x')lm[23]++;//x++;
          else if(paragrafos[num]=='y')lm[24]++;//y++;
          else if(paragrafos[num]=='z')lm[25]++;//z++;
          total_caracteres++;
            }  
        }
            for(num2=0; num2<26; num2++){
            
        if (paragrafos[num] == vet_maiusculo[num2]){
        
          if(paragrafos[num] == 'A') lMM[0]++; //a1++;
          else if(paragrafos[num]=='B')  lMM[1]++; //b1++;
          else if(paragrafos[num]=='C')  lMM[2]++; //c1++;
          else if(paragrafos[num]=='D')  lMM[3]++; //d1++;
          else if(paragrafos[num]=='E')  lMM[4]++; //e1++;
          else if(paragrafos[num]=='F')  lMM[5]++; //f1++;
          else if(paragrafos[num]=='G')  lMM[6]++; //g1++;
          else if(paragrafos[num]=='H')  lMM[7]++; //h1++;
          else if(paragrafos[num]=='I')  lMM[8]++; //i1++;
          else if(paragrafos[num]=='J')  lMM[9]++; //j1++;
          else if(paragrafos[num]=='K')  lMM[10]++; //k1++;
          else if(paragrafos[num]=='L')  lMM[11]++; //l1++;
          else if(paragrafos[num]=='M')  lMM[12]++; //m1++;
          else if(paragrafos[num]=='N')  lMM[13]++; //n1++;
          else if(paragrafos[num]=='O')  lMM[14]++; //o1++;
          else if(paragrafos[num]=='P')  lMM[15]++; //p1++;
          else if(paragrafos[num]=='Q')  lMM[16]++; //q1++;
          else if(paragrafos[num]=='R')  lMM[17]++; //r1++;
          else if(paragrafos[num]=='S')  lMM[18]++; //s1++;
          else if(paragrafos[num]=='T')  lMM[19]++; //t1++;
          else if(paragrafos[num]=='U')  lMM[20]++; //u1++;
          else if(paragrafos[num]=='V')  lMM[21]++; //v1++;
          else if(paragrafos[num]=='W')  lMM[22]++; //w1++;
          else if(paragrafos[num]=='X')  lMM[23]++; //x1++;
          else if(paragrafos[num]=='Y')  lMM[24]++; //y1++;
          else if(paragrafos[num]=='Z')  lMM[25]++; //z1++;
          total_caracteres++;
                }  
            }
        
        
            for(num2=0; num2<26; num2++){
            
        if (paragrafos[num] == digito[num2]){
        
          if(paragrafos[num] == '0') lmM[0]++;//a++;
          else if(paragrafos[num]=='1')lmM[1]++;//b++;
          else if(paragrafos[num]=='2')lmM[2]++;//c++;
          else if(paragrafos[num]=='3')lmM[3]++;//d++;
          else if(paragrafos[num]=='4')lmM[4]++;//e++;
          else if(paragrafos[num]=='5')lmM[5]++;//f++;
          else if(paragrafos[num]=='6')lmM[6]++;//g++;
          else if(paragrafos[num]=='7')lmM[7]++;//h++;
          else if(paragrafos[num]=='8')lmM[8]++;//i++;
          else if(paragrafos[num]=='9')lmM[9]++;//j++;
          total_caracteres++;
                }
            }
        }
        fgets(paragrafos, 1001, stdin);
        crt2++;
            
        }
        else if(strstr(paragrafos, aux)!= NULL){
            break;
            }
    }

    //falta colocar o valor para (com)parar nos testes do for, tambem falta algo como um novo for para alterar esse valor;
    printf("Caracteres Maiusculos:\n");
    for(num=0; num<26; num++){
        printf("%c: ", vet_maiusculo[num]);
        if(lMM[num]>=0){
        for(crt1=0; crt1<lMM[num]; crt1++){ //esse for tem uma variavel iniciada em zero e vai ocorrer enquanto o numero de caracteres, ex.: a ocorre 2x então for 2x.
       printf("*");
            }
        }
        printf(" (%d - %.2f)\n", lMM[num], (float)lMM[num]/total_caracteres);
    }
    printf("\n");
    printf("Caracteres Minusculos:\n");
    for(num2=0; num2<26; num2++){
        printf("%c: ", vet_minusculo[num2]);
        if(lm[num2]>=0){
        for(crt2=0; crt2<lm[num2]; crt2++){ //esse for tem uma variavel iniciada em zero e vai ocorrer enquanto o numero de caracteres, ex.: a ocorre 2x então for 2x.
        printf("*");
            }
        }
        printf(" (%d - %.2f)\n", lm[num2], (float)lm[num2]/total_caracteres);
    }
    printf("\n");
    printf("Digitos:\n");
    for(num3=0; num3<10; num3++){
        printf("%c: ", digito[num3]);
        if(lmM[num3]>=0){
        for(crt3=0; crt3<lmM[num3]; crt3++){ //esse for tem uma variavel iniciada em zero e vai ocorrer enquanto o numero de caracteres, ex.: a ocorre 2x então for 2x.
        printf("*");
            }
        }
        printf(" (%d - %.2f)\n", lmM[num3], (float)lmM[num3]/total_caracteres);
    }
    
    return 0;
}