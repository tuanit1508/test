////1 nhap vao chuoi ki tu cho den khi nhap enter de dung
//// 2 Dem co bn ki tu chu, dau cach va ki tu khac
#include<stdio.h>
//int main(){
//	char c;
//	int demChu = 0, demSo = 0, demCach =0, demTuKhac = 0;
//	printf("Nhap chuoi: \n");
//	while(c != '\n'){
//		c =  getchar();
//		if((c>'a' && c<'z')||(c>'A' && c<'Z'))
//		
//			demChu++;
//			else	
//				if(c> '0' || c < '9')
//					demSo++;
//				else
//					if(c == ' ')
//						demCach++;
//					else
//						demTuKhac++;
//	}
//		printf("So luong ki tu chu: %d\n", demChu);
//		printf("So luong chu so: %d\n", demSo);
//		printf("So luong dau câch: %d\n", demCach);
//		printf("So luong ki tu khac: %d\n", demTuKhac);
//	 
//}
//int main(){
//	char str[6]="Hello";
//	int i, dem = 0;
//	for(i =0; i<6; i++)
//		printf("%c \n", str[i]);// printf("%s", str)
//	
//	for(i = 0; str[i] != 0; i++)
//		dem++;
//		printf("chuoi %s co So ki tu la: %d\n", str, dem);
//	// kiem tra ki tu co trong chuoi hay ko
//	char kt;
//	
//	printf("Nhap ki tu\n");
//	scanf("%c", &kt);
//	int find = 0;
//		for(i = 0; str[i]!='\0'; i++){
//		
//		
//			if(str[i]==kt){
//				find = 1;
//				break;
//			}
//			
//		}
//		if(find == 1)
//			printf("Chuoi %s co chua ki tu %c", str,kt);
//			else
//			printf("ko co trong chuoi");
//	
int timKiTu(char str[], char kt){
	int i;

	
	for(i=0; str[i]!='\0'; i++){
	
		if(str[i] == kt){
		
				return 1;
			}
	}
			return 0;
}
			
int main(){
	
	char str[100];
	char kt;
	printf("Nhap vao chuoi: \n");
	gets(str);
	printf("Nhap ki tu: \n");
	scanf("%c", &kt);
	if (timKiTu(str,kt)== 1)
		printf("Chuoi %s co chua ki tu %c\n", str,kt);
	else
		printf("KO CO trong chuoi");
		
}
	

