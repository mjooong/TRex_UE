// Fill out your copyright notice in the Description page of Project Settings.


#include "TRexAnimInstance.h"

// Character Ŭ������ �����ϱ� ����
#include "GameFramework/Character.h"
// PawnMovementComponent�� �����ϱ� ����
#include "GameFramework/PawnMovementComponent.h"

// �ִϸ��̼��� ������Ʈ ���ִ� �����Լ��� �����Ѵ�.
void UTRexAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	// �θ�Ŭ������ �Լ��� ���� ������ ���� ���̴�.
	// �θ�Ŭ������ �Լ��� ������ ��� �����´�.
	Super::NativeUpdateAnimation(DeltaTime);

	// Pawn			: ��
	// Controller	: ��ȥ
	// ��ȥ�� ���� �����ؾ� ���� �����δ�. OnPossess()
	// ��ȥ�� ������ ���������� ���� �ȿ����δ�. OnUnPossess()

	// ���� ã��
	APawn* Pawn = TryGetPawnOwner();
}