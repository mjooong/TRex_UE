// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TRexAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TREX_API UTRexAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
		// 다른 쪽을 오픈 하려면 ctrl + K + O

public:
	// 애니메이션을 업데이트 해주는 가상함수의 원형을 오버라이딩 해서 선언
	// 부모 클래스의 함수를 자식 클래스에서 재정의 하려면 가상함수를 동적바인딩으로 오버라이딩 해 준다.

	// 함수 이름을 선택하고 alt enter 로 정의해 준다.
	virtual void NativeUpdateAnimation(float DeltaTime) override;

private:
	// 객체 지향 언어에서 멤버 변수는 멤버 변수의 보호를 위해서 private 접근 지정자 안에 둔다.
	// private 접근 지정자 안에 있는 멤버 변수는 이 클래스를 부모 클래스로 상속받는 자식 클래스에서 접근 조차 불가능하다.
	// 함수를 통해서 접근한다. 함수는 무조건 public이다.

	// 속도를 저장해 둘 변수 선언
	// EditAnywhere : 클래스의 디테일 패널이나 블루프린트의 디테일 패널에서 읽고 쓰기가 가능하다.
	// BlueprintReadWrite : 블루프린트 노드에서 읽고 쓰기가 가능하다.
	// Categoty = "Pawn" : Pawn 항목에 변수가 노출된다.
	//meta = (AllowPrivateAccess = true) : private 접근 지정자 안에 있는 멤버 변수는 이 클래스를 부모
	// 클래스로 상속받는 자식클래스에서 조차 접근이 안된다.
	// 하지만 이 클래스를 부모 클래스로 상속받는 블루프린트 클래스에서는 접근이 가능하게 해준다.
	// C++ 클래스가 부모클래스이고, 블루프린트가 자식클래스이다.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn", meta = (AllowPrivateAccess = true))
	float Speed;

	// 캐릭터가 공중에 떠있는지 판별해 줄 불리언 변수를 선언한다.
	// 언리얼 C++ 변수이름을 지을 때 영문자 대문자로 시작한다.
	// 불리언 타입은 소문자 b로 시작한다. 불리언 타입은 의문문이나 명령문 형태를 지닌다.
	// bCanSwim, bIsInAir
	bool bIsInAir;

};