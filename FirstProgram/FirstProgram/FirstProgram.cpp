#include <iostream> 
// iostream이라는 헤더파일을 include 하고 있다.
// iostream 헤더 파일 : C++에서 표준 입출력에 필요한 것들을 포함.
// ex) cout, endl 같은 것 들. (C언어에서의 stdio.h와 비슷, C와 다르게 헤더 파일 이름 뒤에 .h가 붙지 않는다.)

using namespace std;
// namespace란?
// 직역 : 'std라는 namespace를 사용하겠다.'
// ===========================================
// 
// #include "header1.h"
// #include "header2.h"
//
// int main() {function();}
// =============================================
// 이 있다고 하자. header1.h 와 header2.h에 둘 다 function이 정의되어 있다면?
// C : 선택권은 오직 하나, 함수의 이름을 바꾸는 것.
// C++ : namespace를 통해 문제를 유연하게 해결 가능.
// ==============================================
// * header1.h의 내용
// namespace header1 {
// int function();
// }
//
// * header2.h의 내용
// namespace header2 {
// int function();
// }
//=================================================
// 실제로 main 함수에서 header1의 function을 사용하고 싶다면?
// 
// #include "header1.h"
// #include "header2.h"
//
// int main() {
// header1::function(); // header1이란 이름 공간에 있는 function을 호출
// }
// 과 같이 사용. 하지만, function을 반복적으로 호출한다면, 귀찮다.
// =================================================
// 나는 앞으로 header1란 이름 공간에 있는 것들만 쓴다고 다음과 같이 선언!
// #include "header1.h"
// #include "header2.h"
// using namespace header1;
// int main() {
// header2::function(); // header2에 있는 함수를 호출
// function(); // header 1에 있는 함수를 호출
// }

int main() {
	cout << "Hello, World!" << endl;
	// std::cout << "Hello, World!" << std::endl;
	// cout : 화면에 출력, ostream의 객체로 표준 출력(C의 stdout에 대응)
	// endl : 개행, 화면에 출력해주는 '함수'

	cout << "Hello," << endl
		<< "I'm "
		<< "Suhyeon" << endl;
	return 0;
}