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
```
## 파일 생성및 컴파일 절차
* 예제 코드를 src/ 폴더에 작성 (소스 코드 저장)
1. 코드 파일 생성
```bash
mkdir -p src/classes #
touch src/classes/Person.hpp
touch src/classes/Person.cpp
```

2. 소스코드 작성 후

* 작성한 소스 코드가 빌드될 수 있도록 CMakeLists.txt 파일에 추가합니다. 이 단계에서 **add_executable()**과 target_include_directories() 등을 설정합니다.

```bash
add_executable(person_test main.cpp classes/Person.cpp)

# Person 클래스가 정의된 경로를 포함
target_include_directories(person_test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
```

3. CMAKE로 빌드 
```bash
# 빌드 디렉토리 생성
mkdir -p build/dev

# CMake 설정
cmake --preset dev

# 빌드 실행
cmake --build --preset dev

# 실행 파일 실행
./build/dev/src/person_test
```

