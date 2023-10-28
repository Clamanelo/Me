#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <fstream>

using namespace std;
main() {
    setlocale(LC_ALL, "Portuguese");
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int escolha;
    char nome[50];
    FILE *CAD;
    CAD = fopen("Tickets_PIM.txt","r");
    SetConsoleTextAttribute(h,4);
    if (CAD == NULL) {
        cout << "OCORREU UM ERRO AO LER/ACHAR O ARQUIVO.TXT" << endl;
        exit(1);
        fclose(CAD);
        return 0;
    }
    CAD = fopen("Tickets_PIM.txt","a");
    int numero_ticket=1;
    int registro_ano_nascimento,registro_dia_nascimento,registro_mes_nascimento,registro_museu,registro_museu_ticket,registro_valor;
    string registro_cpf;

    SetConsoleTextAttribute(h,6);
    printf("\n\n\t\t\t\t ,--------.,--. ,-----.,--. ,--.,------.,--------. ,---.  ");
    printf("\n\t\t\t\t '--.  .--'|  |'  .--./|  .'   /|  .---''--.  .--''   .-'  ");
    printf("\n\t\t\t\t    |  |   |  ||  |    |  .   ' |  `--,    |  |   `.  `-.  ");
    printf("\n\t\t\t\t    |  |   |  |'  '--'\\|  |\\   \\|  `---.   |  |   .-'    | ");
    printf("\n\t\t\t\t    `--'   `--' `-----'`--' '--'`------'   `--'   `-----' ");
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t__________________________________________" << endl;
    printf("\n\t\t\t\t\t | < Bem-vindo ao registro de ");
    SetConsoleTextAttribute(h,6); cout << "TICKETS!" << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\n\t\t\t\t\t | < Antes de qualquer coisa, � necess�rio que" << endl;
    cout << "\t\t\t\t\t | <  voc� aceite os termos de servi�o." << endl;
    cout << "\t\t\t\t\t | < (caso queira ler os termos, digite 3)" << endl;
    cout << "" << endl;
    do {
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < Deseja aceita-los?" << endl;
        cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha == 3) {
        cout << "\t\t\t\t\t | < 3.	NOSSA LEI GERAL DA PROTE��O DE DADOS" << endl;
        cout << "\t\t\t\t\t | < 3.1 Pol�tica de Privacidade do Museu Multitem�tico" << endl;
        cout << "\t\t\t\t\t | < Data de efetividade:" << endl;
            cout << "\t\t\t\t\t | < Este documento descreve como o Museu coleta," << endl;
            cout << "\t\t\t\t\t | < utiliza e protege suas informa��es pessoais, em conformidade" << endl;
            cout << "\t\t\t\t\t | < com a Lei Geral de Prote��o de Dados (LGPD)." << endl;
            cout << "\t\t\t\t\t | < 3.2 Coleta de Dados Pessoais" << endl;
            cout << "\t\t\t\t\t | < Coletamos dados pessoais quando voc� visita nosso" << endl;
            cout << "\t\t\t\t\t | < museu ou utiliza nossos servi�os. Os tipos de dados que podemos" << endl;
            cout << "\t\t\t\t\t | < coletar incluem, mas n�o se limitam a:" << endl;

cout << "\t\t\t\t\t | < - Nome" << endl;
cout << "\t\t\t\t\t | < - N�mero de telefone" << endl;
cout << "\t\t\t\t\t | < - Informa��es de pagamento" << endl;
cout << "\t\t\t\t\t | < - Data de nascimento" << endl;

   cout << "\t\t\t\t\t | < 3.3 Finalidades dos Dados Pessoais" << endl;

   cout << "\t\t\t\t\t | < Os dados pessoais coletados s�o utilizados para os seguintes fins:" << endl;

cout << "\t\t\t\t\t | < - Gerenciar seu acesso ao museu" << endl;
cout << "\t\t\t\t\t | < - Facilitar a compra de ingressos e reservas de visitas" << endl;
cout << "\t\t\t\t\t | < - Enviar informa��es sobre eventos e exposi��es" << endl;
cout << "\t\t\t\t\t | < - Retirar d�vidas e melhorar nossos servi�os" << endl;

    cout << "\t\t\t\t\t | < 3.4 Sigilo e privacidade de seus Dados Pessoais" << endl;

    cout << "\t\t\t\t\t | < N�s n�o compartilhamos seus dados pessoais com terceiros," << endl;
    cout << "\t\t\t\t\t | < exceto quando necess�rio para cumprir obriga��es legais," << endl;
    cout << "\t\t\t\t\t | < como requisitos fiscais ou regulat�rios." << endl;



    cout << "\t\t\t\t\t | < 3.5 Seguran�a de Dados" << endl;

    cout << "\t\t\t\t\t | < Tomamos medidas de seguran�a adequadas para" << endl;
    cout << "\t\t\t\t\t | < proteger seus dados pessoais contra acesso n�o autorizado," << endl;
    cout << "\t\t\t\t\t | < altera��o, divulga��o ou destrui��o. Utilizamos medidas t�cnicas," << endl;
    cout << "\t\t\t\t\t | < administrativas e f�sicas para garantir a integridade" << endl;
    cout << "\t\t\t\t\t | < e confidencialidade dos seus dados." << endl;

    cout << "\t\t\t\t\t | < 3.6 Seus Direitos" << endl;

    cout << "\t\t\t\t\t | < De acordo com a LGPD, voc� tem os seguintes direitos em" << endl;
    cout << "\t\t\t\t\t | < rela��o aos seus dados pessoais:" << endl;

cout << "\t\t\t\t\t | < - Acesso aos seus dados" << endl;
cout << "\t\t\t\t\t | < - Retifica��o de dados imprecisos" << endl;
cout << "\t\t\t\t\t | < - Elimina��o de dados pessoais" << endl;
cout << "\t\t\t\t\t | < - Portabilidade de dados" << endl;
cout << "\t\t\t\t\t | < - Oposi��o ao nosso tratamento de dados" << endl;

     cout << "\t\t\t\t\t | < Para exercer esses direitos, entre em contato conosco" << endl;
     cout << "\t\t\t\t\t | < usando as informa��es de contato fornecidas no final desta pol�tica." << endl;

    cout << "\t\t\t\t\t | < 3.7 Altera��es nesta Pol�tica" << endl;

     cout << "\t\t\t\t\t | < Reservamo-nos o direito de atualizar esta pol�tica de" << endl;
     cout << "\t\t\t\t\t | < privacidade periodicamente. Qualquer altera��o" << endl;
     cout << "\t\t\t\t\t | < significativa ser� comunicada a voc�." << endl;

     cout << "\t\t\t\t\t | < 3.8 Contato" << endl;

     cout << "\t\t\t\t\t | < Se voc� tiver d�vidas ou preocupa��es sobre" << endl;
     cout << "\t\t\t\t\t | < esta pol�tica de privacidade ou sobre o tratamento" << endl;
     cout << "\t\t\t\t\t | < de seus dados pessoais, entre em contato conosco" << endl;
     cout << "\t\t\t\t\t | < atrav�s dos seguintes meios:" << endl;

cout << "\t\t\t\t\t | < Telefone: 11 98512-4707" << endl;
cout << "\t\t\t\t\t | < Gmail: museumultitematico.lgpd@gmail.com" << endl;
        }
        if (escolha != 0)cout << "t\t\t\t\t\t | < Caso n�o aceite, n�o podemos continuar com o registro :(" << endl;
    }while(escolha != 0);
    cout << "\n\t\t\t\t\t | < Vamos come�ar a fazer o seu agora mesmo!" << endl;
    cout << "\t\t\t\t\t | < Escolha qual apresenta��o deseja visitar!\n" << endl;

        cout << "\t\t\t\t\t | < 1) 100 ANOS DA SEMANA DA ARTE MODERNA" << endl;
        cout << "\t\t\t\t\t | < 2) 150 ANOS DE SANTOS DUMONT" << endl;
        cout << "\t\t\t\t\t | < 3) JOGOS OL�MPIADAS DE PARIS 2024" << endl;
        cout << "\t\t\t\t\t | < 4) HIST�RIA DA NINTENDO" << endl;
        SetConsoleTextAttribute(h,2);
        do {
        printf("\n\t\t\t\t\t |  > "); cin >> registro_museu;
        }while(registro_museu != 1 && registro_museu != 2 && registro_museu != 3 && registro_museu != 4 );
        do {
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < A escolha est� correta?" << endl;
        cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha != 0)cout << "\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    do {
    cout << "\t\t\t\t\t | < Mas antes ser� necess�rio o seu Nome!" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); scanf(" %49[^\n]", nome); getchar();
    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < O Nome foi registrado como: ");
    SetConsoleTextAttribute(h,2);
    cout << nome << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < O Nome est� correto?" << endl;
    cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> escolha;
    SetConsoleTextAttribute(h,7);
    if (escolha != 0)cout << "\n\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    do {
    cout << "\n\t\t\t\t\t | < Mas antes ser� necess�rio a data do seu Aniversario!" << endl;
    cout << "\n\t\t\t\t\t | < Data (enter) Mes (enter) Ano (enter)" << endl;

    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> registro_dia_nascimento;printf("\n\t\t\t\t\t |  > "); cin >> registro_mes_nascimento;printf("\n\t\t\t\t\t |  > "); cin >> registro_ano_nascimento;
    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < O data foi registrada como: ");
    SetConsoleTextAttribute(h,2);
    cout << registro_dia_nascimento << "/" << registro_mes_nascimento << "/" << registro_ano_nascimento << endl;
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < O data est� correta?" << endl;
    cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > "); cin >> escolha;
    SetConsoleTextAttribute(h,7);
    if (escolha != 0)cout << "\n\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    cout << "\n\t\t\t\t\t | < Em seguida digite o seu CPF por favor" << endl;
    cout << "\n\t\t\t\t\t | < Exemplo: 12345678901" << endl;
    do {
    SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> registro_cpf;
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < O cpf est� correto? " << registro_cpf << endl;
        cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha != 0)cout << "\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);

    cout << "\t\t\t\t\t | < Aqui est�o os valores das inteiras e meias\n" << endl;
    SetConsoleTextAttribute(h,4);
    cout << "\t\t\t\t\t | < !Aviso que apenas maiores de 60 anos ou estudantes podem receber meia\n" << endl;
    cout << "\t\t\t\t\t | < Para PCD o ingresso � gratuito\n" << endl;
    int ano_atual = 2023;
    int calcular = ano_atual-registro_ano_nascimento;
    cout << "\t\t\t\t\t | < Sua idade: " << calcular << endl;
    do {
    SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < 1) INTEIRA R$ 10.00" << endl;
        cout << "\t\t\t\t\t | < 2) MEIA R$ 5.00" << endl;
        SetConsoleTextAttribute(h,2);
        do {
        printf("\n\t\t\t\t\t |  > ");
        cin >> registro_museu_ticket;
        }while(registro_museu_ticket != 1 && registro_museu_ticket != 2);
        SetConsoleTextAttribute(h,7);
        cout << "\t\t\t\t\t | < A escolha est� correta?" << endl;
        cout << "\t\t\t\t\t | < Sim (0) / N�o (1)" << endl;
        SetConsoleTextAttribute(h,2);
        printf("\n\t\t\t\t\t |  > "); cin >> escolha;
        SetConsoleTextAttribute(h,7);
        if (escolha != 0)cout << "\t\t\t\t\t | < Certo, vamos tentar de novo." << endl;
    }while(escolha != 0);


    cout << "\t\t\t\t\t | < NOME: " << nome << endl;
    cout << "\t\t\t\t\t | < TEMA: " << registro_museu << endl;
    cout << "\t\t\t\t\t | < DATA: " << registro_dia_nascimento << "/" << registro_mes_nascimento << "/" << registro_ano_nascimento << endl;
    cout << "\t\t\t\t\t | < CPF:" << registro_cpf << endl;
    if (registro_museu_ticket == 1) registro_valor = 10.00;
    if (registro_museu_ticket == 2) registro_valor = 5.00;
    cout << "\t\t\t\t\t | < VALOR: R$ " << registro_valor << endl;
    printf("\t\t\t\t\t | < Esse sera o seu ticket para entrar: ");SetConsoleTextAttribute(h,6); printf("%d\n",numero_ticket);
    numero_ticket = numero_ticket+1;
    cout << "\t\t\t\t\t | < Aproveite essa experiencia." << endl;
    fprintf(CAD, "\nTICKET: %d",numero_ticket);
    fprintf(CAD, "\nNOME: %s",nome);
    fprintf(CAD, "\nDATA: %d/",registro_dia_nascimento);
    fprintf(CAD, "%d/",registro_mes_nascimento);
    fprintf(CAD, "%d\n",registro_ano_nascimento);
    fprintf(CAD, "\nCPF: %f /n",registro_dia_nascimento);
    fprintf(CAD, "TEMA: %d\n",registro_museu);
    fprintf(CAD, "\nVALOR: %d",registro_valor);
    fclose(CAD);

    SetConsoleTextAttribute(h,7);
    printf("\t\t\t\t\t | < (Pressione > Enter <)\n\t\t");
    SetConsoleTextAttribute(h,0);
    system("pause");
    SetConsoleTextAttribute(h,7);
    cout << "\t\t\t\t\t | < Oque deseja fazer agora?" << endl;
    cout << "\t\t\t\t\t | - Repetir o programa (1)" << endl;
    //cout << "\t\t\t\t\t\t - Ver o registro (2)" << endl;
    cout << "\t\t\t\t\t | - Fechar o programa (3)" << endl;
    do {
    SetConsoleTextAttribute(h,2);
    printf("\n\t\t\t\t\t |  > ");
    SetConsoleTextAttribute(h,7);
    cin >> escolha;
    }while(escolha != 1 && escolha != 3);
    switch(escolha) {
    case 1:
    system("cls");
        return main();
        break;
    case 3:
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t Adeus..\n\n\n" << endl;;
        break;
    }
}
