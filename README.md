# 2020-1-OS
2020-1학기 강순주교수님의 OS수업을 들으며 정리한 Code


# index

### [OS01](https://github.com/MinkiJo/2020_1_OS/tree/main/OS01) 자료구조 복습

학생의 정보를 배열과 연결리스트로 각각 저장후 탐색

### [OS02](https://github.com/MinkiJo/2020_1_OS/tree/main/OS02) 리눅스 프로세스 생성함수를 통한 나만의 쉘 만들기

sum.exe : argument들을 더한 결과를 출력

sub.exe : argument들을 뺀 결과를 출력 

fact.exe : argument의 팩토리얼 결과를 출력 

div.exe : 앞의 argument에서 뒤의 argument를 나눴을 때 몫과 나머지 출력

'myshell.exe’을 실행하고 process running 상태에서, myshell prompt에서 위 1번의 실
행파일들을 실행할 수 있게 한다.

### [OS03](https://github.com/MinkiJo/2020_1_OS/tree/main/OS03) 스레드와 동기화

코드 상에서, argument로 받은 정수를 전역변수로 받는다.
(volatile 변수 선언을 통한 메모리에 변수값 저장)

위의 전역변수에 (1)10번씩 +1을 반복하는 'add()' 함수, -1을 반복하는 'sub()' 함수를 만
든다.

add() thread 5000개, sub() thread 5000개 만든다.

모든 thread가 실행을 끝냈을 때(총 10000개의 thread가 할 일을 다 끝냈을 때) 전역변
수에 대한 최종 결과값을 알 수 있다. 그 결과값 하나를 출력한다.

위 과정을 (1)30번 시행한다. 

위 과정을 (2)100번, (3)1000번씩 실행한다.

수학적 예상값과 실제 결과값에 차이가 발생 -> 스레드 사용시 동기화의 필요성

### [OS03B](https://github.com/MinkiJo/2020_1_OS/tree/main/OS03B)
OS03 에서 발생한 동기화를 mutex 및 semaphore를 이용해 해결한다.

### [OS04](https://github.com/MinkiJo/2020_1_OS/tree/main/OS04) Memory test - Stack, heap

‘Malloc Limitation test’는 heap 영역을 사용하는 코드이다.

‘Recursivecall Limitation test’는 stack 영역을 사용하는 코드이다.

위 두 개의 코드를 하나의 실행 프로그램에서 실행시키면, 메모리의 heap과 stack이 동시
에 영역 사용이 된다.

결국 메모리에서 stack 영역과 heap 영역이 충돌하는 지점이 생긴다

### [OS05](https://github.com/MinkiJo/2020_1_OS/tree/main/OS05) Linux Device Driver

라즈베리파이 보드와 led, switch 를 사용해 led를 제어하는 디바이스 드라이버 프로그램 짜기

1번 프로그램

- user 프로그램에서 키보드 입력을 받아(main() argv가 아님) led 제어하는 프로그램
- ‘A’ input state: 0.5초 주기로 3번 led 깜빡
- ‘B’ input state: ‘1’ 입력하면 led on, ‘0’ 입력하면 led off

2번 프로그램

- switch 입력시 interrupt 발생을 통한 led on, off
