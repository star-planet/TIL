## Material
- 물체를 표현하는 재질
- 색상, 무늬, 광택, 투명도 등 물체의 시각적인 특징을 표현하는 역할
- Base Color : 물체의 색상을 정의
- Metallic : 금속성
- Specular : 빛맺힘과 반사를 표현
- Roughness : 표면의 거칠기
- Emissive Color : 빛나는 부분, 1보다 커지면 빛이 난다.
- Opacity : 투명도
- Metallic과 Roughness는 세트이다. 값이 서로 같으면 금속성이 없어진다.

## Constant 4 Vector
- 단축키 4 + Click
- RGBA의 4가지 색상을 표현
- R(빨강), G(그린), B(블루), A(알파)
- 쉐이더에서는 x, y, z와 r, g, b가 같다

## Texture Sample
- 단축키 T + Click
- 텍스쳐(이미지)를 표현하는 노드

## UV
- 이미지의 좌표를 의미
- 이미지의 좌표는 백분율로 표기한다.
- 0 ~ 1 사이의 float 값으로 위치를 표현
- 중심점은 게임엔진마다 다르다.
- 수학적으로는 (x, y) / 그래픽 적으로는 (u, v) / 색상으로는 (r, g)로 나타낸다.
- 언리얼엔진은 좌측 상단이 (0, 0), 우측 하단이 (1, 1)이다.

## TextureCoordinate
- 단축키 U + Click
- 이미지의 좌표를 늘리거나 줄이는 역할

## Time
- 레벨이 열린 다음으로부터의 시간

## Convert to Parameter
- 파라미터로 변환을 하면 외부(블루프린트, 머터리얼 인스턴스 등) 에서 노드 이름으로 노드의 값을 변경할 수 있게 된다.

## Opacity
- 투명도는 비용이 비싸다.
- 언리얼에서 기본적으로 사용을 못하게 막아놓음
- 사용하려면 머티리얼의 Blend Mode를 변경해야 한다.

## Blend Mode
- Opaque : 투명도가 없는 모드. 가장 가볍다.
- Masked : 0과 1의 투명도만 존재(투명, 불투명)
- Translucent : 정밀하고 부드러운 투명도. 가장 무겁다.
