/*
题目描述：
在一个字符串(1<=字符串长度<=10000，全部由大写字母组成)中找到第一个只出现一次的字符。
输入：
输入有多组数据
每一组输入一个字符串。
输出：
输出第一个只出现一次的字符下标，没有只出现一次的字符则输出-1。
样例输入：
ABACCDEFF
AA
样例输出：
1
-1
*/

#include<stdio.h>
#include<string.h>

void findFirstCharInStr(char *str){
	if(str==NULL||str==""){//先验证字符串是否有效 
		return;
	}
	
	int i=0;
	int len=0;
	while(str[i]!='\0'){
		if(!('A'<=str[i]&&str[i]<='Z')){//检查字符串是不是全部由大写字符构成 
			return;
		}
		len++;
		i++; 
	}
	
	int count[26];//用来保存26个大写字母在字符串中出现的次数
	
	for(int i=0;i<26;i++){
		count[i]=0;
	}
	//将整个字符串中出现的字符的次数进行统计 
	for(int i=0;i<len;i++){
		count[str[i]-'A'] ++;
	} 
	for(int j=0;j<len;j++){
		
		if(count[str[j]-'A']==1){//找到第一个出现一次的字符的下标 
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
