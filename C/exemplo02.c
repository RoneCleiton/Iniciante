#include <stdio.h>
#include <string.h>

int main(){

    char str1[]="isso",str2[]=" com aquilo";

    printf("\n");
    printf("[+] Surgiu na década de 70, criada por Dennis Ritch.\n");
    printf("[+] C é uma liguagem ESTRUTURADA, ou seja, não há Orientação há Objetos.\n");
    printf("[+] C é Case Sensitive.\n");
    printf("[+] 1º define o cabeçalho/bibliotecas.\n");
    printf("[+] 2º define as variáveis globais, se houverem.\n");
    printf("[+] 3º define as funções extras, se houverem.\n");
    printf("[+] 4º define a função principal do programma.\n");
    printf("[+] Olá mundo em C, o básico:\n\n");
    printf("\t#include <stdio.h>\n\tint main(){\n\tprintf(\"Terminal Root\\\");\n\treturn 0;\n\t}\n\n");
    printf("[+] No cabeçalho incluimos a biblioteca stdio.h entrada e saída I\\O\n");
    printf("[+] A função main() é a função principal, e é do tipo inteira: int \n");
    printf("[+] Para imprimir usamos: printf(\"CONTEÚDO\");\n");
    printf("[+] Para escapar as aspas/barras, usamos uma barra \\ \n");
    printf("[+] O ponto e vírgula no final é necessário para sintaxe, o \\n, pula uma linha no prompt\n");
    printf("[+] return 0; Serve para informar ao compilador que ocorreu tudo certo com a função main().\n");
    printf("[+] As funções ficam entre chaves {}\n");
    printf("[+] Slve o arquivo com o nome desejado, ex.: arquivo.c\n");
    printf("[+] Depois compile-o com o comando: gcc arquivo.c -o arquivo \n");
    printf("[+] E por fim, rode o aplicativo: ./arquivo\n");
    printf("[+] Comentáros, podem ser de 2 formas: // barra barra ou /* barra asterisco, asterisco barra, para blocos de comentários*/\n");
    printf("[+] Se houver um erro, o C informa a linha, experimente colocar uma barra sem escapar\n\taparecerá mais ou menos isso, referente a linha 25: \n\n");
    printf("[+] \taprender-c.c:25:9: warning: unknown escape sequence: '040'\n\n");
    printf("[+] Tipos de dados:\n\n\t• A linguagem C possui 5 (cinco) tipos básicos de dados: char, int, float, void e double.\n\t• Para cada tipo de dado existem modificadores de tipo, estes são 4 (quatro): signed, unsigned, long e short.\n\t• Lembre-se, para o float nenum modificador pode ser aplicado; assim como para o double podemos aplicar apenas o long.\n\n");
    printf("[+] Declarar Variável: tipo_da_variavel nome_da_variavel = valor_inicial_da_variavel;\n");
    printf("[+] Declarar várias Variáveis do mesmo tipo: tipo_da_variavel nome_var1 = valor1, nome_var2 = valor2;\n");
    
    int num1 = 10, num2 = 3;
    float result = num1 - num2;

    printf("O valores sao: %i, %i e %f", num1, num2, result);
    
}