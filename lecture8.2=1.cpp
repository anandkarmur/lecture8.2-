

#include <stdio.h>

int main()
{
    int i,j,n,m;
     printf ("enter value of n and m :");
     scanf("%d %d",&m,&n);
     int a1[m];
     int a2[n];
     
     for(i=0;i<m;i++)
     {  
        printf("enter %d element of a1 :",i+1);
        scanf("%d",&a1[i]);   
     }
     
      for(j=0;j<n;j++)
      {
        
        printf("enter %d element of a2: ",j+1);
        scanf("%d",&a2[j]);
      }
      
       for(i=0;i<m;i++)
       {
        
        printf("%d \t",a1[i]);
       }
       
       
        for(j=0;j<n;j++)
        {
        
        printf("%d \t",a2[j]);
        
}

    
}
