#include <iostream>
#include <string>

int main()
{
  int a = 3;
  int b = a;  // gán biến thông thường
  int &r = a;  // tạo tham chiếu (reference) của biến a (tạo alias cho biến a)
  int *p = &a; // tạo con trỏ (pointer) tới biến a

  printf("địa chỉ của biến (variable) a: %d\n", &a);
  printf("giá trị của biến a: %d\n\n", a);

  printf("địa chỉ của biến (variable) b: %d\n", &b);
  printf("giá trị của biến b: %d\n\n", b);

  printf("địa chỉ của tham chiếu (reference) r: %d\n", &r);
  printf("giá trị của tham chiếu r: %d\n\n", r);

  printf("địa chỉ của con trỏ (pointer) p: %d\n", &p);
  printf("giá trị của con trỏ p: %d\n", p);
  printf("giá trị của biến mà con trỏ p đang trỏ tới: %d\n", *p);
}
/**
 * //identifier---------diachi tai Stack--------giatri trong Stack//
 *    a                  sss1                             3
 *    r(alias cua a)     sss1                             3 
 *    p                  sss2                             sss0
 *    gia tri cua bien a ma con tro p dang chi toi la 3
 */   
