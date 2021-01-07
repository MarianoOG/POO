#include <iostream>
using namespace std;
#include <time.h>

int main() {                  // =================
   time_t tSac = time(NULL);  // instante actual


   struct tm* pt1 = localtime(&tSac);
   cout << "hh:mm:ss " << pt1->tm_hour << ":" << pt1->tm_min << ":" << pt1->tm_sec << endl;
   cout << "dd-mm-aaaa: " << pt1->tm_mday << "-" << pt1->tm_mon+1 << "-" << pt1->tm_year+1900 << endl;

   tm tm2 = *gmtime(&tSac);   // deferencia y asignación
   cout << "hh:mm:ss " << tm2.tm_hour << ":" << tm2.tm_min << ":" << tm2.tm_sec << endl;
   cout << "dd-mm-aaaa: " << tm2.tm_mday << "-" << tm2.tm_mon+1 << "-" << tm2.tm_year+1900 << endl;

system ("pause");
return 0;
}
