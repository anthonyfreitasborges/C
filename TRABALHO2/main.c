#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int verificarSenha(char senha[]){
int ok=0;
    char verificar [11]="orbita2025";
    for(int i=1;i!='/0';i++){
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
int main()
{

    printf("bora %d ",functionlogin(2));
    return 0;
}
