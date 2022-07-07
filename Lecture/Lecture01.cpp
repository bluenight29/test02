// #(전처리기)include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream> 


using namespace std;

// 실행과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역작업이다.
// Ctrl + Shift + B를 이용해서 컴파일 및 빌드를 할 수 있다.

//cpp의 시작점은 main함수이다. main함수는 반드시 있어야 한다.
int main() {

	// cpp표준 기능의 대부분은 std라는 namespace 안에 존재하고 있다. 이름이 겹치는 것을
	//방지해주기 위해서이다.
	//cout : 콘솔창에 출력해주는 기능이다. 뒤에 있는 ""(큰따옴표)안에 있는 문자들을
	//화면에 출력해준다. 문자 여러개를 사용할때는 반드시 ""안에 넣어주고 이런것들을
	//문자열이라 한다.
	
	// endl : 개행 기능이다.

	std::cout << "Test Output" << std::endl;
	std::cout << "가나다라" << std::endl;

	cout << "std namespace 사용" << endl;
	/*
	변수 : 변하는 수. 값이 바뀔 수 있다.
	용량의 최소단위 : bit
	1 byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1tbyte = 1024gbyte
	종류	  |    용량    |    데이터    |  표현범위
	char	  |   1byte    |    문자      |  -128 -127
	bool	  |   1byte    |    참/거짓   |
	short	  |   2byte    |    정수      |
	int	  |   4byte    |    정수      |
	float	  |   4byte    |    실수      |
	double |   8byte    |    실수      |
	*/


	// = : 대입연산자
	int Number = 1; // 메모리에서 4byte할당

	cout << Number << endl;

	bool bTest = true;
	bTest = false;

	cout << bTest << endl;
	
	char cTest = 't';

	cout << cTest << endl;

	float fNumber = 3.14;
	double dNumber = 123.1344;

	cout << fNumber << endl;

	cout << "숫자를 입력하세요: ";
	cin >> Number;
	
	cout << "87 & 53 =" << (87 & 53) << endl;

	cout << "도저언" << endl;

	return 0;
}