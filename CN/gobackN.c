#include<stdio.h>
int fs,ws,n,m,i,ac;
void ack();
void send(int);
void main()
{
    n=1;
    printf("Enter window size:");
    scanf("%d",&ws);
    printf("Enter frame size:");
    scanf("%d",&fs);
    m = ws;
    for(i=n;i<=m;i++)
    {
        send(i);
    }
    ack();
}
void send(int a)
{
    printf("Frames sent[%d]=>\n",a);
}
void ack()
{
    if(n<=fs)
    {
        printf("ack:");
        scanf("%d",&ac);
    }
    if(ac==0)
    {
        printf("time expired resening frames");
        for(i=n;i<=m;i++)
        {
            send(i);
        }
        ack();
    }
    else if(ac == n)
    {
        printf("<--[%d] ack\n" ,ac);
        n++;
        if(m<fs)
        {
            m++;
            send(m);
        }
        ack();
    }
}