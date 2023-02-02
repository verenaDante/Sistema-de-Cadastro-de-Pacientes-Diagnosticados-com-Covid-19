#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#define SIZE 200

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char login[20] = "Teste";
    char login1[20];
    char senha[20] = "****";
    char senha1[20];
    char res[20] = "SIM";
    char logado;
    int calcularidade;
    int retorno;
    int risco = 0;
    struct cadastro {
    char nome[SIZE];
    char email[SIZE];
    int numero, dia, mes, ano;
    char cpf[15], telefone[SIZE], cep[SIZE], diag[SIZE];
    char rua[SIZE], bairro[SIZE], cidade[SIZE], estado[SIZE], comorbidade[10], quais[SIZE];

};

    struct cadastro pac;

    int anoAtual;
    time_t data_ano;
    time(&data_ano);
    void cadastro(){};

    struct tm * data = localtime(&data_ano);
    anoAtual = (data -> tm_year+1900);

    system("cls || clear");
    printf("\n\n\n\t\t\t\t\tCadastro para pacientes com COVID-19\n");
    printf("\t\t\t\t\t_____________________________________");

    printf("\n\n\tLOGIN: ");
    gets(login1);
    if (strcmp(login, login1) == 0) {
        printf("\n\tSENHA: ");
        gets(senha1);
        if (strcmp(senha, senha1) == 0) {
            printf("\n\tVocê está LOGADO!\n");
            cadastro(cadastro);
            logado = 'S';

        }
        else {
            printf("\n\tSenha inválida!\n\n");
        }
    }
    else {
            printf("\n\tLogin inválido! Tente novamente\n\n");
    }

    int opcao, opcao1, opcao2, opcao0, j, quant;
    if (logado == 'S'){

    while(opcao2!=1){
    while(opcao!=1){
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("\t\t\t\t\t\t Bem vindo ao atendimento\n ");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("\n\t1 - Cadastrar paciente.\n ");
    printf("\n\t0 - Sair.\n ");
    printf("_______________________________________________________________________________________________________________________");
    printf("\n\n\tQual opção você deseja acessar?\n\t");
    scanf("%d",&opcao);




    switch(opcao){
    case 1:
    system("cls");

     for(j=1;j<=quant;j++){
        fflush(stdin);
        FILE *ponteiroArquivo;
        ponteiroArquivo=(fopen("cadastros.txt", "a"));
        printf("\n\n\t\t\t\t\t\t Dados pessoais do paciente ");

        printf("\n\nNome do paciente: ");
        fgets(pac.nome, 200, stdin);


    {char cpf[14]  ,rep[4];
    int icpf[11], i, soma=0, s=0, cpf1, cpf2, dig1, dig2, cond;
    do{
            i=0;      cpf1=0;       dig2=0;
            soma=0;   cpf2=0;       cond=0;
            s=0;      dig1=0;


printf("Digite seu cpf:");
    gets(cpf);
    cond=strlen(cpf);
    //converção
        for(i=0;i<cond;i++){
            if(cpf[i]!='.'&& cpf[i]!='-'){
                icpf[s]=cpf[i]-48;
                s++;
            }
        }
     //Calculo do digito 1
     if(icpf[0]!=icpf[1] && icpf[2]!=icpf[3] && icpf[4]!=icpf[5]){


    for(i=0;i<9;i++){
        soma+=icpf[i]*(10-i); //soma=soma+icpf
    }

    cpf1=soma%11;

    if(cpf1==0 || cpf1==1){
            dig1=0;
    }
    else{
        dig1=11-cpf1;
    }

    //Calculo do segundo digito
    soma=0;
    for(i=0;i<10;i++){
        soma+=icpf[i]*(11-i);
    }
    cpf2=soma%11;

    if(cpf2==0 || cpf2==1){
        dig2=0;
    }
    else{
        dig2=11-cpf2;
    }
    if(icpf[9]==dig1 && icpf[10]==dig2){
        strcpy(pac.cpf, cpf);
        printf("cpf válido\n\n");

    }
    else{
        printf("cpf inválido\n\n");
        printf("Deseja continuar digite 'SIM' e para encerrar digite 'NÃO': " );
        gets(rep);
        system("pause");
        return 0;

    }
    }
    else{
        printf("cpf iválido\n\n");
        printf("Deseja continuar digite 'SIM' e para encerrar digite 'NÃO': "  );
        gets(rep);
        system("pause");
    }
}while(strcmp(strlwr(rep),"sim")==0);
}



        printf("\n");
        printf("\nData de nascimento:");
        printf("\nDia: ");
        fflush(stdin);
        scanf("%d", &pac.dia);
        printf("Mês: ");
        fflush(stdin);
        scanf("%d", &pac.mes);
        printf("Ano: ");
        fflush(stdin);
        scanf("%d", &pac.ano);

        printf("Telefone: ");
        scanf(" %30[^\n]s", &pac.telefone);

        printf("CEP: ");
        scanf(" %30[^\n]s", &pac.cep);

        printf("Rua: ");
        scanf(" %30[^\n]s", &pac.rua);

        printf("Número: ");
        fflush(stdin);

        scanf("%d", &pac.numero);
        printf("Bairro: ");
        scanf(" %30[^\n]s", &pac.bairro);

        printf("Cidade: ");
        scanf(" %30[^\n]s", &pac.cidade);

        printf("Estado: ");
        scanf(" %30[^\n]s", &pac.estado);

        printf("Email: ");
        scanf(" %30[^\n]s", &pac.email);

        printf("Data do diagnostico: ");
        scanf(" %30[^\n]s", &pac.diag);
        setbuf(stdin, NULL);

        printf("O paciente possui comorbidades (diabetes, obesidade, hipertensão, tuberculose, outros)? 1. Sim / 0. Não");
        scanf("%d", &risco);
        setbuf(stdin, NULL);

        if(risco == 1)
        {
            strcpy(pac.comorbidade, "SIM");
            printf("Quais as comorbidades? ");

            fflush(stdin);
            fgets(pac.quais, 200, stdin);
        }
               else{
            strcpy(pac.comorbidade, "NÃO");
            strcpy(pac.quais, "Nenhum");
        }

        printf("\n");
        fprintf(ponteiroArquivo, "\nNome: %s", pac.nome);
        fprintf(ponteiroArquivo, "CPF: %s", pac.cpf);
        fprintf(ponteiroArquivo, "\nData de nascimento: %d/%d/%d\n", pac.dia, pac.mes, pac.ano);
        fprintf(ponteiroArquivo, "Telefone: %s", pac.telefone);
        fprintf(ponteiroArquivo, "\nCEP: %s", pac.cep);
        fprintf(ponteiroArquivo, "\nRua: %s", pac.rua);
        fprintf(ponteiroArquivo, "\nNúmero: %i\n", pac.numero);
        fprintf(ponteiroArquivo, "Bairro: %s", pac.bairro);
        fprintf(ponteiroArquivo, "\nCidade: %s", pac.cidade);
        fprintf(ponteiroArquivo, "\nEstado: %s", pac.estado);
        fprintf(ponteiroArquivo, "\nEmail: %s", pac.email);
        fprintf(ponteiroArquivo, "\nData do diagnostico: %s", pac.diag);
        fprintf(ponteiroArquivo, "\nComorbidade: %s", pac.comorbidade);
        fprintf(ponteiroArquivo, "\nQuais comorbidade(s)? %s\n", pac.quais);
        calcularidade = anoAtual - pac.ano;
        if (calcularidade > 65 || risco == 1) {
            FILE *ponteiroRisco;
            ponteiroRisco=(fopen("grupoderisco.txt", "a"));
            fprintf(ponteiroRisco, "\nCEP: %s", pac.cep);
            fprintf(ponteiroRisco, "\nIdade: %d\n", calcularidade);
            printf("\n\nO Paciente identificado como pertencente ao grupo de risco.\n");
            system("pause");
            fclose(ponteiroRisco);
    }
        fclose(ponteiroArquivo);




{


    case 0:
        system("cls");
        printf("\n\n\tVocê realmente deseja sair do sistema?");
        printf("\n\n\t 1 - Sim \n\t 2 - Não\n");
        scanf("%d",&opcao2);

        switch(opcao2){
        case 1:

        system("cls");
        printf("\n\n\t Programa finalizado\n");
        system("pause");
        return 0;
        break;





    }
    }

    }
    break;
    }

    }

    system("pause");
    return 0;


}
}
}


