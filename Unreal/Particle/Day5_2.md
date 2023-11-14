## Make Rain Particle
1. Material 생성
2. Blend Mode - Translucent로 변경
3. Shading Model을 Unlit으로 변경 (빛의 영향을 받지 않음)
4. RadialGradientExponentail 노드 생성
5. Density를 1.5로 설정 후 Emissive Color와 Opacity에 연결
6. Particle 생성
7. Material를 생성한 Material로 변경
8. Spawn에서 Constant 수정
9. Lifetime 수정
10. Initial Size 및 Initial Velocity 수정 (일자로 떨어지도록)
11. Initial Location 수정(비내리는 범위 설정)
12. Size by Speed 수정
13. Const Acceleration 수정
14. GPU로 처리하기 위해 GPU Sprites 추가
15. Bounds 설정
16. Details - Screen Alignment를 PSA Velocity로 변경하면 빌보드 효과가 줄어든다

## Make FireFly Particle
![image](https://github.com/WhiteYeoul/TIL/assets/102175112/5d6d8952-baa3-478d-93c3-4ced64626cd7)
1. Material를 생성한 Material로 변경
2. Spawn - Rate Scale에서 Distribution Float Particle Parameter로 변경(블루프린트에서 접근해서 값 변경 가능)
3. Parameter Name은 Spawn으로 설정
4. Param Mode를 DPM Direct로 변경 (설정한 수치 그대로 생성)
5. Color Over Life에서 Distribution을 Distribution Vector Particle Parameter로 변경
6. Emitters에서 Location - Sphere 추가
7. Sphere에서 Distribution Float Particle Parameter 로 변경
8. Parameter Name은 Sphere으로 설정
9. Param Mode를 DPM Direct로 변경
10. Initial Velocity에서 Z 값 수정
11. Emitters에서 Orbit 추가
12. Orbit - Offset Amount에서 Y 값 수정, Rotation Amount에서 X, Y 값 수정
13. Emitters에서 Size - Size By Life 추가
14. 0 - Out val을 0, 0, 0으로 설정, 1 - In val을 0.5로 설정

### RadialGradientExponential
- UV채널을 사용하여 방사형으로 그라디언트를 생성
- CenterPosition의 기본값은 정중앙(0.5, 0.5)

### Particle Color
- 파티클에 적용된 색상 정보를 가져온다.

### SphereMask
- 특정 채널을 원형으로 추출
- A : 검사 지점의 좌표(채널)
- B : 구체의 중심점
- Radius : 구체의 반경
- Hardness : 부드럽거나 딱딱한 정도

### Power
- 제곱의 역할을 한다.

### Dot
- 내적

### Depth Fade
- 반투명물체와 불투명물체가 겹쳤을 때 일어나는 이음새를 감추는 용도로 사용한다.
