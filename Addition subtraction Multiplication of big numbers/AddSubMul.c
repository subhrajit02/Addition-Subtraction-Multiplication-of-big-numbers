#include<stdio.h>
void addition(int*,int*,int*);
void multiplication(int*,int*,int*,int);
void subtraction(int*,int*,int*);
void main()
{
	char a[310],b[310];
	int flag=1,num,k,result,count=0,flag1=1,fun,i,number,count1,count2,j,range;
	char a1,b1;
	int lptr1[80],lptr2[80],lptr3[80];
	while(flag1==1)
	{
		for(i=0;i<310;i++)
		{
			a[i]='\0';
		}
		for(i=0;i<310;i++)
		{
			b[i]='\0';
		}		


		for(i=0;i<80;i++)
		{
			lptr1[i]=-1;
		}
		for(i=0;i<80;i++)
		{
			lptr2[i]=-1;
		}
		for(i=0;i<80;i++)
		{
			lptr3[i]=-1;
		}

		printf("Enter the number of function\n 1.Mltiplication\n 2.Addition\n 3.Subtraction\n");
		scanf("%d",&fun);
		flag=1;
		switch(fun)
		{
		case 1:
		printf("Enter the first number");
		scanf("%s",a);
		i=308;
		j=79;
		while(a[i]=='\0')
		{
			i--;
		}
		while(i>0)
		{
			num=((int)a[i])-48;
			lptr1[j]=num;
			i--;
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*1000;
				i--;
			}
			j--;
		}
		

		printf("Enter the second number");
		scanf("%s",b);
		j=i;
		i=308;
		j=79;



		count=0;
		while(b[i]=='\0')
		{
			i--;
		}
		while(i>0)
		{
			num=((int)b[i])-48;
			lptr2[j]=num;
			i--;
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*1000;
				i--;
			}
			j--;
			count++;
		}




		printf("The multiplication of\n");
		printf("%s",a);
		printf("\n & \n");
		printf("%s",b);
		printf("\n is \n");
		multiplication(lptr1,lptr2,lptr3,count);

		printf("\n");


		


			if((a[0]=='+')&&(b[0]=='-'))
			{
				printf("-");
			}
			if((a[0]=='-')&&(b[0]=='+'))
			{
				printf("-");
			}

		i=0;
		while(lptr3[i]==-1)
		{
			i++;
		}
		while(i<=79)
		{
			if(lptr3[i]<1000)
			{
				printf("0");
			}
			if(lptr3[i]<100)
			{
				printf("0");
			}
			if(lptr3[i]<10)
			{
				printf("0");
			}
			printf("%d",lptr3[i]);
			i++;
		}
		printf("\n");

		break;




		case 2:
		printf("Enter the first number");
		scanf("%s",a);
		i=308;
		j=79;
		while(a[i]=='\0')
		{
			i--;
		}
		while(i>0)
		{
			num=((int)a[i])-48;
			lptr1[j]=num;
			i--;
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*1000;
				i--;
			}
			j--;
		}
		printf("Enter the second number");
		scanf("%s",b);
		j=i;
		i=308;
		j=79;
		while(b[i]=='\0')
		{
			i--;
		}
		count=0;
		while(i>0)
		{
			num=((int)b[i])-48;
			lptr2[j]=num;
			i--;
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*1000;
				i--;
			}
			j--;
		}
		printf("\n");
		printf("The addition of\n");
		printf("%s",a);
		printf("\n & \n");
		printf("%s",b);
		printf("\n is \n");
				
		if(a[0]!=b[0])
		{
			subtraction(lptr1,lptr2,lptr3);
			if((j<i)&&(b[0]=='-'))
			{
				printf("-");
			}
			if((j==i)&&(b[0]=='-')&&(a[1]<b[1]))
			{
				printf("-");
			}
			if((a[0]=='-')&&(j>i))
			{
				printf("-");
			}

			if((j==i)&&(a[0]=='-')&&(a[1]>b[1]))
			{
				printf("-");
			}
		}
		else
		{
			if(a[0]=='-')
			{
				printf("-");
			}
		printf("\n");
			addition(lptr1,lptr2,lptr3);
		}
		i=0;
		while(lptr3[i]==-1)
		{
			i++;
		}
		while(i<=79)
		{
			if(lptr3[i]<1000)
			{
				printf("0");
			}
			if(lptr3[i]<100)
			{
				printf("0");
			}
			if(lptr3[i]<10)
			{
				printf("0");
			}
			printf("%d",lptr3[i]);
			i++;
		}
		printf("\n");
		break;










		case 3:
		printf("Enter the first number");
		scanf("%s",a);
		i=308;
		j=79;
		while(a[i]=='\0')
		{
			i--;
		}
		while(i>0)
		{
			num=((int)a[i])-48;
			lptr1[j]=num;
			i--;
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)a[i])-48;
				lptr1[j]=lptr1[j]+num*1000;
				i--;
			}
			j--;
		}



		printf("Enter the second number");
		scanf("%s",b);
		j=i;
		printf("j is %d\n",j);
		i=308;
		j=79;
		while(b[i]=='\0')
		{
			i--;
		}
		count=0;
		while(i>0)
		{
			num=((int)b[i])-48;
			lptr2[j]=num;
			i--;
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*10;
				i--;
			}
			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*100;
				i--;
			}

			if(i>0)
			{
				num=((int)b[i])-48;
				lptr2[j]=lptr2[j]+num*1000;
				i--;
			}
			j--;
		}






		printf("The subtraction of\n");
		printf("%s",a);
		printf("\n & \n");
		printf("%s",b);
		printf("\n is \n");
		if(a[0]==b[0])
		{
			subtraction(lptr1,lptr2,lptr3);
			if((count1<count2)&&(a[0]=='+'))
			{
				printf("-");
			}
			if((count1>count2)&&(a[0]=='-'))
			{
				printf("-");
			}
			if((count1==count2)&&(a[0]=='+')&&(a[1]<b[1]))
			{
				printf("-");
			}
			if((count1==count2)&&(a[0]=='-')&&(a[1]>b[1]))
			{
				printf("-");
			}
		}
		else
		{
			addition(lptr1,lptr2,lptr3);
			if(a[0]=='-')
			{
				printf("-");
			}
		}
		

		i=0;
		while(lptr3[i]==-1)
		{
			i++;
		}
		while(i<=79)
		{
			if(lptr3[i]<1000)
			{
				printf("0");
			}
			if(lptr3[i]<100)
			{
				printf("0");
			}
			if(lptr3[i]<10)
			{
				printf("0");
			}
			printf("%d",lptr3[i]);
			i++;
		}
		
		printf("\n");
		break;


		}
		printf("Enter 1 to add, subtract or multiply more numbers");
		scanf("%d",&flag1);
	}
}
void addition(int*lptr1,int*lptr2,int*lptr3)
{
	int num1,num2,carry=0,num,i;
	i=79;
	while((lptr1[i]!=-1)&&(lptr2[i]!=-1))
	{
		if(i>=0)
		{
		num1=lptr1[i];
		num2=lptr2[i];
		num=num1+num2+carry;
		if(num>9999)
		{
			carry=num/10000;
			num=num%10000;
			lptr3[i]=num;
		}
		else
		{
			carry=0;
			lptr3[i]=num;
		}
		i--;
		}
	}

	if(i>=0)
	{
	if(lptr1[i]!=-1)
	{
		while(lptr1[i]!=-1)
		{
			num1=lptr1[i];
			num=num1+carry;
			if(num>9999)
			{
				carry=num/10000;
				num=num%10000;
				lptr3[i]=num;
			}
			else
			{
				carry=0;
				lptr3[i]=num;
			}
			i--;
		}
	}
	}

	if(i>=0)
	{
	if(lptr2[i]!=-1)
	{
		while(lptr2[i]!=-1)
		{
			num2=lptr2[i];
			num=num2+carry;
			if(num>9999)
			{
				carry=num/10000;
				num=num%10000;
				lptr3[i]=num;
			}
			else
			{
				carry=0;
				lptr3[i]=num;
			}
			i--;
		}
	}
	if(carry!=0)
	{
		lptr3[i]=carry;
	}
	}


		
}







void multiplication(int*lptr1,int*lptr2,int*lptr3,int count)
{
	int num1,num2,carry=0,num,count1,count2,i,j,k;
	int lptr4[80],lptr5[80];
	int arr[count][80];
	//printf("count is %d",count);
	i=79;
	count1=0;
	while(lptr2[i]==-1)
	{
		i--;
		count++;
	}
	for(count1=0;count1<count;count1++)
	{
		for(i=0;i<80;i++)
		{
			arr[count1][i]=-1;
		}
	}
	count1=0;
		i=79;
		while(lptr2[i]!=-1)
		{
			j=79;
			k=79;
			for(count2=0;count2<count1;count2++)
			{
				arr[count1][k]=0;
				k--;
			}
			while(lptr1[j]!=-1)
			{
				num1=lptr1[j];
				num2=lptr2[i];
				//printf("num1 is %d num2 is %d\n",num1,num2);
				num=(num1*num2)+carry;
				//printf("num is %d\n",num);
				if(num>9999)
				{
					carry=num/10000;
					num=num%10000;
					arr[count1][k]=num;
					//printf("count1 is %d k is %d num is %d\n",count1,k,num);
				}
				else
				{
					carry=0;
					arr[count1][k]=num;
				}
				j--;
				k--;
			}
			if(carry!=0)
			{
			arr[count1][k]=carry;
			carry=0;
			}
			i--;
			count1++;
		}




		for(j=0;j<count1;j++)
		{
			i=0;
			while(arr[j][i]==-1)
			{
				i++;
			}
			while(i<=79)
			{
				printf("%d",arr[j][i]);
				i++;
			}
			printf("\n");
		}



	printf("lptr3 is \n");
	
	for(i=80;i>0;i--)
	{
		lptr5[i]=-1;
		if(lptr5[i]!=-1)
		{
			printf("%d",lptr5[i]);
		}
	}


	i=0;
	while(i<80)
	{
		lptr3[i]=arr[count1-1][i];
		if(lptr3[i]!=-1)
		{
			printf("%d",lptr3[i]);
		}
		i++;
	}
	

}


void subtraction(int*lptr1,int*lptr2,int*lptr3)
{
	int num1,num2,carry=0,num,i,count1=0,count2=0,flag=0;
	i=79;
	while(lptr1[i]!=-1)
	{
		count1++;
		i--;
	}
	i=79;
	while(lptr2[i]!=-1)
	{
		count2++;
		i--;
	}
	i=79;
	if(count1<count2)
	{
		flag=1;
	}

	if((count1==count2)&&(lptr1[80-count1]<lptr2[80-count2]))
	{
		flag=1;
	}
	if(flag==0)
	{
		i=79;
		while((lptr1[i]!=-1)&&(lptr2[i]!=-1))
		{
			num1=lptr1[i];
			num2=lptr2[i];
			if(num1<num2)
			{
				num1=num1+10000;
				lptr1[i-1]=lptr1[i-1]-1;
			}
			num=num1-num2;
			lptr3[i]=num;
			i--;
		}
		while(lptr1[i]!=-1)
		{
			if(i>=0)
			{
			num1=lptr1[i];
			lptr3[i]=num1;
			i--;
			}
		}
	}
	else
	{
		printf("-");
		i=79;
		while((lptr1[i]!=-1)&&(lptr2[i]!=-1))
		{
			if(i>=0)
			{
			num1=lptr1[i];
			num2=lptr2[i];
			if(num2<num1)
			{
				num2=num2+10000;
				lptr2[i-1]=lptr2[i-1]-1;
			}
			num=num2-num1;
			lptr3[i]=num;
			i--;
			}
		}
		while(lptr2[i]!=-1)
		{
			if(i>=0)
			{
			num2=lptr2[i];
			lptr3[i]=num2;
			i--;
			}
		}
	}
}

