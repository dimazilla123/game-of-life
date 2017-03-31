int h,w;

void getNeiborsCoords(int x,int y,
		      int xn[8],int yn[8])//коор-ды соседей в массивы
{
  int n=0;
  for(int i=-1;i<2;i++)
    for(int j=-1;j<2;j++)
      if(i!=0 && j!=0)
      {
	xn[n]=x+j;yn[n]=y+i;
	n++;
      }
  for(int i=0;i<8;i++)
  {
    if(yn[i]<0) yn[i]=h-1;//подправляем коорды
    if(xn[i]<0) xn[i]=w-1;
  }
  for(int i=0;i<8;i++)
    {
    printf("%d %d\n",xn[i],yn[i]);
  }
}
