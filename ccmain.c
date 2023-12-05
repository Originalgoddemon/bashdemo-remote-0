#define false 0
#define true 1
#define _YES true


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

static char cater= '\0';

int poliness(void)
{
    #ifdef _YES
	char *pointer=(char*)malloc(14*sizeof(char));
        if (NULL == pointer)
	{
	    pointer=(char*)calloc(14,sizeof(char));
	    if (NULL == pointer)
	    {
		assert(pointer);
		return -1;
	    }
	}
	char array[14]={"HELLO,MASTER~"};
	for (int i=0;i<14;++i)
	{
	    pointer[i] = array[i];
	//    printf("%c",pointer[i]);
	}
	//putchar('\n');
	printf("%s\n",pointer);
	
    #else
	printf("hello,Master!");
    #endif
}

int add_num()
{
    int number_one=0;
    int number_two=0;
    int number_the=0;
    printf("Please select a language,1 is English,0 is Chinese \r\n");
    cater =getchar();
    cater -=48;
    if (false == cater) 
    {
        printf("请输入需要相加的数字，以回车结束。\r\n");
    }
    else
    {
	printf("Please enter the numbers to be added to end with a carriage return \r\n");
    }
    scanf("%d%d",&number_one,&number_two);
    number_the =number_two +number_one;
    
    return number_the;
}



int main(void)
{
    int variable=0; 
    poliness();
    variable = add_num();
    
    if (false == cater)
    {
        printf("这两数相加数为 %d \r\n",variable);
    }
    else if (true == cater)
    {
 	printf("ther seconds num add number is %d \r\n",variable);
    }
    else
    {
	printf(" %d \r\n",variable);
    }

    return 0;
}
