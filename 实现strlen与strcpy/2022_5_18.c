#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* lef)
{//ģ��ʵ��strlen
	int sum=0;//����
	assert(lef != NULL);//��ֹlefΪ��ָ��
	while (*lef++)
	{
		sum++;
	}
	return sum;
}
char* my_strcpy(char* lef, const char* rig)//����const��rig��ֱ�޷��ı�
{//ģ��ʵ��strcpy
	char* ret = lef;//�Ȱ�lef��������
	//assertΪ����,��ֹlef��rigΪ��ָ��
	assert(lef != NULL);
	assert(rig != NULL);
	while (*lef++ = *rig++)
	{
		;//lef��һֱ�Ӽ�ֱ��'\0'
	}
	return ret;//�Ѹı���lef����
}
int main()
{
	char lef[] = "yes";
	char rig[] = "no";
	my_strlen(lef);
	printf("%d", my_strlen(lef));
	my_strcpy(lef, rig);
	printf("%s", my_strcpy(lef, rig));
	return 0;
}