#include<stdio.h>
#include<conio.h>
#include<string.h>

char** gettxt();
void laba(char**);

main()
{

char **txt;
int i,j;

printf("Programma pods4itivaet kolli4estvo vhozhdeniy kazhdogo slova v text\n(slovom s4itetsia gruppa simvolov ograni4ennih 1 ili neskolkimi probelami)");
printf("\nVvedite text:\n");
txt=gettxt();
laba(txt);
getch();
}

char** gettxt()
{
char **txt, buf[128]="A";
int i=0,n,cht=1;
txt=(char**)malloc(sizeof(char*));
 while(strlen(buf)!=0)
 {

 gets(buf);
 n=strlen(buf);
 txt[i]=(char*)malloc((n+1)*sizeof(char));
 strcpy(txt[i],buf);
 txt=(char**)realloc(txt,(++cht)*sizeof(char*));
 i++;
 }
 txt[i]=NULL;
return txt;
}

void laba(char **txt)
{
int i=0;
char **words;
char *pch;
int slov=0;
int y,kol;
char* buf;
words=(char**)malloc(sizeof(char*));
words[0]=NULL;
 while(*(txt+i))
 {
 pch=strtok(*(txt+i)," ,.-");
  while (pch!=NULL)
  {
  words=(char**)realloc(words,(slov+1)*sizeof(char*));
  words[slov]=(char*)malloc((strlen(pch)+1)*sizeof(char));
  words[slov]=pch;
  pch = strtok(NULL, " ,.-");
  ++slov;
  words[slov]=NULL;
  }
 ++i;
 }

 buf=(char*)malloc(sizeof(char));
 for(i=0;i<=slov;++i)
 {
 if(words[i]==NULL) continue;
  {
  buf=(char*)realloc(buf,(strlen(words[i])+1)*sizeof(char));
  strcpy(buf,words[i]);
  kol=0;
   for(y=0;y<=slov;++y)
   {
    if(words[y]==NULL) continue;
    if(strcmp(buf,words[y])==0)
    {
    kol++;
    words[y]=NULL;
    }
   }
  if((buf)!=1) printf("slovo='%s' vstretilos' %d raz\n",buf,kol);
  }
 }
for(int z=0;z<=slov;++z)
{
free(words[z]);
}
free(words);
free(buf);
}
