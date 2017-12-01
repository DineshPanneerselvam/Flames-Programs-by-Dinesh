//Program Of My Dream Created BY P.DINESH Acheived on 04.02.2017 in PDS Laboratory SEC
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *save;
    char a[25],b[25],same[25],t,fin[10],res[6]="flames";
    int x=0,i,j,d=1,h=6,k=0,g,r=0,q=0,w=0,l,m,n;
    save = fopen("saved.txt","a");
    printf("\t\t\tFLAMES CALCULATOR\n\t\t\t\t\t-by Dinesh\n\n");
    printf("\nEnter Your Sweet Name:");
    gets(a);
    printf("\nEnter Crush Name:");
    gets(b);
    fprintf(save,"%s\t%s",a,b);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                same[x]=a[i];
                x++;break;
            }
        }
    }
    same[x]='\0';
    for(i=1;i<x;i++)
    {
        for(j=0;j<(x-i);j++)
        {
            if(same[j]>same[j+1])
            {
                t=same[j];
                same[j]=same[j+1];
                same[j+1]=t;
            }

        }
    }
    same[x]='\0';
    j=0;
    for(i=0;i<x;i++)
    {
        if(same[i]!=same[i+1])
        {
            for(l=0;b[l]!='\0';l++)
            {
                if(same[i]==b[l])
                    q++;
            }
            for(m=0;m<x;m++)
            {
                if(same[i]==same[m])
                    w++;
            }
            if(q==w)
            {
                for(n=0;n<q;n++)
                {
                    fin[j]=same[i];
                    j++;
                }
            }
            else
            {
            fin[j]=same[i];
            j++;
            }
            q=0;w=0;
        }
    }
    fin[j]='\0';
    x=strlen(fin);
    x=((strlen(a)+strlen(b))-(2*x));
    printf("\nCOMMEN WORD=%s\t\tFLAMES NUMBER=%d\n",fin,x);
    for(i=0;res[1]!='\0';i++)
    {
        for(j=0;j<(6-k);j++)
        {
            if(x==d)
            {
                printf("\n%d",j);
                for(g=0;g<(6-k);g++)
                {
                    if(res[j]!=res[g])
                    {
                        res[r]=res[g];
                        r++;
                    }


                }
                res[r]='\0';k++;r=0;d=1;j--;   printf("-%s",res);
            }
            else

                d++;
        }

    }
    res[1]='\0';
    printf("\n%s",res);
    switch(res[0])
    {
        case 'f':
            printf("\n\nThe Relationship Between You and Your Crush is Friend");fprintf(save,"\t\t-FRIEND\n");break;
        case 'l':
            printf("\n\nThe Relationship Between You and Your Crush is Love");fprintf(save,"\t\t-LOVE\n");break;
        case 'a':
            printf("\n\nThe Relationship Between You and Your Crush is Affection");fprintf(save,"\t\t-AFFECTION\n");break;
        case 'm':
            printf("\n\nThe Relationship Between You and Your Crush is Marriage");fprintf(save,"\t\t-MARRIAGE\n");break;
        case 'e':
            printf("\n\nThe Relationship Between You and Your Crush is Enemy");fprintf(save,"\t\t-ENEMY\n");break;
        case 's':
            printf("\n\nThe Relationship Between You and Your Crush is Sister");fprintf(save,"\t\t-SISTER\n");break;
    }
    getch();



}
