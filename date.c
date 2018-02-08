#include<stdio.h>
void day(int,int,int,int,int,int);
int month(int,int);
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
int a,b,c,d,e,f;
scanf("%d/%d/%d",&a,&b,&c);
scanf("%d/%d/%d",&d,&e,&f);
if(f>=c)
		day(c,f,b,e,a,d);
    	else
        	day(f,c,e,b,d,a);
  getch();
}
void day(int y1,int y2,int x1,int x2,int d1,int d2)
  {
  int count=0,i;
    for(i=y1;i<y2;i++)
        {
            if(i%4==0)
                count+=366;
            else
                count+=365;
        }
        count-=month(x1,y1);
        count-=d1;
        count+=month(x2,y2);
        count+=d2;
        if(count<0)
            count=count*-1;
        printf("%d",count);
  }
int month(int a,int b)
  {
  int x=0,c;
    for(c=0;c<a-1;c++)
        {
            if(c==1)
            {
                if(b%4==0)
                    x+=29;
                else
                    x+=28;
            } 
            else
                x += m[c];
        }
  return(x);
 }
