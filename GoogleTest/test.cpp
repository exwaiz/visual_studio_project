#include "pch.h"
#include "iostream"
#include "string"
#include "../tdd/cal.cpp"
#include "../tdd/prime_factors.cpp"
using namespace std;

// TDD ü���� �����Ѵ�.
// TDD ���α�Ģ�� �ִµ� �װ� ������ ����
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