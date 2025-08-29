#!/usr/bin/env bash
set -e

DATE=$(date +%Y-%m-%d)
NAME="${1:-note}"
FILE="tests/daily/${DATE}_${NAME}.cpp"

if [ -f "$FILE" ]; then
  echo "Already exists: $FILE"
  exit 0
fi

cat > "$FILE" <<'EOF'
#include <catch2/catch_test_macros.hpp>

// 오늘 배운 포인트를 1개 테스트로 남겨보자.
int square(int x){ return x*x; }

TEST_CASE("daily note: square"){
    REQUIRE(square(5) == 25);
}
EOF

git add "$FILE"
git commit -m "chore(daily): ${DATE} ${NAME} study note"
