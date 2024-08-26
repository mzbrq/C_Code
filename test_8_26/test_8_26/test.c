#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strstr

/*#include<stdio.h>
#include<string.h>
#include<assert.h>

const char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* p = str1;
	const char* s1 = str1;
	const char* s2 = str2;

	while (*p)
	{
		s1 = p;
		s2 = str2;

		while (*s1 == *s2 && *s1 != '\0')
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
		{
			return p;
		}

		p++;
	}

	return NULL;

}

int main()
{
	char a1[30] = { 0 };
	char a2[20] = { 0 };

	strcpy(a1, "this is a simple string");
	strcpy(a2, "string");

	char* ret = my_strstr(a1, a2);

	if (ret == NULL)
	{
		printf("找不到");
	}
	else
	{
		printf("%s", ret);
	}

	return 0;
}*/



//模拟实现strcmp

/*#include<stdio.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}

	if (*str1 == '\0' && *str2 == '\0')
	{
		return 0;
	}
	else
	{
		return (*str1 - *str2);
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdefg";

	int ret = my_strcmp(arr1, arr2);

	if (ret > 0)
	{
		printf(">");
	}
	else if (ret == 0)
	{
		printf("==");
	}
	else
	{
		printf("<");
	}

	return 0;
}*/



//模拟实现strcat

/*#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);

	char* ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}

	return ret;

}

int main()
{
	char arr1[20] = { 0 };
	char arr2[20] = { 0 };

	strcpy(arr1, "hello ");
	strcpy(arr2, "world");

	my_strcat(arr1, arr2);

	printf("%s", arr1);

	return 0;
}*/



//模拟实现strcpy

/*#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	while (*dest++ = *src++)
	{
		;
	}

	return ret;

}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdefg";

	my_strcpy(arr1, arr2);

	printf("%s", arr1);

	return 0;
}*/




