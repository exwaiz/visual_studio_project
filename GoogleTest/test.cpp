#include "pch.h"
#include "iostream"
#include "string"
#include "../tdd/cal.cpp"
#include "../tdd/prime_factors.cpp"
using namespace std;

// TDD 체험을 시작한다.
// TDD 세부규칙이 있는데 그건 무시할 예정
// Cal minus
class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};
TEST(Test1, 01_CreateAccountInit10000won) {
	EXPECT_EQ(1, 1);

}

//Ctrl +tab