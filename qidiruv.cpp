// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
char chiziqli_qidiruv(char array[],int size, char searchValue)
{
    for(int i=0;i<size;i++){
        if(searchValue== array[i]){
            return i;
        }
    }
    return -1;
}
int main() {
 char a[]={"J,U,M,A,Y,E,V,A,S,L,I,D,D,I,N"};
 char qid_harf;
 cout<<"Qidirilayotgan harfni kiriting :"<<" ";
 cin>>qid_harf;
 int natija = chiziqli_qidiruv(a,sizeof(a),qid_harf);
 if(natija>=0)
 {
     cout<<"Qidirilayotgan harf "<<a[natija]<<" "<<natija<<" "<<" - indexda joylashgan"<<endl;
 }
 else
 {
     cout<<qid_harf<<" Harfi "<<" "<<" Qidirilyotgan harf bu massivda mavjud emas"<<endl;
 }
    return 0;
}
