/*
	* 코딩 표기법
	혼자 개발할 경우 중요하지 않지만 협업시 중요한 요소 중 하나
	일관성 있는 규칙으로 팀원에게 빠른 이해가 가능하도록 함
	코드의 유지보수가 용이해짐

	1. 카멜표기법
	단어의 첫글자는 소문자, 이우 단어의 첫글자는 대문자
	ex) playerPosition
		currentHp
		distanceToPlayer
		degreeToRadian

	2. 파스칼표기법
	모든 단어의 첫글자를 대문자
	ex) CreateEnemy
		OnMouseDown
		LookAtEnemy

	3. 헝가리안 표기법
	변수 및 함수 앞에 데이터 타입을 표기
	ex) bAttack(bool)
		fDefense(float)
		m_iCount(멤버변수 int) 
		m_nScore(멤버변수 int)
		g_chName (전역변수 char) 
		s_dSpeed(정적변수 double) 
		l_fDamage(지역변수 float)

	4. 스네이크 표기법
	모든 단어를 소문자, 단어마다 "_"로 구분
	ex) enemy_location
		target_to_move
		on_mouse_down

	* 표기법 사용 (언리얼)
	1) 변수는 파스칼 표기법을 사용한다.
	2) 함수, 파일명은 파스칼 표기법을 사용한다.
	3) bool형 변수 앞에는 b 혹은 is를 붙인다.
	4) 변수와 함수명은 기능을 알 수 있는 명확한 단어를 사용
	5) 예외적으로 반복문은 i, j, k를 사용
	6) 계산에 논리적으로 ()가 필요없어도 ()를 넣어준다. ex) a + (b * c)
	7) 주의가 필요한 함수 또는 이슈는 주석을 달아준다.
	8) 좋은 프로그램은 여러 명이 작업해도 1명이 작업한 것처럼 보여져야 함.
	9) 표기법 1순위는 회사에 맞추며 정해직 규칙이 없다면 엔진에 맞춘다.

*/