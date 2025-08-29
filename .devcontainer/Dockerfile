FROM mcr.microsoft.com/devcontainers/cpp:ubuntu

# 필수 툴 추가: ninja, clang-format 등
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
      ninja-build clang-format && \
    rm -rf /var/lib/apt/lists/*

# 기본 C++ 표준 안내용 환경 변수(선택)
ENV CMAKE_CXX_STANDARD=20
