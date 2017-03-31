int h,w;


int countNeibours(int** map,int x,int y)
{
  int xn[8],yn[8];//коор-ды соседних клеток
  getNeiborsCoords(x,y,xn,yn);
  int res=0;
  for(int i=0;i<8;i++)
    if(map[yn[i]][xn[i]]) res++;
  return res;
}