#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

// Registro para pacientes e médicos
struct Pessoa {
    char nome[40];
    char telefone[20];
    char endereco[100];
    char cpf[15];
    char especialidade[50];
    char status;
};

// Registro para consultas
struct Consulta {
    char cpf_paciente[15];
    char cpf_medico[15];
    char data[11];
    char hora[6];
    char nome_medico[40];
    char status;  // 0 - desmarcada, 1 - marcada, 2 - confirmada
};

struct Medico {
    char nome[40];
    char especialidade[40];
    char crm[15];
    char horario_atendimento[20];
};

FILE *fp_pacientes;
FILE *fp_medicos;
FILE *fp_consultas;

// Protótipos das funções
void cadastrar_paciente(void);
void cadastrar_medico(void);
void marcar_consulta(void);
void desmarcar_consulta(void);
void confirmar_consulta(void);
void listar_pacientes(void);
void listar_medicos(void);
void listar_consultas(void);
void marcar_consulta(void);
void desmarcar_consulta(void);
void confirmar_consulta(void);
void listar_pacientes(void);
void listar_medicos(void);
void listar_consultas(void);
void abrir(char tipo[3], FILE **fp, char nome_arquivo[20]);

int main(void) {
    system("color 1F");
    char opcao[2], op;
    do {
        do {
            system("cls");
            printf("\n\n\n\n\n\n\n");
            printf("\t========================================================\n");
            printf("\t=                                                      =\n");
            printf("\t=                                                      =\n");
            printf("\t=                SISTEMA DE GERENCIAMENTO              =\n");
            printf("\t=                      HOSPITALAR                      =\n");
            printf("\t=                                                      =\n");
            printf("\t=                                                      =\n");
            printf("\t========================================================\n\n");
            printf("\n Digite uma das opcoes\n\n");
            printf("\n <P> - Cadastrar paciente");
            printf("\n <M> - Cadastrar médico");
            printf("\n <A> - Marcar consulta");
            printf("\n <D> - Desmarcar consulta");
            printf("\n <C> - Confirmar consulta");
            printf("\n <L> - Listar pacientes");
            printf("\n <R> - Listar médicos");
            printf("\n <K> - Listar consultas");
            printf("\n <S> - Sair");
            printf("\n\n\n Opção:");
            gets(opcao);
            op = tolower(*opcao);
        } while (!strchr("pmadclrksh", op));
        switch (op) {
            case 'p': cadastrar_paciente(); break;
            case 'm': cadastrar_medico(); break;
            case 'a': marcar_consulta(); break;
            case 'd': desmarcar_consulta(); break;
            case 'c': confirmar_consulta(); break;
            case 'l': listar_pacientes(); break;
            case 'r': listar_medicos(); break;
            case 'k': listar_consultas(); break;
            case 's': exit(0);
        }
    } while (1);
}

// Funções

void abrir(char tipo[3], FILE **fp, char nome_arquivo[20]) {
    if ((*fp = fopen(nome_arquivo, tipo)) == NULL) {
        printf("\n Este arquivo nao pode ser aberto, verificar por favor.\n");
        getch();
        exit(1);
}
}

void cadastrar_paciente(void) {
struct Paciente paciente;
abrir("ab+", &fp_pacientes, "pacientes.txt");
fseek(fp_pacientes, 0L, SEEK_END);
do {
    printf("\n Favor, digitar o nome do médico ou <FIM> para sair:\n\n");
    gets(medico.nome);

    if ((strcmp(medico.nome, "fim") != 0) && (strcmp(medico.nome, "FIM") != 0)) {
        printf("\n Digite o CRM do médico: ");
        gets(medico.crm);
        printf("\n Digite a especialidade do médico: ");
        gets(medico.especialidade);
        printf("\n Digite o horário de atendimento do médico: ");
        gets(medico.horario_atendimento);
        if (fwrite(&medico, sizeof(struct Medico), 1, fp_medicos) != 1) {
            printf("\n Erro de gravacao!!");
            getch();
        } else {
            printf("\n Gravacao feita com sucesso...\n\n");
        }
    }
} while ((strcmp(medico.nome, "fim") != 0) && (strcmp(medico.nome, "FIM") != 0));
fclose(fp_medicos);
}

void marcar_consulta(void) {
// Implemente a função de marcar consulta aqui.
}

void desmarcar_consulta(void) {
// Implemente a função de desmarcar consulta aqui.
}

void confirmar_consulta(void) {
// Implemente a função de confirmar consulta aqui.
}

void listar_pacientes(void) {
// Implemente a função de listar pacientes aqui.
}

void listar_medicos(void) {
// Implemente a função de listar médicos aqui.
}

void listar_consultas(void) {
// Implemente a função de listar consultas aqui.

void marcar_consulta(void) {
    // Implemente a função de marcar consulta aqui.
}

void desmarcar_consulta(void) {
    // Implemente a função de desmarcar consulta aqui.
}

void confirmar_consulta(void) {
    // Implemente a função de confirmar consulta aqui.
}

void listar_pacientes(void) {
    // Implemente a função de listar pacientes aqui.
}

void listar_medicos(void) {
    // Implemente a função de listar médicos aqui.
}

void listar_consultas(void) {
    // Implemente a função de listar consultas aqui.
}

}