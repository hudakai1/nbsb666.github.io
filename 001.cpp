
//1.
#include<iostream>
int main(){
    double f;
    std::cin >> f;
    std::cout << (int)f;
}



//2.
#include<iostream>
int main(){
    int x;
    std::cin >> x;
    std::cout << x + 13;
}



//3.
#include<iostrem>
int main(){
    char c;
    std::cin >> c;
    if((( c >= 'a' )&&( c <= 'z' ))
    ||(( c >= 'A' )&&( c <= 'Z' ))
    ||(( c >= '0' )&&( c <= '9' )))
    {
        std::cout << "YES";
    }\
    else
    {
        std::cout << "NO";
    }
}


//4.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c ;
    cout << min(a,min(b,c));
}

//5.
#include<iostream>
int main(){
    int a,b,c,n;
    std::cin >> n;
    c = n / 4;
    int r = n % 4;
    if(c > r){
        c -= r;
        b = r;
    }
    std::cout << a << " " << b << " " << c ;
}
