#define false 0
#define true 1
#define _YES true


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


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




int main(void)
{
    poliness();
    return 0;
}
