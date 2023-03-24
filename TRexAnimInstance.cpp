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

	// 찾는 문장을 못찾을 경우도 있으니 꼭 찾았는지 조건검사를 해 주어야 한다.
	// 만일 몸을 제대로 찾았다면
	if (IsValid(Pawn))
	{
		// 폰이 멈쳐있는지 이동 중인지는 속도노드와 VectorLength노드로 알 수 있다.
		// 이동 중인지 멈춰 있는지 확인한다.

		Speed = Pawn->GetVelocity().Size();
		// 찾은 폰을 캐릭터로 형변환한다.
		// Pawn : 폰을 찾습니다.
		//Cast<ACharacter> : 찾은 폰을 캐릭터로 형변환한다.
		// UObject 자식클래스들은 접두사 U를 붙여 준다.
		// AActor 자식클래스들은 접두사 A를 붙여 준다.
		// 그 외의 클래스들과 구조체는 접두사 F를 붙여 준다.
		ACharacter* Character = Cast<ACharacter>(Pawn);
		// 만일 형변환이 제대로 되었다면
		if (Character)
		{
			// 캐릭터가 공중에 떠있는지는 MovementComponent와 IsFalling노드로 알 수 있다.
			// 캐릭터가 공중에 떠있는지 확인한다.
			bIsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}