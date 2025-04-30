#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>





int verificarSenha(char senha[]){
    char verificar [11]="orbita2025";
    for(int i=1;i<11;i++){
        if(verificar[i]!=senha[i]){
            return 0;
        }
    }
    return 1;
}

int functionlogin(int n1){
    setlocale(LC_ALL, "Portuguese");

    char senha[11];
    int i1=-1,erro=0;
    printf("LOGIN\n");
    while(i1<0){
            printf("Digite a senha pre definida\n");
        scanf("%s",&senha);
            printf("correto %d\n",verificarSenha(senha));
        if( verificarSenha(senha)==1){
            printf("Login efetivado com sucesso boas-vindas\n");
            i1=1;
        }else{
        printf("Senha está errada, digite novamente\n");
        erro ++;
            if(erro==3){
                printf("lemite de senhas atingido.");
                i1=1;
            }
        }
    }
}


/*🎯 Objetivo
Após autenticação, o programa deve exibir um menu de opções numéricas. O menu deve ser
apresentado repetidamente até que o usuário escolha a opção de saída.
📌 O que deve ser feito
• O menu deve permanecer em execução até que o usuário escolha sair.
• Usar estrutura do...while para repetir o menu.
• Validar entradas e chamar funções específicas por opção.
7
*/
float entradaDistancia(){
       int distanciaUsuario,angulo;
        printf("digite uma distancia em km \n");
        scanf("%d",&distanciaUsuario);
        return distanciaUsuario;
}
float operacaoDistancia(){
    float distanciaUsuario=entradaDistancia();
    float angulo = distanciaUsuario * 0.42 + 18;
        return angulo;

}
int entrandoMenu(int escolhamenu){
    if(escolhamenu ==2){
int inicio=1000;
    for(int interacao=0;interacao<=inicio;interacao++){
            inicio=inicio-50;
        printf("interacao %d e %d litros\n",interacao,inicio);
    if(inicio==500){
        printf("Atingindo atmosfera superior");
    }if(inicio==100){
    printf("quase em orbita");}} 
    }
    if(escolhamenu==3){
           printf(":: %f\n",entradaDistancia());
            printf(":: %f\n",operacaoDistancia());

    }
    if(escolhamenu==4){
        
    }
  return 0;
};
int main()

{       setlocale(LC_ALL, "Portuguese");
    int escolha, menuPonto=1;
        functionlogin(2);
        do{
        printf("ESCOLHA UM DOS MENUS:\n");
        printf("2. Simular Queima de Combustível \n 3. Calcular Ângulo de Trajetória \n 4. Calcular Gravidade em Planeta \n");
        printf("5. Registrar Missão \n 6. Ver Histórico de Missões \n 6. Calcular Energia para Emergência (Recursivo)\n");
        printf("7. Ordenar Missões por Distância \n 8. Missão Final");
        scanf("%d",&escolha);
        switch (escolha){
        case 1:
            entrandoMenu(1);
             menuPonto=1;
            break;
        case 2:
            entrandoMenu(2);
             menuPonto=1;
            break;
        case 3:
            entrandoMenu(3);
            menuPonto=1;
            break;
        case 4:
            menuPonto=3;
            break;
        }
    }while(menuPonto<2);


    return 0;
}
