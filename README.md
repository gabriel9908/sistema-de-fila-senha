# Sistema de Gerenciamento de Filas de Banco

![Queue Management System](https://github.com/gabriel9908/sistema-de-fila-senha/blob/main/image1.png)
![Queue Management System](https://github.com/gabriel9908/sistema-de-fila-senha/blob/main/imagem3.png)
![Queue Management System](https://github.com/gabriel9908/sistema-de-fila-senha/blob/main/image2.png)


## Visão Geral

Este projeto consiste em um sistema de gerenciamento de filas de banco desenvolvido em linguagem C. Ele simula o funcionamento de um ambiente bancário, permitindo a geração de senhas para diferentes tipos de atendimento (comum, prioridade e rápido) e o atendimento dessas senhas de acordo com a disponibilidade de caixas.

## Funcionalidades Principais

- **Geração de Senhas**: Os usuários podem gerar novas senhas para atendimento, escolhendo entre os tipos de atendimento disponíveis.

- **Atendimento de Senhas**: Os atendentes podem selecionar uma senha para atendimento, indicando o número do caixa disponível. O sistema então seleciona a senha apropriada de acordo com o tipo de atendimento do caixa.

- **Visualização da Fila**: É possível visualizar a fila atual de senhas aguardando atendimento a qualquer momento.

## Estrutura do Código

O código fonte está organizado da seguinte forma:

- **Bibliotecas e Constantes**: Inclui as bibliotecas necessárias e define constantes utilizadas no programa.

- **Estruturas de Dados**: Define as estruturas necessárias para representar as senhas e a fila do banco.

- **Variáveis Globais**: Declara as variáveis globais utilizadas no programa.

- **Prototipação das Funções**: Declara os protótipos das funções utilizadas no programa.

- **Função Principal (main)**: Responsável por executar o loop principal do sistema, exibir o menu e chamar as funções correspondentes de acordo com a escolha do usuário.

- **Funções Auxiliares**: Contém as funções responsáveis por realizar as operações específicas do sistema, como adicionar senhas à fila, retirar senhas para atendimento e exibir a fila.

## Detalhes de Implementação

- **Geração de Senhas**: O sistema verifica se a fila está cheia antes de adicionar uma nova senha. Se estiver, exibe uma mensagem indicando que a fila está cheia.

- **Atendimento de Senhas**: Ao atender uma senha, o usuário informa o número do caixa disponível. O sistema então seleciona a senha apropriada de acordo com o tipo de atendimento do caixa e a remove da fila.

- **Visualização da Fila**: Exibe o tipo e o número de cada senha na fila atual.

## Conclusão

Este sistema oferece uma simulação simples e eficaz de um ambiente bancário, facilitando o gerenciamento de filas de atendimento. Embora não ofereça uma interface gráfica, seu código-fonte está disponível neste repositório para fins de aprendizado, contribuição e uso pessoal. Ele pode ser expandido e aprimorado com mais funcionalidades, como suporte a múltiplos caixas do mesmo tipo, capacidade dinâmica da fila e interface gráfica.

🚀 Divirta-se codando!

