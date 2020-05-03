#include
#include

#define MAX_BUF 120

int main (int argc, char* argv[])
{
    FILE *f;
    int n1=0;
    int n2=0;
    char filename[80];
    char buf[MAX_BUF];
    
    printf("Indique o nome da arquivo:");
    gets(filename);

    f=fopen(filename,"r");
    if (f==NULL)
    {
        printf("Erro na abertura do arquivo");
        return 1;
    }
    while (! feof(f))
    {
        fgets(buf,MAX_BUF, f);
        n1++;
        if (strstr(buf, "pirntf")>0){
            n2++;
            printf("> %s", buf);
        }
        else
            printf("* %s", buf);
    }
    fclose(f);
    printf("\n\nO arquivo tem %d linhas, das quais %d com \"printf\"\n",n1,n2);
    return 0;

}