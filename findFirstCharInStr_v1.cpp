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

#include<stdio.h>
#include<string.h>

void findFirstCharInStr(char *str){
	if(str==NULL||str==""){//����֤�ַ����Ƿ���Ч 
		return;
	}
	
	int i=0;
	int len=0;
	while(str[i]!='\0'){
		if(!('A'<=str[i]&&str[i]<='Z')){//����ַ����ǲ���ȫ���ɴ�д�ַ����� 
			return;
		}
		len++;
		i++; 
	}
	
	int count[26];//��������26����д��ĸ���ַ����г��ֵĴ���
	
	for(int i=0;i<26;i++){
		count[i]=0;
	}
	//�������ַ����г��ֵ��ַ��Ĵ�������ͳ�� 
	for(int i=0;i<len;i++){
		count[str[i]-'A'] ++;
	} 
	for(int j=0;j<len;j++){
		
		if(count[str[j]-'A']==1){//�ҵ���һ������һ�ε��ַ����±� 
			printf("%d\n",j);
			return;
		}
	}
	printf("-1\n");
}
int main(void){
	char str[10000];
	gets(str);
	while(1){
		findFirstCharInStr(str);
		gets(str);
	}
	return 0;
} 
