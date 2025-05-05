#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
float distancias[10];
float angulos[10];
int planetas[10];
int sucessos[10];
int totalMissoes = 0;
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
    int i1=-1,erro=0,acesso=0;
    printf("LOGIN\n");
    while(i1<0){
            printf("Digite a senha pre definida\n");
        scanf("%s",&senha);
            printf("correto %d\n",verificarSenha(senha));
        if( verificarSenha(senha)==1){
            printf("Login efetivado com sucesso boas-vindas\n");
            i1=1;
            acesso=2;
        }else{
        printf("Senha está errada, digite novamente\n");
        erro ++;
            if(erro==3){
                printf("lemite de senhas atingido.");
                i1=1;
                acesso=1;
            }
        }
    }
    return acesso;
}
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
void gravidadedosplanetas(int planetas){
     int planeta= planetas;
                if(planeta ==1){
                    printf("A gravidade do planeta de Marte: 3.7 m/s²\n");
                    if(3.7>15){
                        printf("Gravidade forte. Aumente o empuxo.\n");
                    }else{
                        printf("Gravidade moderada.\n");
                    }
                }
                if(planeta ==2){
                    printf("A gravidade do planeta de Júpiter: 24.8 m/s²\n");
                    if(24.8>15){
                        printf("Gravidade forte. Aumente o empuxo.\n");
                    }else{
                        printf("Gravidade moderada.\n");
                    }
                }
                if(planeta ==3){
                    printf("A gravidade do planeta de Saturno: 10.4 m/s²\n");
                    if(10.4>15){
                        printf("Gravidade forte. Aumente o empuxo.\n");
                    }else{
                        printf("Gravidade moderada.\n");
                    }
                }
}
const char* nomePlaneta(int codigo) {
    switch (codigo) {
        case 1: return "Marte";
        case 2: return "Júpiter";
        case 3: return "Saturno";
        default: return "Desconhecido";
    }
}
void adicionarMissao() {
    if (totalMissoes >=10) {
        printf("Limite de missoes atingido!\n");
        return;
    }

    printf("=== Adicionar Missao %d ===\n", totalMissoes + 1);

    printf("Digite a distancia (em milhoes de km): ");
    scanf("%f", &distancias[totalMissoes]);
    printf("Digite o angulo (em graus): ");
    scanf("%f", &angulos[totalMissoes]);
    printf("Escolha o planeta (1 = Marte, 2 = Jupiter, 3 = Saturno): ");
    scanf("%d", &planetas[totalMissoes]);
    printf("Missao foi um sucesso? (1 = Sim, 0 = Nao): ");
    scanf("%d", &sucessos[totalMissoes]);
    totalMissoes++;
    printf("Missao registrada com sucesso!\n");
}
void exibirMissoes() {
    printf("\n=== Historico de Missoes ===\n");
    for (int i = 0; i < totalMissoes; i++) {
        printf("Missao %d:\n", i + 1);
        printf("  Distancia: %.2f milhoes km\n", distancias[i]);
        printf("  Angulo: %.2f graus\n", angulos[i]);
        printf("  Planeta: %s\n", nomePlaneta(planetas[i]));
        printf("  Status: %s\n", sucessos[i] ? "Sucesso" : "Fracasso");
        printf("-----------------------------\n");
    }
}
int entrandoMenu(int escolhamenu){
    if(escolhamenu ==2){
        int inicio=1000;
            for(int interacao=0;interacao<=inicio;interacao++){
            inicio=inicio-50;
            printf("interacao %d e %d litros\n",interacao,inicio);
                if(inicio==500){
                printf("Atingindo atmosfera superior");
                }
                if(inicio==100){
                printf("quase em orbita");}
                }
    }
    if(escolhamenu==3){
            printf(":: %f\n",entradaDistancia());
            printf(":: %f\n",operacaoDistancia());

    }
    if(escolhamenu==4){
            int planeta;
            printf("escolha um planeta (1-Marte, \n2-Jupiter ou 3-Saturno)\n");
            scanf("%d",&planeta);
            gravidadedosplanetas(planeta);
    }
    if(escolhamenu==5){
    int opcao;
    do {
        printf("\n=== MENU - Registro de Missoes ===\n");
        printf("1. Adicionar nova missao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: adicionarMissao(); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);


    return 0;
  }
    if(escolhamenu==6){
        exibirMissoes();
    }
    if(escolhamenu==7){
                for (int i = 0; i < totalMissoes - 1; i++) {
        for (int j = 0; j < totalMissoes - i - 1; j++) {
            if (distancias[j] > distancias[j + 1]) {
                // Trocar distância
                float tempDist = distancias[j];
                distancias[j] = distancias[j + 1];
                distancias[j + 1] = tempDist;

                // Trocar ângulo
                float tempAng = angulos[j];
                angulos[j] = angulos[j + 1];
                angulos[j + 1] = tempAng;

                // Trocar planeta
                int tempPlaneta = planetas[j];
                planetas[j] = planetas[j + 1];
                planetas[j + 1] = tempPlaneta;

                // Trocar sucesso
                int tempSucesso = sucessos[j];
                sucessos[j] = sucessos[j + 1];
                sucessos[j + 1] = tempSucesso;
            }
        }
    }
    printf("Missoes ordenadas por distancia com sucesso!\n");
    exibirMissoes(); // Mostrar após ordenar
    }
    if(escolhamenu==8){
        int matriz[3][2] = {
        {10, 500},   // Ativar Escudos
        {-5, 800},   // Lançar Propulsores
        {5, 300}     // Enviar Sinal
    };

    int escolha;

    printf("🚀 Escolha uma acao para continuar a missao:\n");
    printf("1 - Ativar Escudos\n");
    printf("2 - Lançar Propulsores\n");
    printf("3 - Enviar Sinal\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("\n Acao: Ativar Escudos\n");
            printf("Impacto na missao: +%d%%\n", matriz[0][0]);
            printf("Consumo de energia: %d unidades\n", matriz[0][1]);
            break;
        case 2:
            printf("\n Acao: Lançar Propulsores\n");
            printf("Impacto na missao: %d%%\n", matriz[1][0]);
            printf("Consumo de energia: %d unidades\n", matriz[1][1]);
            break;
        case 3:
            printf("\n Ação: Enviar Sinal\n");
            printf("Impacto na missao: +%d%%\n", matriz[2][0]);
            printf("Consumo de energia: %d unidades\n", matriz[2][1]);
            break;
        default:
            printf("\n❌ Escolha invalida! Tente novamente.\n");
    }
    }
  return 0;
};
int main(){
      setlocale(LC_ALL, "Portuguese");
    int escolha, menuPonto=1;
        if(functionlogin(2)==2){
            do{
        printf("ESCOLHA UM DOS MENUS:\n");
        printf("2. Simular Queima de Combustível \n 3. Calcular Ângulo de Trajetória \n 4. Calcular Gravidade em Planeta \n");
        printf("5. Registrar Missão \n 6. Ver Histórico de Missões\n");
        printf("7. Ordenar Missões por Distância \n 8. Missão Final\n 9 sair");
        scanf("%d",&escolha);
        switch (escolha){
        case 2:
            entrandoMenu(2);
             menuPonto=1;
            break;
        case 3:
            entrandoMenu(3);
            menuPonto=1;
            break;
        case 4:
            entrandoMenu(4);
            menuPonto=1;
            break;
        case 5:
            entrandoMenu(5);
            menuPonto=1;
            break;
        case 6:
            entrandoMenu(6);
            menuPonto=1;
            break;
        case 7:
            entrandoMenu(7);
            menuPonto=1;
            break;
        case 8:
            entrandoMenu(8);
            menuPonto=1;
            break;
         case 9:
            printf("\nsaindo do sistema\n");
            menuPonto=3;
            break;

        }
            }while(menuPonto<2);
        }else{
        printf("\n Login nao realizado");}

    return 0;
}
