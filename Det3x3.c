#include <stdio.h>
int main()
{
    int i,j,a[3][3],det;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("Enter Element at %d%d position ",i+1,j+1);
            scanf(" %d",&a[i][j]); }
         det=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])) - a[0][1]*(a[1][0]*a[2][2]- a[2][0]*a[1][2])+ a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
    printf("The Matrix:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %4d ",a[i][j]);
            }
        printf("\n");
    }
    printf("The diterminant of the above matrix is %d",det);
    return 0;
}