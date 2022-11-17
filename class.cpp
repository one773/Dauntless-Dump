namespace Offsets
{
	namespace Classes
	{
		// Inheritance: UObject
		namespace AActor
		{
			constexpr auto PrimaryActorTick = 0x28; // FActorTickFunction
			constexpr auto bNetStartup = 0x58; // char : 1
			constexpr auto bOnlyRelevantToOwner = 0x58; // char : 1
			constexpr auto bAlwaysRelevant = 0x58; // char : 1
			constexpr auto bReplicateMovement = 0x58; // char : 1
			constexpr auto bHidden = 0x58; // char : 1
			constexpr auto bTearOff = 0x58; // char : 1
			constexpr auto bExchangedRoles = 0x58; // char : 1
			constexpr auto bNetTemporary = 0x58; // char : 1
			constexpr auto bAllowTickBeforeBeginPlay = 0x59; // char : 1
			constexpr auto bCanBeDamaged = 0x59; // char : 1
			constexpr auto bAutoDestroyWhenFinished = 0x59; // char : 1
			constexpr auto bNetUseOwnerRelevancy = 0x59; // char : 1
			constexpr auto bReplayRewindable = 0x59; // char : 1
			constexpr auto bRelevantForLevelBounds = 0x59; // char : 1
			constexpr auto bRelevantForNetworkReplays = 0x59; // char : 1
			constexpr auto bNetLoadOnClient = 0x59; // char : 1
			constexpr auto bEnableAutoLODGeneration = 0x5a; // char : 1
			constexpr auto bActorSeamlessTraveled = 0x5a; // char : 1
			constexpr auto bIsEditorOnlyActor = 0x5a; // char : 1
			constexpr auto bCollideWhenPlacing = 0x5a; // char : 1
			constexpr auto bIgnoresOriginShifting = 0x5a; // char : 1
			constexpr auto bGenerateOverlapEventsDuringLevelStreaming = 0x5a; // char : 1
			constexpr auto bFindCameraComponentWhenViewTarget = 0x5a; // char : 1
			constexpr auto bBlockInput = 0x5a; // char : 1
			constexpr auto bReplicates = 0x5b; // char : 1
			constexpr auto bCanBeInCluster = 0x5b; // char : 1
			constexpr auto bAllowReceiveTickEventOnDedicatedServer = 0x5b; // char : 1
			constexpr auto bActorEnableCollision = 0x5c; // char : 1
			constexpr auto bActorIsBeingDestroyed = 0x5c; // char : 1
			constexpr auto UpdateOverlapsMethodDuringLevelStreaming = 0x5d; // EActorUpdateOverlapsMethod
			constexpr auto DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5e; // EActorUpdateOverlapsMethod
			constexpr auto RemoteRole = 0x5f; // ENetRole
			constexpr auto ReplicatedMovement = 0x60; // FRepMovement
			constexpr auto InitialLifeSpan = 0x94; // float
			constexpr auto CustomTimeDilation = 0x98; // float
			constexpr auto AttachmentReplication = 0xa0; // FRepAttachment
			constexpr auto Owner = 0xe0; // AActor*
			constexpr auto NetDriverName = 0xe8; // FName
			constexpr auto Role = 0xf0; // ENetRole
			constexpr auto NetDormancy = 0xf1; // ENetDormancy
			constexpr auto SpawnCollisionHandlingMethod = 0xf2; // ESpawnActorCollisionHandlingMethod
			constexpr auto AutoReceiveInput = 0xf3; // EAutoReceiveInput
			constexpr auto InputPriority = 0xf4; // int32_t
			constexpr auto InputComponent = 0xf8; // UInputComponent*
			constexpr auto NetCullDistanceSquared = 0x100; // float
			constexpr auto NetTag = 0x104; // int32_t
			constexpr auto NetUpdateFrequency = 0x108; // float
			constexpr auto MinNetUpdateFrequency = 0x10c; // float
			constexpr auto NetPriority = 0x110; // float
			constexpr auto Instigator = 0x118; // APawn*
			constexpr auto Children = 0x120; // TArray<AActor*>
			constexpr auto RootComponent = 0x130; // USceneComponent*
			constexpr auto ControllingMatineeActors = 0x138; // TArray<AMatineeActor*>
			constexpr auto Layers = 0x150; // TArray<FName>
			constexpr auto ParentComponent = 0x164; // TWeakObjectPtr<UChildActorComponent>
			constexpr auto Tags = 0x170; // TArray<FName>
			constexpr auto OnTakeAnyDamage = 0x180; // FMulticastSparseDelegate
			constexpr auto OnTakePointDamage = 0x181; // FMulticastSparseDelegate
			constexpr auto OnTakeRadialDamage = 0x182; // FMulticastSparseDelegate
			constexpr auto OnActorBeginOverlap = 0x183; // FMulticastSparseDelegate
			constexpr auto OnActorEndOverlap = 0x184; // FMulticastSparseDelegate
			constexpr auto OnBeginCursorOver = 0x185; // FMulticastSparseDelegate
			constexpr auto OnEndCursorOver = 0x186; // FMulticastSparseDelegate
			constexpr auto OnClicked = 0x187; // FMulticastSparseDelegate
			constexpr auto OnReleased = 0x188; // FMulticastSparseDelegate
			constexpr auto OnInputTouchBegin = 0x189; // FMulticastSparseDelegate
			constexpr auto OnInputTouchEnd = 0x18a; // FMulticastSparseDelegate
			constexpr auto OnInputTouchEnter = 0x18b; // FMulticastSparseDelegate
			constexpr auto OnInputTouchLeave = 0x18c; // FMulticastSparseDelegate
			constexpr auto OnActorHit = 0x18d; // FMulticastSparseDelegate
			constexpr auto OnDestroyed = 0x18e; // FMulticastSparseDelegate
			constexpr auto OnEndPlay = 0x18f; // FMulticastSparseDelegate
			constexpr auto InstanceComponents = 0x1f0; // TArray<UActorComponent*>
			constexpr auto BlueprintCreatedComponents = 0x200; // TArray<UActorComponent*>
		}
		// Inheritance: UObject
		namespace UDataTable
		{
			constexpr auto RowStruct = 0x28; // UScriptStruct*
			constexpr auto bStripFromClientBuilds = 0x80; // char : 1
			constexpr auto bSearchableRowEditor = 0x80; // char : 1
			constexpr auto bIgnoreExtraFields = 0x80; // char : 1
			constexpr auto bIgnoreMissingFields = 0x80; // char : 1
			constexpr auto ImportKeyField = 0x88; // FString
		}
		// Inheritance: UActorComponent > UObject
		namespace UAchievementComponent
		{
			constexpr auto LogDebugMessages = 0xb0; // bool
			constexpr auto MyPlayerController = 0xb8; // AArchonPlayerController*
			constexpr auto ProgressionComponent = 0xc0; // UProgressionComponent*
			constexpr auto AchievementTable = 0xc8; // UDataTable*
			constexpr auto Achievements = 0xd0; // TArray<UAchievement*>
			constexpr auto UnlockedAchievements = 0xe0; // TArray<FString>
		}
		// Inheritance: UObjectiveOwner > UObject
		namespace UAchievement
		{
			constexpr auto LogDebugMessages = 0x30; // bool
			constexpr auto OwningComponent = 0x38; // UAchievementComponent*
			constexpr auto AchievementID = 0x40; // FString
			constexpr auto Objectives = 0x50; // TArray<UObjective*>
			constexpr auto ObjectiveDataObjects = 0x60; // TArray<UObjectiveData*>
		}
		// Inheritance: AArchonPlayerState > APlayerState > AInfo > AActor > UObject
		namespace Aplayer_state_bp_C
		{
			constexpr auto UberGraphFrame = 0x6a0; // FPointerToUberGraphFrame
			constexpr auto player_state_telemetry_component = 0x6a8; // Uplayer_state_telemetry_component_C*
			constexpr auto ArchonInventory = 0x6b0; // UArchonInventoryComponent*
			constexpr auto DefaultSceneRoot = 0x6b8; // USceneComponent*
			constexpr auto PlayerColor = 0x6c0; // FLinearColor
			constexpr auto PlayerPawn = 0x6d0; // APawn*
			constexpr auto CurrentHealth = 0x6d8; // float
			constexpr auto PlayerInventory = 0x6e0; // TArray<FStruct_PlayerInventoryEntry>
			constexpr auto TalkingStateChangeDispatcher = 0x6f0; // FMulticastInlineDelegate
			constexpr auto IsTalking = 0x700; // bool
			constexpr auto ReadyForMission = 0x701; // bool
			constexpr auto InCity = 0x702; // bool
			constexpr auto ReviveTokenCount = 0x704; // int32_t
			constexpr auto IsPrimaryColor = 0x708; // bool
			constexpr auto CurrentlySelectedSlot = 0x70c; // int32_t
			constexpr auto SelectedQuickslotChangedDispatcher = 0x710; // FMulticastInlineDelegate
			constexpr auto DamageTaken = 0x720; // float
			constexpr auto DamageGiven = 0x724; // float
			constexpr auto WeaponPower = 0x728; // float
			constexpr auto TimesPlayerWasRevived = 0x72c; // int32_t
			constexpr auto BleedoutCount = 0x730; // int32_t
			constexpr auto StaggerCount = 0x734; // int32_t
			constexpr auto IsAutoPlayer = 0x738; // bool
			constexpr auto IsServerReadyToStart = 0x739; // bool
			constexpr auto NumRevivesPerformed = 0x73c; // int32_t
			constexpr auto TrackingDamageGiven = 0x740; // bool
			constexpr auto PartBreakCount = 0x744; // int32_t
			constexpr auto InterruptCount = 0x748; // int32_t
			constexpr auto EndOfGameRanking = 0x74c; // float
			constexpr auto InAirship = 0x750; // bool
			constexpr auto PlayerEndOfMatchLootRolls = 0x758; // TArray<Flootroll_info>
			constexpr auto LootRollsForRemainingStims = 0x768; // int32_t
			constexpr auto L_HuntPassData = 0x770; // FHuntPassSeasonDataTable
			constexpr auto PlayerInjuryCount = 0x9e8; // int32_t
			constexpr auto PlayerEndOfMatchLootRollsResetState = 0x9f0; // TArray<Flootroll_info>
		}
		// Inheritance: APawn > AActor > UObject
		namespace ACharacter
		{
			constexpr auto Mesh = 0x280; // USkeletalMeshComponent*
			constexpr auto CharacterMovement = 0x288; // UCharacterMovementComponent*
			constexpr auto CapsuleComponent = 0x290; // UCapsuleComponent*
			constexpr auto BasedMovement = 0x298; // FBasedMovementInfo
			constexpr auto ReplicatedBasedMovement = 0x2c8; // FBasedMovementInfo
			constexpr auto AnimRootMotionTranslationScale = 0x2f8; // float
			constexpr auto BaseTranslationOffset = 0x2fc; // FVector
			constexpr auto BaseRotationOffset = 0x310; // FQuat
			constexpr auto ReplicatedServerLastTransformUpdateTimeStamp = 0x320; // float
			constexpr auto ReplayLastTransformUpdateTimeStamp = 0x324; // float
			constexpr auto ReplicatedMovementMode = 0x328; // char
			constexpr auto bInBaseReplication = 0x329; // bool
			constexpr auto CrouchedEyeHeight = 0x32c; // float
			constexpr auto bClientWasFalling = 0x330; // char : 1
			constexpr auto bSimGravityDisabled = 0x330; // char : 1
			constexpr auto bClientResimulateRootMotion = 0x330; // char : 1
			constexpr auto bClientResimulateRootMotionSources = 0x330; // char : 1
			constexpr auto bClientUpdating = 0x330; // char : 1
			constexpr auto bPressedJump = 0x330; // char : 1
			constexpr auto bProxyIsJumpForceApplied = 0x330; // char : 1
			constexpr auto bIsCrouched = 0x330; // char : 1
			constexpr auto bClientCheckEncroachmentOnNetUpdate = 0x331; // char : 1
			constexpr auto bServerMoveIgnoreRootMotion = 0x331; // char : 1
			constexpr auto bWasJumping = 0x331; // char : 1
			constexpr auto JumpKeyHoldTime = 0x334; // float
			constexpr auto JumpForceTimeRemaining = 0x338; // float
			constexpr auto ProxyJumpForceStartedTime = 0x33c; // float
			constexpr auto JumpMaxHoldTime = 0x340; // float
			constexpr auto JumpMaxCount = 0x344; // int32_t
			constexpr auto JumpCurrentCount = 0x348; // int32_t
			constexpr auto JumpCurrentCountPreJump = 0x34c; // int32_t
			constexpr auto OnReachedJumpApex = 0x358; // FMulticastInlineDelegate
			constexpr auto MovementModeChangedDelegate = 0x378; // FMulticastInlineDelegate
			constexpr auto OnCharacterMovementUpdated = 0x388; // FMulticastInlineDelegate
			constexpr auto SavedRootMotion = 0x398; // FRootMotionSourceGroup
			constexpr auto ClientRootMotionParams = 0x3d0; // FRootMotionMovementParams
			constexpr auto RootMotionRepMoves = 0x410; // TArray<FSimulatedRootMotionReplicatedMove>
			constexpr auto RepRootMotion = 0x420; // FRepRootMotionMontage
		}
		// Inheritance: ABP_BaseArchonWeapon_C > AArchonWeapon > AArchonEquipment > AActor > UObject
		namespace ABP_EB_Weapon_C
		{
			constexpr auto UberGraphFrame = 0x10c8; // FPointerToUberGraphFrame
			constexpr auto SwordParticle = 0x10d0; // UParticleSystemComponent*
			constexpr auto weapon_meter_bpc = 0x10d8; // Uweapon_meter_bpc_C*
			constexpr auto p_super_mode = 0x10e0; // UParticleSystemComponent*
			constexpr auto WeaponDynamicMaterial = 0x10e8; // UMaterialInstanceDynamic*
			constexpr auto BaseColor = 0x10f0; // FLinearColor
			constexpr auto DAMAGEWINDOWCOLOR = 0x1100; // FLinearColor
			constexpr auto BASECHARGEGAINPERXSTRIKE = 0x1110; // float
			constexpr auto BASECHARGEDECAYRATE = 0x1114; // float
			constexpr auto BASECHARGELOWDECAYDELAY = 0x1118; // float
			constexpr auto BASECHARGEHIGHDECAYDELAY = 0x111c; // float
			constexpr auto BASECHARGEMAX = 0x1120; // float
			constexpr auto BASESUPERDECAYRATE = 0x1124; // float
			constexpr auto BASECHARGEGAINPEREMBERSTRIKE = 0x1128; // float
			constexpr auto DAMAGEWINDOWEMBERCOLOR = 0x112c; // FLinearColor
			constexpr auto EMBERCHARGESPECIALATTACKCOST = 0x113c; // float
			constexpr auto CHARGEWINDOWCOLOR = 0x1140; // FLinearColor
			constexpr auto SPECIALATTACKCOLOR = 0x1150; // FLinearColor
			constexpr auto BASECHARGEGAINPERYSTRIKE = 0x1160; // float
			constexpr auto AttackType = 0x1164; // EBAttackType
			constexpr auto SuperModeAttackRate = 0x1168; // float
			constexpr auto SuperWeaponScaleFactor = 0x116c; // float
			constexpr auto BaseWeaponScaleFactor = 0x1170; // float
			constexpr auto PersistentSound = 0x1178; // TArray<FStruct_ElementToAKEvent>
			constexpr auto WeaponPowerTableData = 0x1188; // FWeaponPowerTableData
			constexpr auto StartSound = 0x1350; // TArray<FStruct_ElementToAKEvent>
			constexpr auto OnRepeatingElement = 0x1360; // FMulticastInlineDelegate
			constexpr auto RepeatingElementsStaminaCost = 0x1370; // float
			constexpr auto SwordchargeReady = 0x1374; // bool
			constexpr auto TokenEffect = 0x1378; // UParticleSystemComponent*
			constexpr auto SwordchargeHandle = 0x1380; // FActiveGameplayEffectHandle
			constexpr auto TokenMaxedEffect = 0x1388; // UParticleSystemComponent*
			constexpr auto CurrentSwordcharges = 0x1390; // int32_t
			constexpr auto MaxSwordcharges = 0x1394; // int32_t
			constexpr auto MeterGainReady = 0x1398; // bool
			constexpr auto TickingMeterGainReady = 0x1399; // bool
			constexpr auto MeterGainDebug = 0x139a; // bool
			constexpr auto SwordchargeFillPercent = 0x139c; // float
			constexpr auto SwordchargeChange = 0x13a0; // FMulticastInlineDelegate
			constexpr auto PreviousFillPercent = 0x13b0; // float
			constexpr auto ElementToSuperParticle = 0x13b8; // TMap<EArchonElementType, UParticleSystem*>
			constexpr auto AoEEmpowered = 0x1408; // bool
			constexpr auto ProjectileEmpowered = 0x1409; // bool
			constexpr auto OnSwordchargeComboUsed = 0x1410; // FMulticastInlineDelegate
			constexpr auto AoeClass = 0x1420; // Aeb_ground_persistent_attack_bp_C*
			constexpr auto AsPawn = 0x1428; // APawn*
		}
		// Inheritance: APlayerState > AInfo > AActor > UObject
		namespace AArchonPlayerState
		{
			constexpr auto OnActiveGameplayStateChanged = 0x328; // FMulticastInlineDelegate
			constexpr auto DebugColorIndex = 0x338; // int32_t
			constexpr auto EscalationPlayerStateComponent = 0x33c; // TWeakObjectPtr<UEscalationPlayerStateComponent>
			constexpr auto AppearanceData = 0x358; // FArchonAppearanceData
			constexpr auto Accessories = 0x398; // TArray<FReplAccessoryClass>
			constexpr auto AirshipSlot = 0x3a8; // int32_t
			constexpr auto BleedoutState = 0x3ac; // int32_t
			constexpr auto BleedoutTimerLength = 0x3b0; // float
			constexpr auto BleedoutTimeRemaining = 0x3b4; // float
			constexpr auto PlayerStartSlot = 0x3b8; // int32_t
			constexpr auto bReadyToStartGame = 0x3bc; // bool
			constexpr auto ComboTelemetryTracker = 0x3c0; // FComboTelemetryTracker
			constexpr auto Loot = 0x3c8; // TArray<FArchonLoot>
			constexpr auto OnItemWithCustomDataReceived = 0x3d8; // FMulticastInlineDelegate
			constexpr auto GuildNameplate = 0x3e8; // FString
			constexpr auto GuildNameplateSanitized = 0x3f8; // FString
			constexpr auto TitleId = 0x408; // FString
			constexpr auto OnBehemothPartBroken = 0x418; // FMulticastInlineDelegate
			constexpr auto OnBehemothPartExposed = 0x428; // FMulticastInlineDelegate
			constexpr auto OnBehemothStaggered = 0x438; // FMulticastInlineDelegate
			constexpr auto OnBehemothInterrupted = 0x448; // FMulticastInlineDelegate
			constexpr auto OnPerfectDodge = 0x458; // FMulticastInlineDelegate
			constexpr auto OnServerTryHitResult = 0x468; // FMulticastInlineDelegate
			constexpr auto OnDamagedBehemoth = 0x478; // FMulticastInlineDelegate
			constexpr auto OnDamageReceived = 0x488; // FMulticastInlineDelegate
			constexpr auto OnPlayerRevivedSomeone = 0x498; // FMulticastInlineDelegate
			constexpr auto OnCreatureKilled = 0x4a8; // FMulticastInlineDelegate
			constexpr auto OnEnterBleedOut = 0x4d8; // FMulticastInlineDelegate
			constexpr auto OnPlayerExitCombat = 0x538; // FMulticastInlineDelegate
			constexpr auto Entitlements = 0x548; // TArray<FArchonPlayerEntitlement>
			constexpr auto IsChatBanned = 0x558; // bool
			constexpr auto bBleedoutState = 0x559; // bool
			constexpr auto CurrentStaggerDamagesDealt = 0x560; // TArray<FStaggerDamagesDealt>
			constexpr auto MonsterPartDamagesDealt = 0x570; // TArray<FMonsterPartDamagesDealt>
			constexpr auto DamagesDealt = 0x580; // TArray<FDamagesDealt>
			constexpr auto ServerPlatformPool = 0x590; // FString
			constexpr auto ConnectionInfo = 0x5a0; // FPlayerConnectionInfo
			constexpr auto bUserWantsToRetryMatch = 0x5d8; // bool
			constexpr auto bUserWantsToLeaveMatch = 0x5f0; // bool
			constexpr auto Weapon = 0x608; // EWeaponType
			constexpr auto WeaponExperienceDetails = 0x60c; // FExperienceDetails
			constexpr auto PlayerRoleId = 0x638; // FString
			constexpr auto CachedCharacter = 0x678; // AArchonCharacter*
			constexpr auto PlayerMatchReportClass = 0x680; // UPlayerMatchReport*
			constexpr auto PlayerMatchReport = 0x688; // UPlayerMatchReport*
			constexpr auto bIsActiveGameplay = 0x690; // bool
		}
		// Inheritance: AActor > UObject
		namespace AArchonEquipment
		{
			constexpr auto SetIsHiddenDelegate = 0x228; // FMulticastInlineDelegate
			constexpr auto LoadoutItemSlotType = 0x238; // ELoadoutItemSlotType
			constexpr auto ItemId = 0x240; // FString
			constexpr auto ItemInstanceID = 0x250; // FString
			constexpr auto CreationOrderId = 0x260; // int32_t
			constexpr auto EquipmentPartComponents = 0x268; // TArray<UArchonEquipmentPart*>
			constexpr auto AppliedGearStats = 0x278; // TArray<FGearStatData>
			constexpr auto AppliedGearSetBonusId = 0x288; // FDataTableRowHandle
			constexpr auto AppliedDamageModifiersHandle = 0x298; // FGuid
			constexpr auto GameplayModifiersToAddWhileGameplayActive = 0x2a8; // FArchonGameplayModifierClasses
			constexpr auto Weight = 0x2f0; // int32_t
			constexpr auto bIsEquipped = 0x2f4; // bool
			constexpr auto bIsEquippedForGameplay = 0x2f5; // bool
			constexpr auto bIsActiveGameplay = 0x2f6; // bool
			constexpr auto bCalledBPHandleEquipForGameplay = 0x2f7; // bool
			constexpr auto AppliedGameplayModifiersWhileActive = 0x2f8; // UArchonGameplayModifierGroup*
		}
		// Inheritance: AActor > UObject
		namespace AArchonCheatActor
		{
			constexpr auto ProgressionCheatProfileTable = 0x220; // UDataTable*
			constexpr auto InProgressLoadProgressionProfileCheats = 0x250; // TArray<FLoadProgressionProfileOperationData>
		}
		// Inheritance: APhxCharacterBase > ACharacter > APawn > AActor > UObject
		namespace AArchonCharacterBase
		{
			constexpr auto SignificanceDistanceFar = 0x560; // float
			constexpr auto SignificanceDistanceMedium = 0x564; // float
		}
		// Inheritance: AArchonGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
		namespace AArchonGameMode
		{
			constexpr auto OnBehemothDeath = 0x338; // FMulticastInlineDelegate
			constexpr auto CurrentMissionInfo = 0x348; // FArchonLobbyMissionInfo
			constexpr auto ComponentsToSpawnOnPlayerController = 0x400; // TArray<UActorComponent*>
			constexpr auto PendingShutdownPhase = 0x448; // bool
			constexpr auto BeaconHost = 0x450; // AArchonOnlineBeaconHost*
			constexpr auto bEnableReconnectBeacon = 0x458; // bool
			constexpr auto NoPlayerTimeout = 0x464; // float
			constexpr auto AFKTimeout = 0x468; // float
			constexpr auto AFKTimeoutFriendly = 0x46c; // float
			constexpr auto SelectedMonsterClass = 0x470; // AArchonBehemoth*
			constexpr auto AdditionalBehemothClasses = 0x478; // TArray<AArchonBehemoth*>
			constexpr auto ZonePreset = 0x488; // int32_t
			constexpr auto SelectedTODClass = 0x490; // AAtmosphereBase*
			constexpr auto ExpectedPlayerCount = 0x498; // int32_t
			constexpr auto MaxPlayers = 0x49c; // int32_t
			constexpr auto DebugBehemothClass = 0x4a0; // FString
			constexpr auto DebugAdditionalBehemothClass = 0x4b0; // FString
			constexpr auto PlayerPostLoginDelegate = 0x4c8; // FMulticastInlineDelegate
			constexpr auto SecondsUntilNextKeepAlive = 0x4d8; // float
			constexpr auto bShouldKeepCandidateAlive = 0x4dc; // bool
			constexpr auto RetryCount = 0x4e0; // int32_t
			constexpr auto ServerShutdownTime = 0x4f8; // FDateTime
			constexpr auto LastPlayerStartTicket = 0x500; // int32_t
		}
		// Inheritance: AGameMode > AGameModeBase > AInfo > AActor > UObject
		namespace AArchonGameModeBase
		{
			constexpr auto GameModeTags = 0x308; // FGameplayTagContainer
			constexpr auto GameModeGeneratedItems = 0x328; // UGeneratedItemSet*
			constexpr auto GameModeType = 0x330; // EArchonGameMode
			constexpr auto IslandGameModeType = 0x331; // EArchonIslandGameMode
		}
		// Inheritance: AArchonEquipment > AActor > UObject
		namespace AArchonArmorSetItem
		{
			constexpr auto Abilities = 0x300; // TArray<UGameplayAbility*>
			constexpr auto AbilityLevel = 0x310; // int32_t
			constexpr auto CurrentLevel = 0x314; // EUpgradeableItemLevel
			constexpr auto TransmogId = 0x318; // FName
			constexpr auto SignificanceDistanceFar = 0x338; // float
			constexpr auto SignificanceDistanceMedium = 0x33c; // float
			constexpr auto TickExecFilter = 0x340; // ECityExecFilter
			constexpr auto TickRateActive = 0x344; // float
			constexpr auto TickRatePassive = 0x348; // float
		}
		// Inheritance: AGameMode > AGameModeBase > AInfo > AActor > UObject
		namespace AARSharedWorldGameMode
		{
			constexpr auto BufferSizePerChunk = 0x308; // int32_t
		}
		// Inheritance: AGameState > AGameStateBase > AInfo > AActor > UObject
		namespace AARSharedWorldGameState
		{
			constexpr auto PreviewImageData = 0x290; // TArray<char>
			constexpr auto ARWorldData = 0x2a0; // TArray<char>
			constexpr auto PreviewImageBytesTotal = 0x2b0; // int32_t
			constexpr auto ARWorldBytesTotal = 0x2b4; // int32_t
			constexpr auto PreviewImageBytesDelivered = 0x2b8; // int32_t
			constexpr auto ARWorldBytesDelivered = 0x2bc; // int32_t
		}
		// Inheritance: AController > AActor > UObject
		namespace AAIController
		{
			constexpr auto bStartAILogicOnPossess = 0x2d0; // char : 1
			constexpr auto bStopAILogicOnUnposses = 0x2d0; // char : 1
			constexpr auto bLOSflag = 0x2d0; // char : 1
			constexpr auto bSkipExtraLOSChecks = 0x2d0; // char : 1
			constexpr auto bAllowStrafe = 0x2d0; // char : 1
			constexpr auto bWantsPlayerState = 0x2d0; // char : 1
			constexpr auto bSetControlRotationFromPawnOrientation = 0x2d0; // char : 1
			constexpr auto PathFollowingComponent = 0x2d8; // UPathFollowingComponent*
			constexpr auto BrainComponent = 0x2e0; // UBrainComponent*
			constexpr auto PerceptionComponent = 0x2e8; // UAIPerceptionComponent*
			constexpr auto ActionsComp = 0x2f0; // UPawnActionsComponent*
			constexpr auto Blackboard = 0x2f8; // UBlackboardComponent*
			constexpr auto CachedGameplayTasksComponent = 0x300; // UGameplayTasksComponent*
			constexpr auto DefaultNavigationFilterClass = 0x308; // UNavigationQueryFilter*
			constexpr auto ReceiveMoveCompleted = 0x310; // FMulticastInlineDelegate
		}
		// Inheritance: AActor > UObject
		namespace AArchonLoadout
		{
			constexpr auto QuickItemSlotMappings = 0x280; // TArray<FLoadoutQuickItemSlotMapping>
			constexpr auto QuickItemSlotUnlockConditions = 0x290; // TArray<FLoadoutQuickItemSlotUnlockCondition>
			constexpr auto LoadoutSlotUnlockConditions = 0x2a0; // TArray<FLoadoutSlotUnlockCondition>
			constexpr auto ServerOnLoadoutChanged = 0x2b0; // FMulticastInlineDelegate
			constexpr auto ClientOnLoadoutChanged = 0x2c0; // FMulticastInlineDelegate
			constexpr auto ClientOnCuriosityAssigned = 0x2d8; // FMulticastInlineDelegate
			constexpr auto ServerOnEquippedCellsChanged = 0x2e8; // FMulticastInlineDelegate
			constexpr auto ServerOnQuickitemUsed = 0x2f8; // FMulticastInlineDelegate
			constexpr auto DefaultLoadout = 0x318; // FLoadoutSpecification
			constexpr auto PlayerController = 0x630; // AArchonPlayerController*
			constexpr auto Inventory = 0x638; // AArchonInventory*
			constexpr auto ProgressionComponent = 0x648; // UProgressionComponent*
			constexpr auto QuestComponent = 0x650; // UQuestSystemComponent*
			constexpr auto PlayerJourneyComponent = 0x658; // UPlayerJourneyComponent*
			constexpr auto QuickItemsRuntimeData = 0x660; // TArray<FLoadoutQuickItem>
			constexpr auto LoadoutSlotDataArray = 0x670; // TArray<UArchonLoadoutSlotData*>
			constexpr auto ActiveLoadoutSlotIndex = 0x680; // int32_t
			constexpr auto NumLoadoutSlots = 0x684; // int32_t
			constexpr auto NumAccountLoadoutSlots = 0x688; // int32_t
			constexpr auto NumCharacterLoadoutSlots = 0x68c; // int32_t
			constexpr auto MaxNumLoadoutSlots = 0x690; // int32_t
			constexpr auto MaxNumAccountLoadoutSlots = 0x694; // int32_t
			constexpr auto MaxNumCharacterLoadoutSlots = 0x698; // int32_t
			constexpr auto DontGarbageCollectThese = 0x6e8; // TArray<UArchonInventoryItem*>
			constexpr auto BannerInstanceId = 0x700; // FItemInstanceIdRepl
			constexpr auto FlareInstanceId = 0x718; // FItemInstanceIdRepl
			constexpr auto IntroEmoteInstanceId = 0x730; // FItemInstanceIdRepl
			constexpr auto EndEmoteInstanceId = 0x748; // FItemInstanceIdRepl
			constexpr auto ManualEmoteInstanceIds = 0x760; // TArray<FItemInstanceIdRepl>
			constexpr auto QuickChatIds = 0x770; // TArray<FString>
			constexpr auto QuickEmojiIds = 0x780; // TArray<FItemIdRepl>
			constexpr auto QuickCuriosities = 0x790; // TArray<FLoadoutQuickItem>
			constexpr auto QuickWheel = 0x7a0; // TArray<FString>
			constexpr auto QuickWheelCuriosities = 0x7b0; // TArray<FLoadoutQuickItem>
			constexpr auto QuickWheelEmotes = 0x7c0; // TArray<FItemInstanceIdRepl>
			constexpr auto EmojiInstanceIds = 0x7d0; // TArray<FItemInstanceIdRepl>
			constexpr auto TitleInstanceId = 0x7e0; // FItemInstanceIdRepl
			constexpr auto HeadAccessoryInstanceId = 0x7f8; // FItemInstanceIdRepl
			constexpr auto BackAccessoryInstanceId = 0x810; // FItemInstanceIdRepl
			constexpr auto PetInstanceId = 0x828; // FItemInstanceIdRepl
			constexpr auto GliderInstanceId = 0x840; // FItemInstanceIdRepl
			constexpr auto CachedBanner = 0x858; // UArchonInventoryItem_Banner*
			constexpr auto CachedFlare = 0x860; // UArchonInventoryItem_QuickItem*
			constexpr auto CachedIntroEmote = 0x868; // UArchonInventoryItem_Emote*
			constexpr auto CachedEndEmote = 0x870; // UArchonInventoryItem_Emote*
			constexpr auto CachedTitle = 0x878; // UArchonInventoryItem_Title*
			constexpr auto CachedHeadAccessory = 0x880; // UArchonInventoryItem_Accessory*
			constexpr auto CachedBackAccessory = 0x888; // UArchonInventoryItem_Accessory*
			constexpr auto CachedPet = 0x890; // UArchonInventoryItem_Companion*
			constexpr auto CachedGlider = 0x898; // UArchonInventoryItem_Glider*
			constexpr auto bReplicated = 0xa80; // bool
		}
	}
}