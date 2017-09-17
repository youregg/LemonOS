#include<stdio.h>
#define N 100
int flag[N] = { 0 };
int main()
 {
     int n = 0, m = 0,r,t;
     char buf[128];
     printf("Sum:");
     r=read(0,buf,128);
     n=getNum(buf);
     printf("deathNumber:");
     t=read(0,buf,128);
     m=getNum(buf);
     int i = 0;
     int count = 0;  //记录出圈的人数
     int num = 0;    //报数器
     for (i = 1; i <= n; i++) {
	flag[i] = 1;	
	}
     while (count < n - 1) {
	 for (i = 1; i <= n; i++) {
              if (1 == flag[i]) {
	      num++;
		if (num == m) {
		 printf("outNum:");
		 printf("%d\n", i);
		 count++;
		 flag[i] = 0;
		 num = 0;
				
	      }
		if (count == n - 1) {
				 break;			
		}	
	   }
        }	
     }
     for (i = 1; i <= n; i++) 
     {
		       
      if (1 == flag[i]) {
	  printf("The last one is : %d\n", i);		
	}	
     }
    return 0;
}
int getNum(char*buf){
   int ten=1,i=0,res=0;
   for(i=0;i<strlen(buf)-1;i++){
      ten*=10;
}
  for(i=0;i<strlen(buf);i++){
     res+=(buf[i]-'0')*ten;
     ten/=10;
  }
  return res;
}
