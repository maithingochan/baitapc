#include<stdio.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

const float pi = 3.1415 , g = 9.8;
float DienTichHinhTron(int r);
float ChuKyConLak(int l);
float DienTichTamGiac(float a,float b, float c);

int TongCacSoNguyenDuong(int n);
int DemCacChuSo(int n);
int uscln(int a,int b);

char kiemtrasochan(int n);
char diemmonhoc(float a,float b,float c);
float tinh1chiangiaithua(int n);
float tinh1_1chia2giaithua(int n);
float tinhtru1_1chia2giaithuasenke(int n);

void rutgonphanso(int &t, int &m);
void conghaiphanso(int t1,int m1,int t2,int m2,int &t,int &m) ;


int kt_nhuan(int n);
int kt_hople(int d,int m,int y);
int tongS(int n);
int F(int n);
long tinhGiaithua(int n);
int USCLN(int a, int b);
int BSCNN(int a, int b);
int sumN (int num);
void nhaparr(int arr[],  int *n);
void xuatarr(int arr[], int n);
int SumN(int arr[],int n);
bool check(int n);
void Perfectnumber(int *arr,int n);
int MaxN(int * arr, int n);
void Numberchia5(int * arr, int n);
bool checkNumber5(int n);
void Tongchanle(int *arr, int n);
int sumLe(int *arr,int n);
int sumChan(int *arr,int n);


main(){

	int n,key,r,l,x,z,d,m,y,t,so1,so2,num,result;
	int t1,m1,t2,m2;
	float a,b,c;
	char kt;
	bool daNhap = false;
	int oi;
	int arr[100];

	while(true){

		system("cls");
		printf("******************************************\n");
		printf("** BAI TAP THUC HANH C **\n");
		printf("** 1. Diên Tich Hinh Tron **\n");
		printf("** 2. Chu Ky Con Lak **\n");
		printf("** 3. Dien Tich Tam Giac **\n");
		printf("** 4. Tong Cac So Nguyen Duong **\n");
		printf("** 5. Diem Cac Chu So **\n");
		printf("** 6. Tim Uoc So Chung **\n");
		printf("** 7. Rút Gon phan so **\n");
		printf("** 8. Cong Hai phan so **\n");
		printf("** 9. kiem tra tinhs chan le **\n");
		printf("** 10. Hien Thi So Dem Cua Ky Tu **\n");
		printf("** 11. Diem Trung Binh Mon Hoc **\n");
		printf("** 12. kiem tra ngày tháng nam **\n");
		printf("** 13. Tong S=1+2+3...+n **\n");
		printf("** 14. De quy Fibonaci **\n");
		printf("** 15. De Quy Tinh Giai Thua**\n");
		printf("** 16. De Quy USCLN**\n");
		printf("** 17. De Quy BSCNN**\n");
		printf("** 18. De Quy SUMN**\n");
		printf("** 19. Tong S=1/n! **\n");
		printf("** 20.Tong 1/2!+1/3! +1/n! \n");
		printf("** 21. Tinh tong Sum so \n");
		printf("** 22. Kiem tra so hoan hao \n");
		printf("** 23. Tim so Max \n");
		printf("** 24. Tính so chia het cho 5\n");
		printf("** 25. Tinh tong so chan le \n");
		
		printf("** 0. Thoat **\n");
		printf("******************************************\n");
		printf("** Nhap lua chon cua ban **\n");
		scanf("%d",&key);

		switch (key){

			case 1:
				printf("\nDien Tich Hinh Tron!");
				printf("\nNhâp bán kính ");
				scanf ("%d",&r);
				printf ("Diên tích HÌnh tron la: %f", DienTichHinhTron(r));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 2:
				printf("\nChu Ky Con Lak!");
				printf("\nNhâp Chieu Dai ");
				scanf ("%d",&l);
				printf ("Chu Ky Con Lak: %f", ChuKyConLak(l));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 3:
				printf("\nDien Tich Tam Giac!");
				printf("\nNhâp Chieu Dai 3 Canh ");
				scanf ("%f",&a);
				scanf ("%f",&b);
				scanf ("%f",&c);
				printf ("Dien Tich Tam Giac: %f", DienTichTamGiac(a,b,c));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 4:

				printf("\nTong Cac So Nguyen Duong!");
				printf("\nNhâp n ");
				scanf ("%d",&n);
				printf ("Tong Cac So Nguyen Duong: %d", TongCacSoNguyenDuong(n));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 5:
				printf("\nDiem Cac Chu So!");
				printf("\nNhâp n ");
				scanf ("%d",&n);
				printf ("Tong So: %d", DemCacChuSo(n));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 6:
				printf("\nUoc So Chung Lon Nhat!");
				printf("\nNhâp x,y ");
				scanf ("%d",&x);
				scanf ("%d",&z);
				printf ("Uscln la: %d", uscln(x,z));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 7:

				printf("\nRut gon phan so!");
				printf("\nnhap phan so can rut gon");
				scanf ("%d",&t);
				scanf ("%d",&m);
				rutgonphanso(t, m);
				printf("phan so da rut gon %d \t \ %d",t,m);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 8:
				printf("\nRut gon phan so!");
				printf("\n nhap t1");
				scanf("%d",&t1);
				printf("\n nhap m1");
				scanf("%d",&m1);
				printf("\n nhap t2");
				scanf("%d",&t2);
				printf("\n nhap m2");
				scanf("%d",&m2);
				conghaiphanso(t1, m1,t2, m2,t,m);
				printf("phan so da rut gon %d \t \ %d",t,m);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 9:
     			printf("\nkiem tra tinh chan le cua so!");
				printf("\nNhâp n ");
				scanf ("%d",&n);
				printf ("%c", kiemtrasochan(n));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 10:
				printf("\nSo cua ki tu trong ma ASCII!");
				printf("\nNhâp ky tu can kiem tra ");
				fflush(stdin);
				scanf ("%c",&kt);
				printf ("ki tu %c co so : %i", kt,kt);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 11:
				printf("\nDiem trung binh!");
				printf("\nNhâp Diem Toan Ly Hoa ");
				scanf ("%f",&a);
				scanf ("%f",&b);
				scanf ("%f",&c);
				printf ("Diem Chu: %c", diemmonhoc(a,b,c));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 12:

				printf("\nkiem tra ngay thang nam!");
				printf("\nNhâp ngay thang nam");
				scanf ("%d",&d);
				scanf ("%d",&m);
				scanf ("%d",&y);
				if (kt_hople(d,m,y) == 0) printf("ngay khong hop le\n");
				else printf("ngay hop le");
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;

			case 13:

				printf("\nTinh tong S = 1+2+3+ n!");
				printf("\nNhâp n ");
				scanf ("%d",&n);
				printf ("tong s %d", tongS(n));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
				
			case 14:
				printf("\n de quy fibonaci");
			 	printf("Nhap vao so nguyen can tinh:");
    			scanf("%d",&n);
    				for(int i=1;i<=n;i++)
        				printf("%d  ",F(i));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			
			case 15:
				printf("\n Tinh Giai Thua");
			 	printf("Nhap vao so nguyen can tinh:");
    			scanf("%d",&n);
    			printf("giai thua cua %d la: %d ", n, tinhGiaithua(n));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
				
			case 16:
				printf("\n USCLN");
			 	printf("Nhap vao so Thu Nhat:");
    			scanf("%d",&so1);
    			printf("Nhap vao so Thu Hai:");
    			scanf("%d",&so2);
    			printf("USCLN %d va %dla: %d ", so1,so2, USCLN(so1,so2));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
				
			case 17:
				printf("\n BSCNN");
			 	printf("Nhap vao so Thu Nhat:");
    			scanf("%d",&so1);
    			printf("Nhap vao so Thu Hai:");
    			scanf("%d",&so2);
    			printf("BCLNN cua %d la: %d ", n, BSCNN(so1,so2));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 18:
				printf("\n SUMN");
 
   				printf("Nhap mot so bat ky: ");
   				scanf("%d", &num);
   				result = sumN(num);
   				printf("\nTong cac so tu 1 toi %d la: %d", num, result);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
				
			case 19:
				printf("\n 1/n!");
 
   				printf("Nhap mot so bat ky: ");
   				scanf("%d", &num);
   				printf("\nTong 1/n! la: %f", tinh1chiangiaithua(num));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			
			case 20:
				printf("\n 1-1/2!+1/3!n!");
 
   				printf("Nhap mot so bat ky: ");
   				scanf("%d", &num);
   				printf("\nTong 1/2!+1/3! +1/n! la: %f", tinhtru1_1chia2giaithuasenke(num));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;	
			
				
			case 21:
				
				nhaparr(arr, &oi);
				xuatarr(arr, oi);
				printf("Sum %d", SumN(arr, oi));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			
			case 22:
			
				nhaparr(arr, &oi);
				xuatarr(arr, oi);
				Perfectnumber(arr, oi);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 23:
				nhaparr(arr, &oi);
				xuatarr(arr, oi);
				printf("\n So lon nhat la %d ", MaxN(arr, oi));
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
				
			case 24:
				nhaparr(arr, &oi);
				xuatarr(arr, oi);
				Numberchia5(arr, oi);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				
			case 25:
				nhaparr(arr, &oi);
				xuatarr(arr, oi);
				Tongchanle(arr, oi);
				daNhap = true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();

			case 0:

				printf("\nBan da chon thoat chuong trinh!");
				getch();
				return 0;
				default:

			printf("\nKhong co chuc nang nay!");
			printf("\nBam phim bat ky de tiep tuc!");
			getch();
			break;
		}
	}
}

float DienTichHinhTron(int r) {

	return r * r * pi;

}

float ChuKyConLak(int l) {

	return 2*pi * sqrt(l/g);

}

float DienTichTamGiac (float a,float b, float c){
	float p;
	p = (a+b+c)/2;

	return sqrt(p*(p-a)*(p-b)*(p-c));

}

int TongCacSoNguyenDuong(int n) {
	int m;
	int tong = 0;
	while (n>0){
	m=n%10;
	tong=tong+m;
	n=n/10;
}
	return tong ;

}

int DemCacChuSo(int n){

	int dem = 0;
	while (n != 0){
	dem ++;
	n = n/10;
}

	return dem;
}

int uscln(int a,int b) {

	int r;
	while (a%b!=0)

{

	r=a%b;
	a=b;
	b=r;
}
	return b;
}

float tinh1chiangiaithua(int n) {
	int i =1;
	float S=0;
	while(i <= n)
    {
        S = S + 1.0 / i;  
        i++;
    }
    return S;
}

float tinh1_1chia2giaithua(int n){
	float S;
	long p=1;
	for(int i = 1; i<=n; i++){
		p=p*i;
		S = S + 1.0/p;
	}
	return S;
}

float tinhtru1_1chia2giaithuasenke(int n){
	float S;
	long p=1;
	for(int i = 1; i<=n; i++){
		if(i %2 ==0){
		p=p*i;
		S = S - 1.0/p;
		}else {	
		p=p*i;
		S = S + 1.0/p;
		}
	}
	return S;
}

void rutgonphanso(int &t, int &m) {

	int a = uscln(t,m);
	t = t/a;
	m = m/a;
}

void conghaiphanso(int t1,int m1,int t2,int m2,int &t,int &m) {

	m= uscln(m1, m2);
	m = (m1*m2)/m;
	t = (t1)*(m/m1) + (t2)*(m/m2);
	rutgonphanso(t, m);

}

char kiemtrasochan(int n){

	if (n%2 ==0)
	return printf("la so chan");
	else
	return printf("la so le");
}

char diemmonhoc(float a,float b,float c) {

	float dtb = (a+b+c)/3;
	if (dtb > 8.5) {
	return 'A';

}else if (dtb >6.5) {

	return 'B';
}else if (dtb>5.5) {
	return 'C';
}else	
	return 'D';
}

int kt_nhuan(int n)
{
	if (n%4!=0)
	return 0;
	else
if (n%400==0)
	return 1;
	else
	if (n%100==0)
	return 0;
	else
	return 1;

}

int kt_hople(int d,int m,int y)
{
	if(d==29&&m==2)
{

if(kt_nhuan(y)==1)return 1;
	else return 0;
}

if(m==2)
{
	if(1<=d&&d<=28)return 1;
	else return 0;
}

if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
	if(1<=d&&d<=31)return 1;
	else return 0;
}

if(m==4||m==6||m==9||m==11)
{
	if(1<=d&&d<=30)return 1;
	else return 0;
}
	return 0;
}

int tongS(int n){
	int s=0;
	for (int i = 1; i<n;i++) {
	s = s+i;
}
return s;
}

int F(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    return F(n-1)+F(n-2);
}

long tinhGiaithua(int n){
	if ( n > 0){
		return n * tinhGiaithua(n - 1);
	}else {
		return 1;
	}
}

int USCLN(int a, int b) {
	if (b == 0) return a;
	return USCLN(b, a%b);
}

int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}

int sumN (int num) {
	int res;
	if(num == 1)
	   return (1);
	else 
		res = num + sumN(num -1);
	return res;
}

void xuatarr (int *arr, int n){
	int i;
	for(i = 0; i<n;i++){
		printf("%d \t",arr[i]);
	}
}

bool chuaXH (int *arr, int n, int x){
	int i;
	for(i =0;i<n;i++){
		if(arr[i] == x){
			return false;
		}
	}
	return true;
}
void nhaparr(int *arr, int *n){
	*n=0;
	while(*n<=0){
		printf("nhap n>0");
		scanf("%d", n);
	}
	
	int i= 0;
	srand(time(NULL));
	while(i<*n){
		int x = rand()%100;
		if(chuaXH(arr, i , x)){
			arr[i++] = x;
		}
	}
}

int SumN(int *arr,int n){
	int sum=0;
	for(int i = 0; i< n ; i++){
		sum = sum + arr[i];
	}
	return sum;
}

void Perfectnumber(int *arr,int n){
    for(int i=1;i< n;i++){
        if(check(arr[i])){
        	printf("So %d la so hoan hao \n",arr[i]); 
		}
    }
}

bool check(int n){
	int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true;
    return false;
}

int MaxN(int * arr, int n){
	int max = arr[0];
	for(int i = 0; i < n ; i++){
		if(max < arr[i]){
			int tg = max;
			max = arr[i];
			arr[i] = tg;
		}
	}
	return max;
}

bool checkNumber5(int n){
	if(n%5==0){
		return true;
	}
	return false;
}

void Numberchia5(int * arr, int n){
	for (int i = 0; i<n; i++){
		if(checkNumber5(arr[i])){
			printf("\n So chia het cho 5 la %d",arr[i]);
		}
	}
}

void Tongchanle(int *arr, int n){
	printf("\ntong so phan tu chan la %d",sumChan(arr, n));
	printf("\ntong so phan tu le la %d",sumLe(arr, n));
}

int sumChan(int *arr,int n){
	int sum = 0;
	for(int i = 0; i< n; i++){
		if(arr[i] % 2 ==0){
			sum += arr[i];
		}
	}
	return sum;
}

int sumLe(int *arr,int n){
	int sum = 0;
	for(int i = 0; i< n; i++){
		if(arr[i] % 2 !=0){
			sum += arr[i];
		}
	}
	return sum;
}










