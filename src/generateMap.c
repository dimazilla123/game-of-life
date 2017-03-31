int h,w;

void generateMap(int** map)
{
  srand(time(((void*)0)));
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      map[i][j]=rand()%2;
}
