int h,w;

void printMap(int** map)//выводит состояние
{
  for(int i=0;i<h;i++)
  {
    for(int j=0;j<w;j++)
      if(map[i][j]) putchar('*');
      else putchar(' ');
    putchar('\n');
  }
  putchar('\n');
}
