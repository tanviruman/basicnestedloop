int n,row,col;
printf("Enter N=");
scanf("%d",&n);
for(row=1;row<=n-1;row++)
{
    for(col=1;col<=n-row;col++){

        printf(" ",col);

    }

    for(col=1;col<=row;col++){

        printf("%d",col);

    }
    printf("\n");
}

  return 0 ;
}
