#include<stdio.h>
#include<string.h>
int float_to_int(float f)
{
  float *p=&f;
  int a = *((int *)p);
  int sign=a & (1<<31);
  int s=0;
 
  int exp = a & 0x7f800000;
  exp>>=23;
  exp-=127;
  int last = a & 0x007fffff;
  last = last | (1<<23);
  last >>=((23+1)-(exp+1));

  if(sign != 0)
  {  
    return (-1)*last;
  }
  else
  {
    return last;
  }
}
void main()
{
  float f;
  scanf("%f",&f); 
  unsigned int b = float_to_int(f);
  printf("%d\n",b);
}
/*
int float_to_int(float f)
{
  unsigned int a;
  memcpy(&a,&f,sizeof(float));

  int s = a & (1<<31);  //����λ
  int sign;
  if(s != 0)  
    {  
        sign=-1;;  
    }  
    else  
    {  
        sign=1;  
    }  
  int exp = 0;  //ָ��λ
  for(int i=23; i<31; i++)  
    {  
       exp |= (a & (1<<i));  
    }   

    exp >>= 23;  
    exp -= 127;
	//β��λ
  int last=0;
  last=(a<<9)>>9;
  last = last | (1<<23);

  int result =( last >> exp);

	return result;
}
  void main()
{
  float f;
  scanf("%f",&f); 
  unsigned int b = float_to_int(f);
  printf("%d\n",b);
}

int float_to_int(float f)
{
  unsigned int x;
  memcpy(&x,&f,sizeof(float));

  if(f>0)
  {
     a[i]=0;
  }
  else
  {
     a[i]=1;
   }
  i+=1;
  while(x!=0)  
  {
    b = x%2;
	a[i]=b;
	i++;
	x/=2;
  }
  
  for(j=1;j<= i/2;j++)
  {
    int temp = a[j];
	a[j] = a[i-j];
	a[i-j] = temp;
  }
  for(j=2;j<=7;j++)
  {
	a[1]=0;
    a[7+j]=a[j];
	a[j]=0;
  }
  
  //��������õ���ȷ�������ֵĶ�����
  return 0;
}
void main()
{
  float f;
  scanf("%f",&f); 
  printf("%d\n",float_to_int(f));
}



void main()
{
 float n;
 scanf("%f",&n);
 int x = (int)n;
 float y = n - (float)x;
 printf("%d\n%f\n",x,y);
}
 
void main()  
{  
    int b,i,c=0,a[30];  
    scanf("%d",&b);  
    while(b!=0)  
    {  
        i=b%2;  
        a[c]=i;  
        c++;  
        b=b/2;  
    }  
    c--;//��Ϊc����������ݵĳ��ȶ��±�Χ��0~c-1  
    for(;c>=0;c--)//���������Ϊ������ֶ�Ӧ�Ķ�����  
    {  
        printf("%d",a[c]);    
    }  
    printf("\n");  
} 
int float_to_int(float *f1)
{
   //float **p = &f1;
   
   //printf("%p",*p);
   return 0;
}

void main()
{
  float f=12.125;
  float *p = &f;
  printf("%p\n",p);
  //printf("%p",float_to_int(p));
}
*/
