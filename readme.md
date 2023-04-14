## Sistema de Gerenciamento Hospitalar
Este projeto é um Sistema de Gerenciamento Hospitalar desenvolvido em C que permite cadastrar pacientes, médicos, marcar, desmarcar e confirmar consultas, além de listar pacientes, médicos e consultas.

## Requisitos
- Compilador C (GCC, MinGW ou similar)
- Sistema Operacional compatível (Windows, Linux, macOS)
- Funcionalidades
- Cadastrar paciente
- Cadastrar médico
- Marcar consulta
- Desmarcar consulta
- Confirmar consulta
- Listar pacientes
- Listar médicos
- Listar consultas
- Estrutura do Projeto

## O projeto utiliza registros (structs) para armazenar as informações de pacientes, médicos e consultas:

- struct Pessoa: Armazena as informações de pacientes e médicos.
- struct Consulta: Armazena as informações de consultas.
- struct Medico: Armazena as informações específicas de médicos, como CRM e horário de atendimento.

## As informações são armazenadas em arquivos texto:

- pacientes.txt: Armazena os dados dos pacientes.
- medicos.txt: Armazena os dados dos médicos.
- consultas.txt: Armazena os dados das consultas.

## Como compilar e executar
Abra o terminal ou prompt de comando no diretório do projeto.

## Compile o projeto com o comando:

No Windows (usando GCC ou MinGW): gcc sistema_hospitalar.c -o sistema_hospitalar.exe
No Linux ou macOS: gcc sistema_hospitalar.c -o sistema_hospitalar
Execute o programa:

No Windows: sistema_hospitalar.exe
No Linux ou macOS: ./sistema_hospitalar

## Como usar
O sistema apresenta um menu com as opções de funcionalidades. Basta digitar a letra correspondente à opção desejada e seguir as instruções na tela. Para sair do programa, digite "S" no menu principal.

## Contribuições
Sinta-se à vontade para contribuir com o projeto, melhorando o código ou adicionando novas funcionalidades. Para isso, faça um fork do projeto, crie sua branch, implemente as melhorias e envie um pull request.
