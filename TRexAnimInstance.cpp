// Fill out your copyright notice in the Description page of Project Settings.


#include "TRexAnimInstance.h"

// Character 클래스에 접근하기 위한
#include "GameFramework/Character.h"
// PawnMovementComponent에 접근하기 위한
#include "GameFramework/PawnMovementComponent.h"

// 애니메이션을 업데이트 해주는 가상함수를 정의한다.
void UTRexAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	// 부모클래스의 함수에 좋은 내용이 있을 것이다.
	// 부모클래스의 함수의 내용을 모두 가져온다.
	Super::NativeUpdateAnimation(DeltaTime);

	// Pawn			: 몸
	// Controller	: 영혼
	// 영혼이 몸에 빙의해야 몸이 움직인다. OnPossess()
	// 영혼이 몸에서 빠져나오면 몸이 안움직인다. OnUnPossess()

	// 몸을 찾기
	APawn* Pawn = TryGetPawnOwner();
}