 #include <stdio.h>

 int main()
 {
     int c=0,i,ld=0,a;
     for(i=1;i<=500;i++)
     {
         int sum=0;
        while(i>0){
             i=i/10;
            c++;
        }
        ld=i%10;
         for(int x=1;x<=c;x++){
         a=ld*x;
         }
         sum=sum+a;
         if(sum==i){
            printf("%d",sum);
         }
     }
    
 }

// ALMOST

