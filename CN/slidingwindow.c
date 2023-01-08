#include<stdio.h>
void main()
{
    int w,f,i,frames[20];
    printf("Enter window size:");
    scanf("%d",&w);
    printf("Enter frames size:");
    scanf("%d",&f);
    printf("Enter frames :");
    for(i=0;i<=f;i++)
    {
        scanf("%d",&frames[i]);
    }
    printf("\n after sending %d frames at each stag sender waits for ack ",w);
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {
            printf("%d",frames[i]);
            printf("Ack of above frames sent is received by res\n");
        }
        else
        {
            printf("%d",frames[i]);
        }
        if(f%w==0)
        {
            printf("Ack of above frames sent is res bysender");

        }
    }
}