# CS_Study (C++ with GitHub Codespaces)

C++ 문법과 알고리즘을 **Codespaces**에서 학습하는 레포입니다.  
매일 작은 테스트로 학습 흔적(잔디)을 남기고, CI로 빌드/테스트를 자동화합니다.

## 구조
- `src/` : 문법 예제 / 실습 라이브러리
- `tests/` : Catch2 단위테스트 ( `tests/daily/` 에 날짜별 학습 )
- `algorithms/` : 알고리즘 풀이(템플릿 제공)
- `.devcontainer/` : Codespaces 환경(툴 자동 설치)
- `.github/workflows/` : CI 설정

## 사용법
```bash
cmake --preset dev
cmake --build --preset dev
ctest --preset dev
