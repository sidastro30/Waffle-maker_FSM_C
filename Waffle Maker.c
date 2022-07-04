
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main()

{
	FILE*fp;
	FILE*fd;
    int tempTop, tempBottom, TopHeatOn=1,TopHeatOff=0, BottomHeatOn=1,
BottomHeatOff=0, count, i,j;


fp=fopen("Input.txt","r") ;
fd=fopen("Output.txt","w");
if (fp==NULL)
{
    printf("file is not found");
    exit(1);
}
printf("\n tempTop tempBottom\n");
fprintf(fd,"\n ToprpHeatOn TopHeatOff BottomHeatOn BottomHeatOff\n ");
for(j=1;j<=100;j++)
{

fscanf(fp,"%d %d",&tempTop, &tempBottom);

printf("\n   %d    %d",tempTop, tempBottom);



 if(tempTop>325)
 {
 	TopHeatOff=1;
 	TopHeatOn=0;
 

 printf("\n   %d    %d",TopHeatOn,TopHeatOff);
}
  else if(tempTop<275)
 {
 TopHeatOff=0;
 TopHeatOn=1;
 
 printf("\n %d %d",TopHeatOn,TopHeatOff);
 }

else 
{
	TopHeatOff=0;
    TopHeatOn=1;
}

  if(tempBottom>325)
 {BottomHeatOn=0;
  BottomHeatOff=1;
    printf("\n  %d  %d",BottomHeatOn,BottomHeatOff);
  }

  else if(tempBottom<275)
 { BottomHeatOn=1;
  BottomHeatOff=0;
  
  printf("\n %d %d", BottomHeatOn,BottomHeatOff);
  }
else 
{
	BottomHeatOn=1;
    BottomHeatOff=0;
    
}

 fprintf(fd,"\n       %d         %d             %d            %d\n",TopHeatOn,TopHeatOff, BottomHeatOn,BottomHeatOff);

}
fclose(fp);
//fclose(fd);
getch();



