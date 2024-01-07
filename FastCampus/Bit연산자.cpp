#include <iostream>

using namespace std;

int main() {
  uint32_t attendanceBook = 5u;
  // 5u = 0000~00101
  // 셋째날만 출석 빼고 싶다

  // not 연산자 사용

  attendaceBook &= ~(int)pow(2,2);
  cout << attendaceBook << endl;
}
