int h,w;

void updateMap(int **map)//обновление состояния
{
  int** newmap=(int**)malloc(h*sizeof(int*));
  for(int i=0;i<h;i++) newmap[i]=(int*)malloc(sizeof(int)*w);
  
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      if(isLive(map,i,j)) newmap[i][j]=1;
      else newmap[i][j]=0;
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      map[i][j]=newmap[i][j];
  free(newmap);
}
