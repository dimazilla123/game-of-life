int h,w;

void getNeiborsCoords(int x,int y,
		      int xn[8],int yn[8])//коор-ды соседей в массивы
{
  int n=0;
  for(int i=-1;i<=1;i++)
    for(int j=-1;j<=1;j++)
      if(i!=0 || j!=0)
      {
	xn[n]=x+j;yn[n]=y+i;
	n++;
      }
  for(int i=0;i<8;i++)
  {
    if(yn[i]==-1) yn[i]=h-1;//подправляем коорды
    if(xn[i]==-1) xn[i]=w-1;
    if(yn[i]==h) yn[i]=0;
    if(xn[i]==w) xn[i]=0;
  }
}
