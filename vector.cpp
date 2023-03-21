#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main()
{
      int arr[] = {25,10,53,64,65,96,17};
      //melakukan inisialisasi vector dengan array
      vector<int> vtr(arr, arr + sizeof(arr)/sizeof(int));

      cout<<"VECTOR 2 C++"<<endl;
      cout<<"------------"<<endl;
      cout<<"Isi vector : ";
      for(int i = 0; i < vtr.size(); i++)
      {
            cout<<vtr[i]<<"  ";
      }
      cout<<endl;
      cout<<"\nUkuran             : "<<vtr.size()<<endl;
      cout<<"Kapasitas          : "<<vtr.capacity()<<endl;
      cout<<"Elemen terdepan    : "<<vtr.front()<<endl;
      cout<<"Elemen terbelakang : "<<vtr.back()<<endl;
      cout<<"Elemen ke-3        : "<<vtr.at(2)<<endl;
     
      //////////////////////////////////////
      //////////////////////////////////////
      //RESIZE VECTOR
      cout<<endl;
      cout<<"\nRESIZE VECTOR"<<endl;
      cout<<"-------------"<<endl;
      //menambah ukuran vector menjadi 10 dan mengisi tiga elemen tambahan dengan nilai 0
      vtr.resize(10,0);

      cout<<"Isi vector sekarang : ";
      for(int i = 0; i < vtr.size(); i++)
      {
            cout<<vtr[i]<<"  ";
      }
      cout<<endl;
      cout<<"\nUkuran sekarang    : "<<vtr.size()<<endl;
      cout<<"Kapasitas sekarang : "<<vtr.capacity()<<endl;

      /////////////////////////////////////
      /////////////////////////////////////
      //Menghapus 5 elemen pertama
      cout<<endl;
      cout<<"\nMENGHAPUS LIMA ELEMEN PERTAMA"<<endl;
      cout<<"-----------------------------"<<endl;

      vtr.erase(vtr.begin(), vtr.begin()+5);
      cout<<"Isi vector sekarang : ";
      for(int i = 0; i < vtr.size(); i++)
      {
            cout<<vtr[i]<<"  ";
      }
     
      _getche();
      return 0;
}
