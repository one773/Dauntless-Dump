// Inheritance: 
namespace FAIDamageEvent
{
	constexpr auto Amount = 0x0; // float
	constexpr auto Location = 0x4; // FVector
	constexpr auto HitLocation = 0x10; // FVector
	constexpr auto DamagedActor = 0x20; // AActor*
	constexpr auto Instigator = 0x28; // AActor*
}
// Inheritance: 
namespace FARSkeletonDefinition
{
	constexpr auto NumJoints = 0x0; // int32_t
	constexpr auto JointNames = 0x8; // TArray<FName>
	constexpr auto ParentIndices = 0x18; // TArray<int32_t>
}