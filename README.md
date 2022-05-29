# MATRICULA-ATV1
Repositório criado como requisito parcial da aprovação da disciplina de Sistemas Embarcados I

*** 02-Roteiro LAB-02 ***

Neste roteiro foram realizados passos a fim de configurar a inicialização de um programa capaz de piscar um LED na placa STM32F411 Blackpill.
A inicialização foi separada em um arquivo diferente do que será rodado o programa para piscar o LED. Ela está com o nome "startup.c", enquanto que o programa para piscar o LED está com o nome "main.c".
Ambos precisam ser compilados. Para tal, foi usado o programa arm-none-eabi-gcc. A fim de se evitar repetições de comandos, foi utilizado o utilitário "make". Assim, com apenas o comando "make clean" e depois "make all" é possível recompilar cada alteração de código feito em quaisquer arquivos dentro da mesma pasta em questão, bastando apenas que o script seja escrito num arquivo "Makefile".
São necessárias as inicializações do stack pointer, tabela de vetores de interrupção bem como códigos que deverão ser executados antes de o programa principal (piscar LED) ser executado.
Para tanto, foi consultado o Manual de Referência da placa a fim de se saber com quais valores devem ser configuradas cada valor de registrador.