#include<stdio.h>
void main()
{    int a[100],b[100],c[100],d,e,i,g,j,k,temp=0;
     printf("Enter the number of elements in first array:");
     scanf("%d",&d);
     printf("\nEnter the first array:");
     for(i=0;i<d;i++)
     scanf("%d",&a[i]);
     for(i=0;i<d;i++)
     {  for(j=i+1;j<d;j++)
        {
          if(a[i]>a[j])
          {   temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
         }

      }

     printf("\nThe first sorted array is:\n");
     for(i=0;i<d;i++)
     printf("%d\t",a[i]);


     printf("\nEnter the number of elements in second array:");
     scanf("%d",&e);
     printf("\nEnter the second array:");
     for(i=0;i<e;i++)
     scanf("%d",&b[i]);
     for(i=0;i<e;i++)
     {  for(j=i+1;j<e;j++)
        {
          if(b[i]>b[j])
          {   temp=b[i];
              b[i]=b[j];
              b[j]=temp;
           }
         }

      }

     printf("\nThe second sorted array is:\n");
     for(i=0;i<e;i++)
     printf("%d\t",b[i]);


     printf("\n\nThe combined sorted array is:");
     for(i=0;i<d;i++)
     {   c[i]=a[i];
     }
     k=d;
     for(i=0;i<e;i++)
     {   c[k]=b[i];
         k++;
     }
     for(i=0;i<(e+d);i++)
     {  for(j=i+1;j<(e+d);j++)
        {
          if(c[i]>c[j])
          {   temp=c[i];
              c[i]=c[j];
              c[j]=temp;
           }
         }

      }
     for(i=0;i<(e+d);i++)
     printf("%d\t",c[i]);
}
