#include <iostream>

using namespace std;

void swap(int *x, int *y) {
  // این تابع به شکل call by reference پیاده شده‌است.

  int temp; // متغیر temp به عنوان یک متغیر موقت قرار است مقدار x را در خود نگه دارد.

  temp = *x; // نگهداری مقدار x
  *x = *y; // جابه‌جایی مقدار y با x
  *y = temp; // قرار دادن مقدار ذخیره‌شده از x در y
  
  return;
}

int main () 
{
  const int REGULAR_CAT = 1;
  const int DJ_CAT = 0;

  int our_cat = REGULAR_CAT;
  int their_cat = DJ_CAT;

  cout << "our cat before swap is " << our_cat << endl;
  cout << "their cat before swap is " << their_cat << endl;

  swap(&our_cat, &their_cat);
   
  cout << "our cat after swap is " << our_cat << endl;
  cout << "their cat after swap is " << their_cat << endl;

  return 0;
}

/*
این تابع به شکل call by reference پیاده شده‌است و روش call by value در این مسئله غیر قابل استفاده است مگر اینکه مقدارهای بازگشتی ما از جنس آرایه باشند و بعد خود مقدارهای بازگشتی به جای متغیرهای اصلی قرار گیرند که طبق تابع اصلی تعریف‌شده، هدف سوال نیست.
پس روش call by reference به خاطر اینکه می‌تواند با استفاده از آدرس دو متغیر، تغییری در مقدارهای آن‌ها اعمال کند، روش منتخب است.
*/

