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
	
		// �ٸ� ���� ���� �Ϸ��� ctrl + K + O

public:
	// �ִϸ��̼��� ������Ʈ ���ִ� �����Լ��� ������ �������̵� �ؼ� ����
	// �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������ �Ϸ��� �����Լ��� �������ε����� �������̵� �� �ش�.

	// �Լ� �̸��� �����ϰ� alt enter �� ������ �ش�.
	virtual void NativeUpdateAnimation(float DeltaTime) override;

private:
	// ��ü ���� ���� ��� ������ ��� ������ ��ȣ�� ���ؼ� private ���� ������ �ȿ� �д�.
	// private ���� ������ �ȿ� �ִ� ��� ������ �� Ŭ������ �θ� Ŭ������ ��ӹ޴� �ڽ� Ŭ�������� ���� ���� �Ұ����ϴ�.
	// �Լ��� ���ؼ� �����Ѵ�. �Լ��� ������ public�̴�.

	// �ӵ��� ������ �� ���� ����
	// EditAnywhere : Ŭ������ ������ �г��̳� �������Ʈ�� ������ �гο��� �а� ���Ⱑ �����ϴ�.
	// BlueprintReadWrite : �������Ʈ ��忡�� �а� ���Ⱑ �����ϴ�.
	// Categoty = "Pawn" : Pawn �׸� ������ ����ȴ�.
	//meta = (AllowPrivateAccess = true) : private ���� ������ �ȿ� �ִ� ��� ������ �� Ŭ������ �θ�
	// Ŭ������ ��ӹ޴� �ڽ�Ŭ�������� ���� ������ �ȵȴ�.
	// ������ �� Ŭ������ �θ� Ŭ������ ��ӹ޴� �������Ʈ Ŭ���������� ������ �����ϰ� ���ش�.
	// C++ Ŭ������ �θ�Ŭ�����̰�, �������Ʈ�� �ڽ�Ŭ�����̴�.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn", meta = (AllowPrivateAccess = true))
	float Speed;

	// ĳ���Ͱ� ���߿� ���ִ��� �Ǻ��� �� �Ҹ��� ������ �����Ѵ�.
	// �𸮾� C++ �����̸��� ���� �� ������ �빮�ڷ� �����Ѵ�.
	// �Ҹ��� Ÿ���� �ҹ��� b�� �����Ѵ�. �Ҹ��� Ÿ���� �ǹ����̳� ��ɹ� ���¸� ���Ѵ�.
	// bCanSwim, bIsInAir
	bool bIsInAir;

};