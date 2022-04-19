#include<bits/stdc++.h>
using namespace std;
int k=1;
class Phim{
    public:
        string tenphim,ngaykhoichieu,theloai;
        int sotap,maphim,matheloai;
        friend istream &operator>>(istream &input,Phim &a){
            a.maphim=k++;
            string s;    input>>s; 
            a.matheloai=s.back()-'0';
            input>>a.ngaykhoichieu;
            input.ignore(1);
            getline(input,a.tenphim);
            input>>a.sotap;
            return input;
        }
        friend ostream &operator<<( ostream &output,Phim &a ) { 
            if(a.maphim<10)output<<"P00"<<a.maphim<<" ";
            else output<<"P0"<<a.maphim<<" ";
            output<<a.theloai<<" "<<a.ngaykhoichieu<<" "<<a.tenphim<<" "<<a.sotap<<endl;
            return output;            
        }
};
class TheLoai{
    public:
        string str;
        friend istream &operator>>(istream &input,TheLoai &a){
            input.ignore();
            getline(input,a.str);
            return input;
        }
};
int check_name(string a,string b){
    if(a<b)return 1;
    else if(a==b)return 0;
    return -1;
}
int  check_date(string a,string b){
    string nam1=a.substr(6,4),thang1=a.substr(3,2),ngay1=a.substr(0,2);
    string nam2=b.substr(6,4),thang2=b.substr(3,2),ngay2=b.substr(0,2);
    if(nam1<nam2)return 1;
    else if(nam1==nam2&&thang1<thang2)return 1;
    else if(nam1==nam2&&thang1==thang2&&ngay1<ngay2)return 1;
    else if(nam1==nam2&&thang1==thang2&&ngay1==ngay2)return 0;
    return -1;
}
int  check_sotap(int a,int b){
    if(a>=b)return 1;
    return 0;
}
bool cmp(Phim a,Phim b){
    int d1=check_date(a.ngaykhoichieu,b.ngaykhoichieu);
    if(d1==1)return 1;
    int d2=check_name(a.tenphim,b.tenphim);
    if(d1==0&&d2==1)return 1;
    int d3=check_sotap(a.sotap,b.sotap);
    if(d1==0&&d2==0&&d3==1)return 1;
    return 0;
}
void process(TheLoai d[],int n,Phim a[], int m ) {
    for(int i=0;i<m;i++){
        a[i].theloai=d[a[i].matheloai-1].str;
    }
    sort(a,a+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}