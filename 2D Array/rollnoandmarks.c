#include<stdio.h>

int main()
{
    int r;
    printf("Enter no. of students:");
    scanf("%d",&r);

    int a[r][3];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(j==0){
            printf("Enter roll no.");
            scanf("%d",&a[i][j]);
            }
            if(j==1){
            printf("Enter Physics Marks:");
            scanf("%d",&a[i][j]);
            }
            if(j==2){
            printf("Enter Chemistry Marks:");
            scanf("%d",&a[i][j]);
            }
            if(j==3){
            printf("Enter Mathematics Marks:");
            scanf("%d",&a[i][j]);
            }
        }
        
    }
    
}