#include <iostream> 
// iostream�̶�� ��������� include �ϰ� �ִ�.
// iostream ��� ���� : C++���� ǥ�� ����¿� �ʿ��� �͵��� ����.
// ex) cout, endl ���� �� ��. (C������ stdio.h�� ���, C�� �ٸ��� ��� ���� �̸� �ڿ� .h�� ���� �ʴ´�.)

using namespace std;
// namespace��?
// ���� : 'std��� namespace�� ����ϰڴ�.'
// ===========================================
// 
// #include "header1.h"
// #include "header2.h"
//
// int main() {function();}
// =============================================
// �� �ִٰ� ����. header1.h �� header2.h�� �� �� function�� ���ǵǾ� �ִٸ�?
// C : ���ñ��� ���� �ϳ�, �Լ��� �̸��� �ٲٴ� ��.
// C++ : namespace�� ���� ������ �����ϰ� �ذ� ����.
// ==============================================
// * header1.h�� ����
// namespace header1 {
// int function();
// }
//
// * header2.h�� ����
// namespace header2 {
// int function();
// }
//=================================================
// ������ main �Լ����� header1�� function�� ����ϰ� �ʹٸ�?
// 
// #include "header1.h"
// #include "header2.h"
//
// int main() {
// header1::function(); // header1�̶� �̸� ������ �ִ� function�� ȣ��
// }
// �� ���� ���. ������, function�� �ݺ������� ȣ���Ѵٸ�, ������.
// =================================================
// ���� ������ header1�� �̸� ������ �ִ� �͵鸸 ���ٰ� ������ ���� ����!
// #include "header1.h"
// #include "header2.h"
// using namespace header1;
// int main() {
// header2::function(); // header2�� �ִ� �Լ��� ȣ��
// function(); // header 1�� �ִ� �Լ��� ȣ��
// }

int main() {
	cout << "Hello, World!" << endl;
	// std::cout << "Hello, World!" << std::endl;
	// cout : ȭ�鿡 ���, ostream�� ��ü�� ǥ�� ���(C�� stdout�� ����)
	// endl : ����, ȭ�鿡 ������ִ� '�Լ�'

	cout << "Hello," << endl
		<< "I'm "
		<< "Suhyeon" << endl;
	return 0;
}