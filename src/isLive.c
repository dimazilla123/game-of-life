int h,w;

int isLive(int** map,int x,int y)
{
  int count=countNeibours(map,x,y);
  int res;
  if(!map[y][x] && count==3) res=1;
  else res=0;
  if(map[y][x] && (count==2 || count==3)) res=1;
  else res=0;
  return res;
}