## 흐름제어 노드
### Branch
- 단축키 B + Click
- Condition의 값에 따라 흐름을 지정
- C++의 if문과 유사

### Sequance
- 단축키 S + Click
- 여러 개의 동시에 처리되어야 하는 노드들을 연결(병렬처리)
- 각각의 처리를 기다리지 않음

### Delay
- 단축키 D + Click
- 지정 시간동안 노드 흐름을 대기(단발성)
- 시간 누적 안됨

### Retriggerable Delay
- 대기 도중 다시 불러오면 딜레이가 초기화 됨

### For Loop
- C++에서 for문과 유사
- for(int i = FirstIndex; i <= LastIndex; i++)와 동일
- 반복할 때마다 Index의 값이 증가
- 주의할 점은 <= 이다.

### For Each Loop
- 배열과 함께 쓰이는 노드
- 배열의 크기만큼 반복

### Set Game Paused
- 게임을 일시정지하거나 풀어줌

### Set Timer by Event
- 일정시간 대기 후 커스텀 이벤트 실행

### Filp Flop
- A와 B를 번갈아서 실행

### Set Global Time Dilation
- 게임의 실행 속도를 변경
### Set Custom Time Dilation
- 액터 개별의 실행시간 조절

---

### Enable Input
- 키보드 입력을 받기 위해서 Player Controller를 가져와야 한다.
![Input](https://github.com/WhiteYeoul/TIL/assets/102175112/e73cde08-6626-4044-8efd-eed447d54ca5)

