#include <stdio.h>
#include <stdlib.h>
#include <string.h>




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
int entrandoMenu(int escolhamenu){
    /*Criar uma função que simula a queima progressiva de combustível, iniciando com
1000 litros. A cada iteração, devem ser consumidos 50 litros e exibida a
quantidade restante. Exibir mensagens específicas em momentos-chave, como ao
atingir 500 litros ("Atingindo atmosfera superior") e 100 litros ("Quase em
órbita").
Desafio: tente controlar cada iteração para acontecer de 0,5 em 0,5 segundos.
8
 */
    if(escolhamenu==2){
        int inicio=1000;
    }
 
 
  return 0;
};
int main()
{
    int escolha, menuPonto=1;
        functionlogin(2);
        do{
        printf("ESCOLHA UM DOS MENUS:\n");
        printf("menu 1 \n menu 2(Queima de Combustível) \n menu 3(Cálculo de Trajetória) \n sair 4 \n");
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
