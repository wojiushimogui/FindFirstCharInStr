#include<stdio.h>
#include<string.h>
/*
��Ŀ������
��һ���ַ���(1<=�ַ�������<=10000��ȫ���ɴ�д��ĸ���)���ҵ���һ��ֻ����һ�ε��ַ���
���룺
�����ж�������
ÿһ������һ���ַ�����
�����
�����һ��ֻ����һ�ε��ַ��±꣬û��ֻ����һ�ε��ַ������-1��
�������룺
ABACCDEFF
AA
���������
1
-1
*/
//���ַ���������֤���ǲ��ܹ���ɴ˹��ܵ� 
void findFirstCharInStr(char *str){
	//����֤str�Ƿ���Ч 
	if(str==NULL||str==" "){
		return ;
	}
	int len=0;
	int index=0;
	while(str[index]!='\0'){
		len++;
		index++;
	}
	printf("�ַ�������%d\n",len);
	int count=1;//��������
	//��������ѭ����Ѱ�ҵ�һ��ֻ����һ�ε��ַ����±� 
	int i=0;
	for(;i<len;i++){
		char ch=str[i];
		for(int j=i+1;j<len;j++){
			if(count>1){//���ַ����ֵĴ�������1֮�󣬾������ڲ�ѭ�� 
				break;
			}
			if(ch==str[j]) 
				count++;
			
		}
		if(1==count){//�����⵽ĳ���ַ����ֵĴ���Ϊ 1������������������ѭ�� 
			printf("��һ������һ�ε��ַ����±꣺%d\n",i);
			break;
		}
		count=1;//��count����Ϊ  1 
	}
	if(i==len-1){//��û���ҵ�������� -1 
		printf("%d\n",-1);
	}
	
}
int main(void){
	char str[10000];
	gets(str);
	//puts(str);
	while(1){
		findFirstCharInStr(str);
		gets(str);
	}
	
	return 0;
}
