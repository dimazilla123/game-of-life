#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <stdlib.h>

int h,w;

int main(int argc,char** argv)
{
  if(argc<3)
  {
    printf("Usage: ./a.out HEIGHT WEIGHT\n");
    return 0;
  }
  h=atoi(argv[1]);w=atoi(argv[2]);
  int** map=(int**)malloc(sizeof(int*)*h);
  for(int i=0;i<h;i++)
    map[i]=(int*)malloc(sizeof(int)*w);
  generateMap(map);
  printMap(map);
  int n=0;
  while(1)
  {
    printf("%d\n",n);
    updateMap(map);
    printMap(map);
    if(getchar()=='q') break;
    n++;
  }
  return 0;
}
