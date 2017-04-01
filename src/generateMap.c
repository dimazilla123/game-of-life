int h,w;

void generateMap(int** map)
{
  printf("Enter N of life cells: ");
  int n;
  scanf("%d",&n);
  int x,y;
  for(int i=0;i<n;i++)
  {
    scanf("%d%d",&x,&y);
    map[y][x]=1;
  }
    
}
