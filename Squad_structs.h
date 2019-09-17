#pragma once

// Name: Squad, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Squad.ESQBuildState
enum class ESQBuildState : uint8_t
{
	ESQBuildState__Completed       = 0,
	ESQBuildState__HalfBuilt       = 1,
	ESQBuildState__Unbuilt         = 2,
	ESQBuildState__ESQBuildState_MAX = 3
};


// Enum Squad.ESQSoldierSeatState
enum class ESQSoldierSeatState : uint8_t
{
	ESQSoldierSeatState__Locked    = 0,
	ESQSoldierSeatState__LockedWithWeapon = 1,
	ESQSoldierSeatState__Hidden    = 2,
	ESQSoldierSeatState__None      = 3,
	ESQSoldierSeatState__ESQSoldierSeatState_MAX = 4
};


// Enum Squad.ESQListenerType
enum class ESQListenerType : uint8_t
{
	ESQListenerType__Default       = 0,
	ESQListenerType__Soldier       = 1,
	ESQListenerType__TurretOpenAir = 2,
	ESQListenerType__TurretLight   = 3,
	ESQListenerType__TurretHeavy   = 4,
	ESQListenerType__TurretArmored = 5,
	ESQListenerType__VehicleOpenAir = 6,
	ESQListenerType__VehicleLight  = 7,
	ESQListenerType__VehicleHeavy  = 8,
	ESQListenerType__VehicleArmored = 9,
	ESQListenerType__ESQListenerType_MAX = 10
};


// Enum Squad.ESQEmotes
enum class ESQEmotes : uint8_t
{
	ESQEmotes__None                = 0,
	ESQEmotes__HandSignalAttack    = 1,
	ESQEmotes__HandSignalBuild     = 2,
	ESQEmotes__HandSignalDefend    = 3,
	ESQEmotes__HandSignalMove      = 4,
	ESQEmotes__HandSignalRally     = 5,
	ESQEmotes__HandSignalObserve   = 6,
	ESQEmotes__HandActionRearm     = 7,
	ESQEmotes__HandActionLoadup    = 8,
	ESQEmotes__HandActionUnload    = 9,
	ESQEmotes__MAX_Visible         = 10,
	ESQEmotes__Custom              = 11,
	ESQEmotes__MAX                 = 12
};


// Enum Squad.EClimbState
enum class EClimbState : uint8_t
{
	EClimbState__Interpolating     = 0,
	EClimbState__RequiredOutro     = 1,
	EClimbState__Outro             = 2,
	EClimbState__End               = 3,
	EClimbState__None              = 4,
	EClimbState__EClimbState_MAX   = 5
};


// Enum Squad.EClimbType
enum class EClimbType : uint8_t
{
	EClimbType__None               = 0,
	EClimbType__OverLow            = 1,
	EClimbType__OverMid            = 2,
	EClimbType__OntoLow            = 3,
	EClimbType__OntoMid            = 4,
	EClimbType__OntoHigh           = 5,
	EClimbType__MAX                = 6
};


// Enum Squad.ESQTeam
enum class ESQTeam : uint8_t
{
	ESQTeam__Team_Neutral          = 0,
	ESQTeam__Team_One              = 1,
	ESQTeam__Team_Two              = 2,
	ESQTeam__Team_MAX              = 3
};


// Enum Squad.ESQChat
enum class ESQChat : uint8_t
{
	ESQChat__Unknown               = 0,
	ESQChat__All                   = 1,
	ESQChat__Team                  = 2,
	ESQChat__Squad                 = 3,
	ESQChat__GameNotification      = 4,
	ESQChat__GameNotificationTeam  = 5,
	ESQChat__GameChat              = 6,
	ESQChat__AdminBroadcast        = 7,
	ESQChat__AdminChat             = 8,
	ESQChat__AdminNotification     = 9,
	ESQChat__PlayerNotification    = 10,
	ESQChat__ServerMessage         = 11,
	ESQChat__System                = 12,
	ESQChat__ESQChat_MAX           = 13
};


// Enum Squad.ESQNotificationTypes
enum class ESQNotificationTypes : uint8_t
{
	ESQNotificationTypes__None     = 0,
	ESQNotificationTypes__Error    = 1,
	ESQNotificationTypes__Warning  = 2,
	ESQNotificationTypes__Message  = 3,
	ESQNotificationTypes__Negative = 4,
	ESQNotificationTypes__Positive = 5,
	ESQNotificationTypes__Commander = 6,
	ESQNotificationTypes__Team     = 7,
	ESQNotificationTypes__Squad    = 8,
	ESQNotificationTypes__Fireteam = 9,
	ESQNotificationTypes__GameMode = 10,
	ESQNotificationTypes__MAX      = 11
};


// Enum Squad.ESQTextVerticalAlignment
enum class ESQTextVerticalAlignment : uint8_t
{
	ESQTextVerticalAlignment__Top  = 0,
	ESQTextVerticalAlignment__Center = 1,
	ESQTextVerticalAlignment__Bottom = 2,
	ESQTextVerticalAlignment__ESQTextVerticalAlignment_MAX = 3
};


// Enum Squad.ESQTextHorizontalAlignment
enum class ESQTextHorizontalAlignment : uint8_t
{
	ESQTextHorizontalAlignment__Left = 0,
	ESQTextHorizontalAlignment__Center = 1,
	ESQTextHorizontalAlignment__Right = 2,
	ESQTextHorizontalAlignment__ESQTextHorizontalAlignment_MAX = 3
};


// Enum Squad.ESQRemoteTalkerDisplayChannel
enum class ESQRemoteTalkerDisplayChannel : uint8_t
{
	ESQRemoteTalkerDisplayChannel__None = 0,
	ESQRemoteTalkerDisplayChannel__Local = 1,
	ESQRemoteTalkerDisplayChannel__Squad = 2,
	ESQRemoteTalkerDisplayChannel__Command = 3,
	ESQRemoteTalkerDisplayChannel__CommandSQ1 = 4,
	ESQRemoteTalkerDisplayChannel__CommandSQ2 = 5,
	ESQRemoteTalkerDisplayChannel__CommandSQ3 = 6,
	ESQRemoteTalkerDisplayChannel__CommandSQ4 = 7,
	ESQRemoteTalkerDisplayChannel__CommandSQ5 = 8,
	ESQRemoteTalkerDisplayChannel__CommandSQ6 = 9,
	ESQRemoteTalkerDisplayChannel__CommandSQ7 = 10,
	ESQRemoteTalkerDisplayChannel__CommandSQ8 = 11,
	ESQRemoteTalkerDisplayChannel__CommandSQ9 = 12,
	ESQRemoteTalkerDisplayChannel__ESQRemoteTalkerDisplayChannel_MAX = 13
};


// Enum Squad.ESQAnimState
enum class ESQAnimState : uint8_t
{
	ESQAnimState__Out              = 0,
	ESQAnimState__Entered          = 1,
	ESQAnimState__FullWeight       = 2,
	ESQAnimState__Left             = 3,
	ESQAnimState__ESQAnimState_MAX = 4
};


// Enum Squad.ESQDrivenDestinationMode
enum class ESQDrivenDestinationMode : uint8_t
{
	ESQDrivenDestinationMode__Bone = 0,
	ESQDrivenDestinationMode__MorphTarget = 1,
	ESQDrivenDestinationMode__MaterialParameter = 2,
	ESQDrivenDestinationMode__ESQDrivenDestinationMode_MAX = 3
};


// Enum Squad.ESQDrivenBoneModificationMode
enum class ESQDrivenBoneModificationMode : uint8_t
{
	ESQDrivenBoneModificationMode__AddToInput = 0,
	ESQDrivenBoneModificationMode__ReplaceComponent = 1,
	ESQDrivenBoneModificationMode__AddToRefPose = 2,
	ESQDrivenBoneModificationMode__ESQDrivenBoneModificationMode_MAX = 3
};


// Enum Squad.ESQComponentType
enum class ESQComponentType : uint8_t
{
	ESQComponentType__None         = 0,
	ESQComponentType__TranslationX = 1,
	ESQComponentType__TranslationY = 2,
	ESQComponentType__TranslationZ = 3,
	ESQComponentType__RotationX    = 4,
	ESQComponentType__RotationY    = 5,
	ESQComponentType__RotationZ    = 6,
	ESQComponentType__Scale        = 7,
	ESQComponentType__ScaleX       = 8,
	ESQComponentType__ScaleY       = 9,
	ESQComponentType__ScaleZ       = 10,
	ESQComponentType__ESQComponentType_MAX = 11
};


// Enum Squad.EApprovalRequestChannels
enum class EApprovalRequestChannels : uint8_t
{
	EApprovalRequestChannels__Undefined = 0,
	EApprovalRequestChannels__SquadLeader = 1,
	EApprovalRequestChannels__SinglePlayer = 2,
	EApprovalRequestChannels__EApprovalRequestChannels_MAX = 3
};


// Enum Squad.EApprovalRequestTypes
enum class EApprovalRequestTypes : uint8_t
{
	EApprovalRequestTypes__Undefined = 0,
	EApprovalRequestTypes__VehicleClaim = 1,
	EApprovalRequestTypes__RequestToJoinSquad = 2,
	EApprovalRequestTypes__EApprovalRequestTypes_MAX = 3
};


// Enum Squad.ESQReturnBool
enum class ESQReturnBool : uint8_t
{
	ESQReturnBool__IsTrue          = 0,
	ESQReturnBool__IsFalse         = 1,
	ESQReturnBool__ESQReturnBool_MAX = 2
};


// Enum Squad.ESQConsoleMessageType
enum class ESQConsoleMessageType : uint8_t
{
	ESQConsoleMessageType__Normal  = 0,
	ESQConsoleMessageType__Warning = 1,
	ESQConsoleMessageType__Error   = 2,
	ESQConsoleMessageType__ESQConsoleMessageType_MAX = 3
};


// Enum Squad.ESQConsoleVariableViewerState
enum class ESQConsoleVariableViewerState : uint8_t
{
	ESQConsoleVariableViewerState__None = 0,
	ESQConsoleVariableViewerState__Soldier = 1,
	ESQConsoleVariableViewerState__Driver = 2,
	ESQConsoleVariableViewerState__Passenger = 3,
	ESQConsoleVariableViewerState__Spectator = 4,
	ESQConsoleVariableViewerState__MAX = 5
};


// Enum Squad.ESQBuffTypes
enum class ESQBuffTypes : uint8_t
{
	ESQBuffTypes__ProtectionZone   = 0,
	ESQBuffTypes__PendingDeath     = 1,
	ESQBuffTypes__NoFallDamage     = 2,
	ESQBuffTypes__StagingPhase     = 3,
	ESQBuffTypes__Max              = 4
};


// Enum Squad.ESQConsoleVariableRange
enum class ESQConsoleVariableRange : uint8_t
{
	ESQConsoleVariableRange__Self  = 0,
	ESQConsoleVariableRange__Meters = 1,
	ESQConsoleVariableRange__Meters01 = 2,
	ESQConsoleVariableRange__Meters02 = 3,
	ESQConsoleVariableRange__Meters03 = 4,
	ESQConsoleVariableRange__Meters04 = 5,
	ESQConsoleVariableRange__Meters05 = 6,
	ESQConsoleVariableRange__Meters06 = 7,
	ESQConsoleVariableRange__Meters07 = 8,
	ESQConsoleVariableRange__Meters08 = 9,
	ESQConsoleVariableRange__Meters09 = 10,
	ESQConsoleVariableRange__Meters10 = 11,
	ESQConsoleVariableRange__Meters11 = 12,
	ESQConsoleVariableRange__Meters12 = 13,
	ESQConsoleVariableRange__MAX   = 14
};


// Enum Squad.ESQMapWidgetTint
enum class ESQMapWidgetTint : uint8_t
{
	ESQMapWidgetTint__Neutral      = 0,
	ESQMapWidgetTint__Self         = 1,
	ESQMapWidgetTint__Squad        = 2,
	ESQMapWidgetTint__Team         = 3,
	ESQMapWidgetTint__SquadLeader  = 4,
	ESQMapWidgetTint__AllCommand   = 5,
	ESQMapWidgetTint__Enemy        = 6,
	ESQMapWidgetTint__FireTeam     = 7,
	ESQMapWidgetTint__MAX          = 8
};


// Enum Squad.EListLayout
enum class EListLayout : uint8_t
{
	EListLayout__SquadList         = 0,
	EListLayout__RoleList          = 1,
	EListLayout__InviteList        = 2,
	EListLayout__EListLayout_MAX   = 3
};


// Enum Squad.ESQSelectionState
enum class ESQSelectionState : uint8_t
{
	ESQSelectionState__None        = 0,
	ESQSelectionState__Highlighted = 1,
	ESQSelectionState__Selected    = 2,
	ESQSelectionState__ESQSelectionState_MAX = 3
};


// Enum Squad.EJoinButtonState
enum class EJoinButtonState : uint8_t
{
	EJoinButtonState__None         = 0,
	EJoinButtonState__Join         = 1,
	EJoinButtonState__Full         = 2,
	EJoinButtonState__Locked       = 3,
	EJoinButtonState__EJoinButtonState_MAX = 4
};


// Enum Squad.ESQAxis
enum class ESQAxis : uint8_t
{
	ESQAxis__None                  = 0,
	ESQAxis__X                     = 1,
	ESQAxis__Y                     = 2,
	ESQAxis__Z                     = 3,
	ESQAxis__ESQAxis_MAX           = 4
};


// Enum Squad.EFreeLookMode
enum class EFreeLookMode : uint8_t
{
	EFreeLookMode__NeverFreeLook   = 0,
	EFreeLookMode__ToggleFreeLook  = 1,
	EFreeLookMode__AlwaysFreeLook  = 2,
	EFreeLookMode__EFreeLookMode_MAX = 3
};


// Enum Squad.ESQSpawnPointType
enum class ESQSpawnPointType : uint8_t
{
	ESQSpawnPointType__None        = 0,
	ESQSpawnPointType__BaseSpawn   = 1,
	ESQSpawnPointType__HABSpawn    = 2,
	ESQSpawnPointType__RallySpawn  = 3,
	ESQSpawnPointType__CacheSpawn  = 4,
	ESQSpawnPointType__ESQSpawnPointType_MAX = 5
};


// Enum Squad.ESQContestingState
enum class ESQContestingState : uint8_t
{
	ESQContestingState__None       = 0,
	ESQContestingState__Attackable = 1,
	ESQContestingState__Defendable = 2,
	ESQContestingState__ESQContestingState_MAX = 3
};


// Enum Squad.ESQMoveSerializationMode
enum class ESQMoveSerializationMode : uint8_t
{
	ESQMoveSerializationMode__OldMove = 0,
	ESQMoveSerializationMode__DualFirstMove = 1,
	ESQMoveSerializationMode__DualSecondMove = 2,
	ESQMoveSerializationMode__SingleMove = 3,
	ESQMoveSerializationMode__ESQMoveSerializationMode_MAX = 4
};


// Enum Squad.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__AllwaysRelevantTeamOnly = 2,
	EClassRepNodeMapping__Spatialize_Static = 3,
	EClassRepNodeMapping__Spatialize_Dynamic = 4,
	EClassRepNodeMapping__Spatialize_Dormancy = 5,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 6
};


// Enum Squad.ESQRotationMovementState
enum class ESQRotationMovementState : uint8_t
{
	ESQRotationMovementState__Idle = 0,
	ESQRotationMovementState__Starting = 1,
	ESQRotationMovementState__Moving = 2,
	ESQRotationMovementState__Stopping = 3,
	ESQRotationMovementState__ESQRotationMovementState_MAX = 4
};


// Enum Squad.ESQRotorRunningState
enum class ESQRotorRunningState : uint8_t
{
	ESQRotorRunningState__Accelerating = 0,
	ESQRotorRunningState__Idling   = 1,
	ESQRotorRunningState__Locked   = 2,
	ESQRotorRunningState__ESQRotorRunningState_MAX = 3
};


// Enum Squad.ESQRotorState
enum class ESQRotorState : uint8_t
{
	ESQRotorState__None            = 0,
	ESQRotorState__Starting        = 1,
	ESQRotorState__Running         = 2,
	ESQRotorState__Stopping        = 3,
	ESQRotorState__Stopped         = 4,
	ESQRotorState__ESQRotorState_MAX = 5
};


// Enum Squad.ESQRotorType
enum class ESQRotorType : uint8_t
{
	ESQRotorType__Main             = 0,
	ESQRotorType__Lateral          = 1,
	ESQRotorType__ESQRotorType_MAX = 2
};


// Enum Squad.ESQShockwaveEffectType
enum class ESQShockwaveEffectType : uint8_t
{
	ESQShockwaveEffectType__Explosion = 0,
	ESQShockwaveEffectType__Blast  = 1,
	ESQShockwaveEffectType__ESQShockwaveEffectType_MAX = 2
};


// Enum Squad.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	ECustomMovementMode__MOVE_Bipod = 0,
	ECustomMovementMode__MOVE_Climbing = 1,
	ECustomMovementMode__MOVE_MAX  = 2
};


// Enum Squad.ESQSoundNodeFlyByState
enum class ESQSoundNodeFlyByState : uint8_t
{
	ESQSoundNodeFlyByState__Idle   = 0,
	ESQSoundNodeFlyByState__ComingTowardsNotPlaying = 1,
	ESQSoundNodeFlyByState__Playing = 2,
	ESQSoundNodeFlyByState__MovingAwayNotPlaying = 3,
	ESQSoundNodeFlyByState__ESQSoundNodeFlyByState_MAX = 4
};


// Enum Squad.EVehicleClaimCheckResults
enum class EVehicleClaimCheckResults : uint8_t
{
	EVehicleClaimCheckResults__OK  = 0,
	EVehicleClaimCheckResults__NullPtr = 1,
	EVehicleClaimCheckResults__EmptyRole = 2,
	EVehicleClaimCheckResults__EVehicleClaimCheckResults_MAX = 3
};


// Enum Squad.ESquadMemberUIAction
enum class ESquadMemberUIAction : uint8_t
{
	ESquadMemberUIAction__MenuOpen = 0,
	ESquadMemberUIAction__PromoteToSL = 1,
	ESquadMemberUIAction__Kick     = 2,
	ESquadMemberUIAction__SLInvite = 3,
	ESquadMemberUIAction__ESquadMemberUIAction_MAX = 4
};


// Enum Squad.ESquadMemberUIViewMode
enum class ESquadMemberUIViewMode : uint8_t
{
	ESquadMemberUIViewMode__SquadMembers = 0,
	ESquadMemberUIViewMode__UnassignedMembers = 1,
	ESquadMemberUIViewMode__ESquadMemberUIViewMode_MAX = 2
};


// Enum Squad.ESeatProgressMenuMode
enum class ESeatProgressMenuMode : uint8_t
{
	ESeatProgressMenuMode__InventoryOnly = 0,
	ESeatProgressMenuMode__Entering = 1,
	ESeatProgressMenuMode__Switching = 2,
	ESeatProgressMenuMode__Exiting = 3,
	ESeatProgressMenuMode__ESeatProgressMenuMode_MAX = 4
};


// Enum Squad.ESQVehicleClaimStatus
enum class ESQVehicleClaimStatus : uint8_t
{
	ESQVehicleClaimStatus__Active  = 0,
	ESQVehicleClaimStatus__DroppedOff = 1,
	ESQVehicleClaimStatus__Abandoned = 2,
	ESQVehicleClaimStatus__Destroyed = 3,
	ESQVehicleClaimStatus__ESQVehicleClaimStatus_MAX = 4
};


// Enum Squad.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Backpack          = 0,
	EWeaponType__Primary           = 1,
	EWeaponType__Secondary         = 2,
	EWeaponType__Special           = 3,
	EWeaponType__EWeaponType_MAX   = 4
};


// Enum Squad.ESQCreditsLineType
enum class ESQCreditsLineType : uint8_t
{
	ESQCreditsLineType__None       = 0,
	ESQCreditsLineType__Header     = 1,
	ESQCreditsLineType__LineBreak  = 2,
	ESQCreditsLineType__Names      = 3,
	ESQCreditsLineType__ESQCreditsLineType_MAX = 4
};


// Enum Squad.ESQKillReportChannel
enum class ESQKillReportChannel : uint8_t
{
	ESQKillReportChannel__None     = 0,
	ESQKillReportChannel__Admin    = 1,
	ESQKillReportChannel__Team     = 2,
	ESQKillReportChannel__TeamAndAdmin = 3,
	ESQKillReportChannel__Public   = 4,
	ESQKillReportChannel__ESQKillReportChannel_MAX = 5
};


// Enum Squad.ESQRepairSource
enum class ESQRepairSource : uint8_t
{
	ESQRepairSource__REPAIR_STATION = 0,
	ESQRepairSource__REPAIR_TOOL   = 1,
	ESQRepairSource__REPAIR_MAX    = 2
};


// Enum Squad.ESQSpawnInventoryReason
enum class ESQSpawnInventoryReason : uint8_t
{
	ESQSpawnInventoryReason__SpawningIn = 0,
	ESQSpawnInventoryReason__SwappingRoles = 1,
	ESQSpawnInventoryReason__SwappingRolesPartialAmmo = 2,
	ESQSpawnInventoryReason__ESQSpawnInventoryReason_MAX = 3
};


// Enum Squad.ESQSoldierRagdollReason
enum class ESQSoldierRagdollReason : uint8_t
{
	ESQSoldierRagdollReason__NotInRagdoll = 0,
	ESQSoldierRagdollReason__NotReplicated = 1,
	ESQSoldierRagdollReason__Replicated = 2,
	ESQSoldierRagdollReason__ReplicatedAutoGetUp = 3,
	ESQSoldierRagdollReason__ESQSoldierRagdollReason_MAX = 4
};


// Enum Squad.ESQVehicleRoleAbility
enum class ESQVehicleRoleAbility : uint8_t
{
	ESQVehicleRoleAbility__LightVehicle = 0,
	ESQVehicleRoleAbility__HeavyVehicle = 1,
	ESQVehicleRoleAbility__FlyingVehicle = 2,
	ESQVehicleRoleAbility__ESQVehicleRoleAbility_MAX = 3
};


// Enum Squad.ESQRearmType
enum class ESQRearmType : uint8_t
{
	ESQRearmType__MainOrEnvironment = 0,
	ESQRearmType__ForwardBase      = 1,
	ESQRearmType__Vehicle          = 2,
	ESQRearmType__AmmoBag          = 3,
	ESQRearmType__ESQRearmType_MAX = 4
};


// Enum Squad.ESQGrenadeState
enum class ESQGrenadeState : uint8_t
{
	ESQGrenadeState__Idle          = 0,
	ESQGrenadeState__PreparingOverhandThrow = 1,
	ESQGrenadeState__PreparingUnderhandThrow = 2,
	ESQGrenadeState__ThrowingOverhand = 3,
	ESQGrenadeState__ThrowingUnderhand = 4,
	ESQGrenadeState__Reloading     = 5,
	ESQGrenadeState__ESQGrenadeState_MAX = 6
};


// Enum Squad.ESQEquippableState
enum class ESQEquippableState : uint8_t
{
	ESQEquippableState__None       = 0,
	ESQEquippableState__Unequipped = 1,
	ESQEquippableState__Equipping  = 2,
	ESQEquippableState__Equipped   = 3,
	ESQEquippableState__Unequipping = 4,
	ESQEquippableState__ESQEquippableState_MAX = 5
};


// Enum Squad.ESQVehicleDifferential4W
enum class ESQVehicleDifferential4W : uint8_t
{
	ESQVehicleDifferential4W__LimitedSlip_4W = 0,
	ESQVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	ESQVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	ESQVehicleDifferential4W__Open_4W = 3,
	ESQVehicleDifferential4W__Open_FrontDrive = 4,
	ESQVehicleDifferential4W__Open_RearDrive = 5,
	ESQVehicleDifferential4W__ESQVehicleDifferential4W_MAX = 6
};


// Enum Squad.ESQTileCount
enum class ESQTileCount : uint8_t
{
	ESQTileCount__COUNT            = 0,
	ESQTileCount__COUNT01          = 1,
	ESQTileCount__COUNT02          = 2,
	ESQTileCount__COUNT03          = 3,
	ESQTileCount__COUNT04          = 4,
	ESQTileCount__COUNT05          = 5,
	ESQTileCount__COUNT_MAX        = 6
};


// Enum Squad.ESQTileResolution
enum class ESQTileResolution : uint8_t
{
	ESQTileResolution__SIZE        = 0,
	ESQTileResolution__SIZE01      = 1,
	ESQTileResolution__SIZE02      = 2,
	ESQTileResolution__SIZE03      = 3,
	ESQTileResolution__SIZE_MAX    = 4
};


// Enum Squad.ESQSoldierLeanDirection
enum class ESQSoldierLeanDirection : uint8_t
{
	ESQSoldierLeanDirection__LeftLean = 0,
	ESQSoldierLeanDirection__NoLean = 1,
	ESQSoldierLeanDirection__RightLean = 2,
	ESQSoldierLeanDirection__ESQSoldierLeanDirection_MAX = 3
};


// Enum Squad.ESQFOBRallyPointDisplayMode
enum class ESQFOBRallyPointDisplayMode : uint8_t
{
	ESQFOBRallyPointDisplayMode__None = 0,
	ESQFOBRallyPointDisplayMode__FOB = 1,
	ESQFOBRallyPointDisplayMode__RallyPoint = 2,
	ESQFOBRallyPointDisplayMode__Both = 3,
	ESQFOBRallyPointDisplayMode__ESQFOBRallyPointDisplayMode_MAX = 4
};


// Enum Squad.ESQHUDView
enum class ESQHUDView : uint8_t
{
	ESQHUDView__None               = 0,
	ESQHUDView__AllPawns           = 1,
	ESQHUDView__SameTeam           = 2,
	ESQHUDView__OnlyEnemy          = 3,
	ESQHUDView__ESQHUDView_MAX     = 4
};


// Enum Squad.ESQCameraMode
enum class ESQCameraMode : uint8_t
{
	ESQCameraMode__FlySpeed        = 0,
	ESQCameraMode__Deceleration    = 1,
	ESQCameraMode__FOV             = 2,
	ESQCameraMode__DOFFocalDistance = 3,
	ESQCameraMode__DOFBlurSize     = 4,
	ESQCameraMode__ESQCameraMode_MAX = 5
};


// Enum Squad.ESQExplosiveType
enum class ESQExplosiveType : uint8_t
{
	ESQExplosiveType__None         = 0,
	ESQExplosiveType__RemoteExplosive = 1,
	ESQExplosiveType__Mine         = 2,
	ESQExplosiveType__ESQExplosiveType_MAX = 3
};


// Enum Squad.ESQDeployableSize
enum class ESQDeployableSize : uint8_t
{
	ESQDeployableSize__Very_Small  = 0,
	ESQDeployableSize__Small       = 1,
	ESQDeployableSize__Medium      = 2,
	ESQDeployableSize__Large       = 3,
	ESQDeployableSize__Very_Large  = 4,
	ESQDeployableSize__ESQDeployableSize_MAX = 5
};


// Enum Squad.ESQInvalidPlacementReason
enum class ESQInvalidPlacementReason : uint8_t
{
	ESQInvalidPlacementReason__NOREASONGIVEN = 0,
	ESQInvalidPlacementReason__VALID = 1,
	ESQInvalidPlacementReason__BAD_GROUND = 2,
	ESQInvalidPlacementReason__NO_FOB = 3,
	ESQInvalidPlacementReason__IN_FOB = 4,
	ESQInvalidPlacementReason__NOT_FRIENDLY_FOB = 5,
	ESQInvalidPlacementReason__NO_RESOURCES = 6,
	ESQInvalidPlacementReason__OVERLAP = 7,
	ESQInvalidPlacementReason__NO_DEPLOY_ZONE = 8,
	ESQInvalidPlacementReason__EXCLUSION_ZONE = 9,
	ESQInvalidPlacementReason__CUSTOM1 = 10,
	ESQInvalidPlacementReason__CUSTOM2 = 11,
	ESQInvalidPlacementReason__CUSTOM3 = 12,
	ESQInvalidPlacementReason__CUSTOM4 = 13,
	ESQInvalidPlacementReason__ExtraPlacementRules = 14,
	ESQInvalidPlacementReason__MAX_DEPLOY_TYPE_REACHED = 15,
	ESQInvalidPlacementReason__TrackedDeployableLimitation = 16,
	ESQInvalidPlacementReason__ESQInvalidPlacementReason_MAX = 17
};


// Enum Squad.ESQRandomizeMapRotation
enum class ESQRandomizeMapRotation : uint8_t
{
	ESQRandomizeMapRotation__Always = 0,
	ESQRandomizeMapRotation__FirstMap = 1,
	ESQRandomizeMapRotation__None  = 2,
	ESQRandomizeMapRotation__ESQRandomizeMapRotation_MAX = 3
};


// Enum Squad.ESQWeaponAnimType
enum class ESQWeaponAnimType : uint8_t
{
	ESQWeaponAnimType__Rifle       = 0,
	ESQWeaponAnimType__Grenade     = 1,
	ESQWeaponAnimType__Equippable  = 2,
	ESQWeaponAnimType__ESQWeaponAnimType_MAX = 3
};


// Enum Squad.ESQInventoryModificationType
enum class ESQInventoryModificationType : uint8_t
{
	ESQInventoryModificationType__AddToInventory = 0,
	ESQInventoryModificationType__RemoveFromInventory = 1,
	ESQInventoryModificationType__UpdateInventory = 2,
	ESQInventoryModificationType__ESQInventoryModificationType_MAX = 3
};


// Enum Squad.ESQWeaponState
enum class ESQWeaponState : uint8_t
{
	ESQWeaponState__Idle           = 0,
	ESQWeaponState__Firing         = 1,
	ESQWeaponState__Reloading      = 2,
	ESQWeaponState__Melee          = 3,
	ESQWeaponState__ProcessingAttachment = 4,
	ESQWeaponState__ESQWeaponState_MAX = 5
};


// Enum Squad.ESQEquippableActionState
enum class ESQEquippableActionState : uint8_t
{
	ESQEquippableActionState__Idle = 0,
	ESQEquippableActionState__Use  = 1,
	ESQEquippableActionState__AltUse = 2,
	ESQEquippableActionState__Custom1 = 3,
	ESQEquippableActionState__Custom2 = 4,
	ESQEquippableActionState__Custom3 = 5,
	ESQEquippableActionState__PreUse = 6,
	ESQEquippableActionState__PostUse = 7,
	ESQEquippableActionState__PreAltUse = 8,
	ESQEquippableActionState__PostAltUse = 9,
	ESQEquippableActionState__ESQEquippableActionState_MAX = 10
};


// Enum Squad.ESQHitDetectionFailReason
enum class ESQHitDetectionFailReason : uint8_t
{
	ESQHitDetectionFailReason__None = 0,
	ESQHitDetectionFailReason__NoAmmo = 1,
	ESQHitDetectionFailReason__NoOwner = 2,
	ESQHitDetectionFailReason__NoShot = 3,
	ESQHitDetectionFailReason__InvalidViewAngle = 4,
	ESQHitDetectionFailReason__Blocked = 5,
	ESQHitDetectionFailReason__Reloading = 6,
	ESQHitDetectionFailReason__Sprinting = 7,
	ESQHitDetectionFailReason__UnableToFire = 8,
	ESQHitDetectionFailReason__ESQHitDetectionFailReason_MAX = 9
};


// Enum Squad.ESQReadyToEndMatch
enum class ESQReadyToEndMatch : uint8_t
{
	ESQReadyToEndMatch__Unhandled  = 0,
	ESQReadyToEndMatch__ReadyToEndMatch = 1,
	ESQReadyToEndMatch__DoNotEndMatch = 2,
	ESQReadyToEndMatch__ESQReadyToEndMatch_MAX = 3
};


// Enum Squad.ESQRoleTypeEnum
enum class ESQRoleTypeEnum : uint8_t
{
	ESQRoleTypeEnum__RoleType_Standard = 0,
	ESQRoleTypeEnum__RoleType_Specialist = 1,
	ESQRoleTypeEnum__RoleType_Support = 2,
	ESQRoleTypeEnum__RoleType_FireSupport = 3,
	ESQRoleTypeEnum__RoleType_MAX  = 4
};


// Enum Squad.ESQDialogType
enum class ESQDialogType : uint8_t
{
	ESQDialogType__None            = 0,
	ESQDialogType__Generic         = 1,
	ESQDialogType__ControllerDisconnected = 2,
	ESQDialogType__ESQDialogType_MAX = 3
};


// Enum Squad.ESQMapItemType
enum class ESQMapItemType : uint8_t
{
	ESQMapItemType__Map            = 0,
	ESQMapItemType__Default        = 1,
	ESQMapItemType__Player         = 2,
	ESQMapItemType__Spawn          = 3,
	ESQMapItemType__LocalPlayer    = 4,
	ESQMapItemType__Gameplay       = 5,
	ESQMapItemType__ESQMapItemType_MAX = 6
};


// Enum Squad.ESQDeadState
enum class ESQDeadState : uint8_t
{
	ESQDeadState__GameNotStarted   = 0,
	ESQDeadState__SpawningIn       = 1,
	ESQDeadState__SelectingSpawn   = 2,
	ESQDeadState__SelectingRole    = 3,
	ESQDeadState__WaitingToSpawn   = 4,
	ESQDeadState__InCap            = 5,
	ESQDeadState__ESQDeadState_MAX = 6
};


// Enum Squad.ESQMapItemDrawMode
enum class ESQMapItemDrawMode : uint8_t
{
	ESQMapItemDrawMode__ZoomedOut  = 0,
	ESQMapItemDrawMode__ZoomedIn   = 1,
	ESQMapItemDrawMode__Absolute   = 2,
	ESQMapItemDrawMode__Meters     = 3,
	ESQMapItemDrawMode__ESQMapItemDrawMode_MAX = 4
};


// Enum Squad.ESQRadialWidgetSizeEnum
enum class ESQRadialWidgetSizeEnum : uint8_t
{
	ESQRadialWidgetSizeEnum__Small = 0,
	ESQRadialWidgetSizeEnum__Medium = 1,
	ESQRadialWidgetSizeEnum__Large = 2,
	ESQRadialWidgetSizeEnum__ESQRadialWidgetSizeEnum_MAX = 3
};


// Enum Squad.ESQMapIconSelectionGroup
enum class ESQMapIconSelectionGroup : uint8_t
{
	ESQMapIconSelectionGroup__None = 0,
	ESQMapIconSelectionGroup__Spawns = 1,
	ESQMapIconSelectionGroup__Players = 2,
	ESQMapIconSelectionGroup__ESQMapIconSelectionGroup_MAX = 3
};


// Enum Squad.ESQHudPosition
enum class ESQHudPosition : uint8_t
{
	ESQHudPosition__Left           = 0,
	ESQHudPosition__FrontLeft      = 1,
	ESQHudPosition__Front          = 2,
	ESQHudPosition__FrontRight     = 3,
	ESQHudPosition__Right          = 4,
	ESQHudPosition__BackRight      = 5,
	ESQHudPosition__Back           = 6,
	ESQHudPosition__BackLeft       = 7,
	ESQHudPosition__ESQHudPosition_MAX = 8
};


// Enum Squad.ESQCrosshairDirection
enum class ESQCrosshairDirection : uint8_t
{
	ESQCrosshairDirection__Left    = 0,
	ESQCrosshairDirection__Right   = 1,
	ESQCrosshairDirection__Top     = 2,
	ESQCrosshairDirection__Bottom  = 3,
	ESQCrosshairDirection__Center  = 4,
	ESQCrosshairDirection__ESQCrosshairDirection_MAX = 5
};


// Enum Squad.ESQMapMarkerType
enum class ESQMapMarkerType : uint8_t
{
	ESQMapMarkerType__Action       = 0,
	ESQMapMarkerType__Spot         = 1,
	ESQMapMarkerType__POI          = 2,
	ESQMapMarkerType__Fireteam     = 3,
	ESQMapMarkerType__Request      = 4,
	ESQMapMarkerType__ESQMapMarkerType_MAX = 5
};


// Enum Squad.ESQAudioVolumeType
enum class ESQAudioVolumeType : uint8_t
{
	ESQAudioVolumeType__Default    = 0,
	ESQAudioVolumeType__FieldOpen  = 1,
	ESQAudioVolumeType__FieldClosed = 2,
	ESQAudioVolumeType__Valley     = 3,
	ESQAudioVolumeType__ForestLarge = 4,
	ESQAudioVolumeType__ForestSmall = 5,
	ESQAudioVolumeType__UrbanLarge = 6,
	ESQAudioVolumeType__UrbanSmall = 7,
	ESQAudioVolumeType__RoomLarge  = 8,
	ESQAudioVolumeType__RoomMedium = 9,
	ESQAudioVolumeType__RoomSmall  = 10,
	ESQAudioVolumeType__RoomHollowLarge = 11,
	ESQAudioVolumeType__RoomHollowMedium = 12,
	ESQAudioVolumeType__RoomHollowSmall = 13,
	ESQAudioVolumeType__ESQAudioVolumeType_MAX = 14
};


// Enum Squad.ESQLeftSquadWeaponBehaviour
enum class ESQLeftSquadWeaponBehaviour : uint8_t
{
	ESQLeftSquadWeaponBehaviour__DoNotKeep = 0,
	ESQLeftSquadWeaponBehaviour__KeepWithMagsAndLoadedAmmo = 1,
	ESQLeftSquadWeaponBehaviour__KeepWithOnlyLoadedAmmo = 2,
	ESQLeftSquadWeaponBehaviour__OverWriteMagsAndKeepLoadedAmmo = 3,
	ESQLeftSquadWeaponBehaviour__OverWriteWithOnlyLoadedAmmo = 4,
	ESQLeftSquadWeaponBehaviour__ESQLeftSquadWeaponBehaviour_MAX = 5
};


// Enum Squad.ESQMapMarkerVisibleTo
enum class ESQMapMarkerVisibleTo : uint8_t
{
	ESQMapMarkerVisibleTo__None    = 0,
	ESQMapMarkerVisibleTo__All     = 1,
	ESQMapMarkerVisibleTo__Team    = 2,
	ESQMapMarkerVisibleTo__Squad   = 3,
	ESQMapMarkerVisibleTo__Self    = 4,
	ESQMapMarkerVisibleTo__SquadLeader = 5,
	ESQMapMarkerVisibleTo__FireTeamLeader = 6,
	ESQMapMarkerVisibleTo__Commander = 7,
	ESQMapMarkerVisibleTo__Admin   = 8,
	ESQMapMarkerVisibleTo__ESQMapMarkerVisibleTo_MAX = 9
};


// Enum Squad.ESQAdminAccessLevels
enum class ESQAdminAccessLevels : uint8_t
{
	ESQAdminAccessLevels__Level_Public = 0,
	ESQAdminAccessLevels__Level_StartVote = 1,
	ESQAdminAccessLevels__Level_ChangeMap = 2,
	ESQAdminAccessLevels__Level_Pause = 3,
	ESQAdminAccessLevels__Level_Cheat = 4,
	ESQAdminAccessLevels__Level_Private = 5,
	ESQAdminAccessLevels__Level_Balance = 6,
	ESQAdminAccessLevels__Level_Chat = 7,
	ESQAdminAccessLevels__Level_Mute = 8,
	ESQAdminAccessLevels__Level_Kick = 9,
	ESQAdminAccessLevels__Level_Ban = 10,
	ESQAdminAccessLevels__Level_Config = 11,
	ESQAdminAccessLevels__Level_Immune = 12,
	ESQAdminAccessLevels__Level_Server = 13,
	ESQAdminAccessLevels__Level_CameraMan = 14,
	ESQAdminAccessLevels__Level_Add = 15,
	ESQAdminAccessLevels__Level_FeatureTest = 16,
	ESQAdminAccessLevels__Level_Debug = 17,
	ESQAdminAccessLevels__Level_Demos = 18,
	ESQAdminAccessLevels__Level_Reserve = 19,
	ESQAdminAccessLevels__Level_TeamChange = 20,
	ESQAdminAccessLevels__Level_Developer = 21,
	ESQAdminAccessLevels__Level_ForceTeamChange = 22,
	ESQAdminAccessLevels__Level_CanSeeAdminChat = 23,
	ESQAdminAccessLevels__Level_QA = 24,
	ESQAdminAccessLevels__Level_MAX = 25
};


// Enum Squad.ESQSortStates
enum class ESQSortStates : uint8_t
{
	ESQSortStates__Unsorted        = 0,
	ESQSortStates__Ascending       = 1,
	ESQSortStates__Descending      = 2,
	ESQSortStates__ESQSortStates_MAX = 3
};


// Enum Squad.ESQSortLevels
enum class ESQSortLevels : uint8_t
{
	ESQSortLevels__ServerName      = 0,
	ESQSortLevels__MapName         = 1,
	ESQSortLevels__GameMode        = 2,
	ESQSortLevels__Ping            = 3,
	ESQSortLevels__NumPlayers      = 4,
	ESQSortLevels__ESQSortLevels_MAX = 5
};


// Enum Squad.ESQTrackDeployableResult
enum class ESQTrackDeployableResult : uint8_t
{
	ESQTrackDeployableResult__Allow = 0,
	ESQTrackDeployableResult__AllowButRemoveAllOthers = 1,
	ESQTrackDeployableResult__AllowButRemoveFirst = 2,
	ESQTrackDeployableResult__AllowButRemoveLast = 3,
	ESQTrackDeployableResult__DoNotAllow = 4,
	ESQTrackDeployableResult__ESQTrackDeployableResult_MAX = 5
};


// Enum Squad.ESQVehicleType
enum class ESQVehicleType : uint8_t
{
	ESQVehicleType__None           = 0,
	ESQVehicleType__Motorcycle     = 1,
	ESQVehicleType__Jeep           = 2,
	ESQVehicleType__JeepTransport  = 3,
	ESQVehicleType__JeepLogistics  = 4,
	ESQVehicleType__JeepAntiTank   = 5,
	ESQVehicleType__JeepArtillery  = 6,
	ESQVehicleType__TruckTransport = 7,
	ESQVehicleType__TruckLogistics = 8,
	ESQVehicleType__TruckAntiAir   = 9,
	ESQVehicleType__APC            = 10,
	ESQVehicleType__APCTracked     = 11,
	ESQVehicleType__AntiAirTracked = 12,
	ESQVehicleType__IFV            = 13,
	ESQVehicleType__IFVTracked     = 14,
	ESQVehicleType__Tank           = 15,
	ESQVehicleType__HelicopterTransport = 16,
	ESQVehicleType__HelicopterAttack = 17,
	ESQVehicleType__Boat           = 18,
	ESQVehicleType__MAX            = 19
};


// Enum Squad.ESQInteractVisibility
enum class ESQInteractVisibility : uint8_t
{
	ESQInteractVisibility__Invisible = 0,
	ESQInteractVisibility__Team    = 1,
	ESQInteractVisibility__AlwaysVisible = 2,
	ESQInteractVisibility__ESQInteractVisibility_MAX = 3
};


// Enum Squad.ESQVehicleComponentStates
enum class ESQVehicleComponentStates : uint8_t
{
	ESQVehicleComponentStates__FullyRepaired = 0,
	ESQVehicleComponentStates__RepairedFromDestruction = 1,
	ESQVehicleComponentStates__Destroyed = 2,
	ESQVehicleComponentStates__ESQVehicleComponentStates_MAX = 3
};


// Enum Squad.ESQTeamType
enum class ESQTeamType : uint8_t
{
	ESQTeamType__Attacker          = 0,
	ESQTeamType__Defender          = 1,
	ESQTeamType__ESQTeamType_MAX   = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Squad.BlueprintOnlineItem
// 0x0010
struct FBlueprintOnlineItem
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQGraphLink
// 0x0010
struct FSQGraphLink
{
	class USQGraphNodeComponent*                       NodeA;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USQGraphNodeComponent*                       NodeB;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Squad.SQLatticeLine
// 0x002C
struct FSQLatticeLine
{
	struct FVector                                     StartWorldLocation;                                       // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndWorldLocation;                                         // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeWidth;                                                // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQScoreEvent
// 0x0028
struct FSQScoreEvent
{
	float                                              Points;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       ScoreGroup;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQInventoryData
// 0x0018
struct FSQInventoryData
{
	class UClass*                                      EquipableItem;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedInInventory;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinimumCountOnSpawn;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCannotRearm : 1;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	EWeaponType                                        WeaponType;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQInventoryMod
// 0x0038
struct FSQInventoryMod
{
	unsigned char                                      bClearAllInventoryFirst : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSQInventoryData                            InventoryData;                                            // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	ESQInventoryModificationType                       InventoryModificationType;                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                Slot;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Offset;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQTeam                                            Team;                                                     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class USQRoleSettings*                             Role;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQGameModeRules
// 0x0018
struct FSQGameModeRules
{
	ESQTeam                                            Team;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FText>                               Rules;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Squad.SQSystemHUDMessage
// 0x0028
struct FSQSystemHUDMessage
{
	struct FString                                     Message;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MessageLifetime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQApprovalEntryRequest
// 0x0040
struct FSQApprovalEntryRequest
{
	EApprovalRequestTypes                              RequestType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     PtrParams[0x4];                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CombinedMessage;                                          // 0x0028(0x0010) (ZeroConstructor)
	float                                              ExpireIn;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQApprovalEntryClientDesc
// 0x0008
struct FSQApprovalEntryClientDesc
{
	float                                              ExpireIn;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRearmWeaponRequest
// 0x0010
struct FSQRearmWeaponRequest
{
	class ASQEquipableItem*                            Weapon;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MagsToRearm;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQShotInfo
// 0x002C
struct FSQShotInfo
{
	unsigned char                                      ShotCounter;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WorldTime;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector_NetQuantize10                       Origin;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	bool                                               bIsTracer;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              PenetrationDamageMultiplier;                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ArmorDamageMultiplier;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Squad.SQPenetrationTrace
// 0x00B0
struct FSQPenetrationTrace
{
	unsigned char                                      bIsActor : 1;                                             // 0x0000(0x0001)
	unsigned char                                      bHasValidReverseImpact : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (IsPlainOldData)
	struct FVector                                     ReverseAngleImpactLocation;                               // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ReverseAngleImpactNormal;                                 // 0x009C(0x000C)
	struct FName                                       ReverseAngleBoneName;                                     // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.ArmorPenetration
// 0x0028
struct FArmorPenetration
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Squad.SQWeaponData
// 0x00C0
struct FSQWeaponData
{
	bool                                               bInfiniteAmmo;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteMags;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MaxMags;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RoundsPerMag;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRoundInChamber;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<int>                                        Firemodes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBetweenShots;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanReloadWhenEquipping;                                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateProjectileOnServer;                                // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              TacticalReloadDuration;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DryReloadDuration;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TacticalReloadBipodDuration;                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadDryBipodDuration;                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomDuration;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSPostTransitionRatio;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowZoom;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAverageFireRate;                                         // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetBurstOnTriggerRelease;                              // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RoundsBetweenTracer;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UClass*                                      TracerProjectileClass;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageToApply;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToStartDamageFallOff;                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToStartDamageFallOff;                             // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFallOffRate;                                        // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDamageToApply;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageFalloffCurve;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBarrelSocketOnSoldier;                                 // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FName                                       BarrelSocketName;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MOA;                                                      // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumTraceDistance;                                     // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallHackCheckTraceDistance;                               // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMagMustBeEmptyForVehicleRearm;                           // 0x009C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRearmOnlyIfCurrentMagazineIsEmpty;                       // 0x009D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRearmCanFillCurrentMagazine;                             // 0x009E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	float                                              MinimumTimeBetweenRearms;                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRearmOnlyOneMagazine;                                    // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRearmOnlyXRoundsOfAmmo;                                  // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	int                                                RearmRoundsOfAmmoPerRearm;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ArmorPenetrationDepthMillimeters;                         // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ArmorPenetrationDepthCurve;                               // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDistanceAfterPenetrationMeters;                      // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQReverbVolumeEffect
// 0x0020
struct FSQReverbVolumeEffect
{
	class UReverbEffect*                               ReverbEffect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectVolume;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectFadeTime;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectPriority;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQAudioComponentPool
// 0x0020
struct FSQAudioComponentPool
{
	TArray<class UAudioComponent*>                     AudioComponentPool;                                       // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	class USceneComponent*                             AttachToComponent;                                        // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQPersistedAmmoCount
// 0x0008
struct FSQPersistedAmmoCount
{
	int                                                AmmoCount;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQMagazineData
// 0x0008
struct FSQMagazineData
{
	int                                                DefaultRoundsPerMag;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RemainingRounds;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQDynamicEasingStruct
// 0x0014
struct FSQDynamicEasingStruct
{
	float                                              Target;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OppositeAcceleration;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQPenetrationProxy
// 0x0000 (0x00B0 - 0x00B0)
struct FSQPenetrationProxy : public FSQPenetrationTrace
{

};

// ScriptStruct Squad.SQWeaponSounds
// 0x0088
struct FSQWeaponSounds
{
	class USoundCue*                                   FireSound1P;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   FireSound3P;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReloadSound1P;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReloadSound3P;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DryReloadSound1P;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DryReloadSound3P;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EquipSound1P;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EquipSound3P;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   UnequipSound1P;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   UnequipSound3P;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TriggerSound1P;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TriggerSound3P;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BoltSound1P;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BoltSound3P;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ToggleFiremodeSound1P;                                    // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ToggleFiremodeSound3P;                                    // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SoundSocket;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQWeaponAnims
// 0x0048
struct FSQWeaponAnims
{
	class UAnimSequence*                               StandAnim;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               EquipAnim;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               FireRecoilAnim;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               FireTriggerAnim;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReloadAnim;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               DryAnim;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ToggleFiremodeAnim;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldLockBult;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              TriggerPullDuration;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                AimOffsetCurve;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQRecoilData
// 0x0048
struct FSQRecoilData
{
	struct FVector2D                                   RecoilFactorMin;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RecoilFactorMax;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilZoomFactor;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilDuration;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotAimingDownSightsMultiplier;                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RecoilCurve;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RecoilCurveCrouch;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RecoilCurveProne;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RecoilCurveIndex;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRecoilMultipliers;                                    // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              CrouchRecoilMultiplier;                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneRecoilMultiplier;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQWeaponEffects
// 0x0038
struct FSQWeaponEffects
{
	class UParticleSystem*                             MuzzleFlashEffect1P;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashEffect3P;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShellEjection1P;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShellEjection3P;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MuzzleFlashSocket;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShellEjectionSocket;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleFlashCullDistanceInMeters;                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShellEjectionCullDistanceInMeters;                        // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQWeaponSpring
// 0x0024
struct FSQWeaponSpring
{
	struct FVector                                     WeaponSpringFactor;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WeaponSpringRotationPivot;                                // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WeaponSpringRotationFactor;                               // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleRecoil
// 0x000C
struct FSQVehicleRecoil
{
	struct FVector2D                                   RecoilFactor;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RepeatAmount;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQEmoteAnims
// 0x0028
struct FSQEmoteAnims
{
	bool                                               bForceIfCantPlay;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                FirstPersonAnim;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThirdPersonAnim;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FirstPersonEndAnim;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThirdPersonEndAnim;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQMontageSectionNames
// 0x0028
struct FSQMontageSectionNames
{
	struct FName                                       BeginSection;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoopSection1;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoopSection2;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndSection;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MidEndSection;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQButtonStyle
// 0x0080
struct FSQButtonStyle
{
	bool                                               bUseStyling;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseImageStyling;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UTexture2D*                                  NormalImage;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HoveredImage;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PressedImage;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DisabledImage;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTintStyling;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseColorBlending;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	struct FLinearColor                                NormalTint;                                               // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HoveredTint;                                              // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PressedTint;                                              // 0x004C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DisabledTint;                                             // 0x005C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class USoundCue*                                   PressedSoundCue;                                          // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   HoveredSoundCue;                                          // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQMovePostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSQMovePostPhysicsTickFunction : public FTickFunction
{
	class USQPawnMovementComponent*                    Target;                                                   // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Squad.SQSpringInterpStruct3D
// 0x0030
struct FSQSpringInterpStruct3D
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinLimits;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxLimits;                                                // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQCreditsList
// 0x0028
struct FSQCreditsList
{
	ESQCreditsLineType                                 LineType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Columns;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Squad.SQTextureMemoryStats
// 0x001C
struct FSQTextureMemoryStats
{
	int                                                DedicatedVideoMemory;                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DedicatedSystemMemory;                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SharedSystemMemory;                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalGraphicsMemory;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AllocatedMemorySize;                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TexturePoolSize;                                          // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PendingMemoryAdjustment;                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQAnnouncement
// 0x0030
struct FSQAnnouncement
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Link;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Body;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Squad.SQBoneDamageMod
// 0x0010
struct FSQBoneDamageMod
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageMod;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQTakeHitInfo
// 0x0138
struct FSQTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerTimestamp;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ASQSoldier>                   PawnInstigator;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DamageEventClassID;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bKilled : 1;                                              // 0x0024(0x0001)
	unsigned char                                      bWounded : 1;                                             // 0x0024(0x0001)
	unsigned char                                      bEjectedFromVehicle : 1;                                  // 0x0024(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FDamageEvent                                GeneralDamageEvent;                                       // 0x0028(0x0010)
	struct FPointDamageEvent                           PointDamageEvent;                                         // 0x0038(0x00A8)
	struct FRadialDamageEvent                          RadialDamageEvent;                                        // 0x00E0(0x0040)
	TWeakObjectPtr<class UPhysicalMaterial>            PackagedHitResultPhysMaterial;                            // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       PackagedHitResultActor;                                   // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          PackagedHitResultComponent;                               // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Squad.SQBoneHitSound
// 0x0010
struct FSQBoneHitSound
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HitSound;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQBoundaryListenerData
// 0x0014
struct FSQBoundaryListenerData
{
	bool                                               bInsideBoundary;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CheckTime;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EntryTime;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExitTime;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQBuffDesc
// 0x0008
struct FSQBuffDesc
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.SQChatStyle
// 0x0900 (0x0908 - 0x0008)
struct FSQChatStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextEntryStyle;                                           // 0x0008(0x07F8) (Edit)
	struct FSlateBrush                                 BackingBrush;                                             // 0x0800(0x0088) (Edit)
	struct FSlateColor                                 BoxBorderColor;                                           // 0x0888(0x0028) (Edit)
	struct FSlateColor                                 TextColor;                                                // 0x08B0(0x0028) (Edit)
	struct FSlateSound                                 RxMessgeSound;                                            // 0x08D8(0x0018) (Edit)
	struct FSlateSound                                 TxMessgeSound;                                            // 0x08F0(0x0018) (Edit)
};

// ScriptStruct Squad.CommanderVoteNominee
// 0x0014 (0x0020 - 0x000C)
struct FCommanderVoteNominee : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ASQPlayerState*                              NomineeState;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VoteCount;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.CommanderNomineeArray
// 0x0010 (0x00C0 - 0x00B0)
struct FCommanderNomineeArray : public FFastArraySerializer
{
	TArray<struct FCommanderVoteNominee>               Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.SQConnectionCheckResponse
// 0x0008
struct FSQConnectionCheckResponse
{
	unsigned char                                      bCanQueue : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      CurrentTotalPlayers;                                      // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              RoundTripRPCTimeMS;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQCoreStateId
// 0x0002
struct FSQCoreStateId
{
	uint16_t                                           Raw;                                                      // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQCoreStateDataToIdMap
// 0x0050
struct FSQCoreStateDataToIdMap
{
	TMap<class USQCoreStateData*, struct FSQCoreStateId> Raw;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Squad.CoreStateDataTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCoreStateDataTickFunction : public FTickFunction
{
	class USQCoreStateData*                            Target;                                                   // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQCoreStateDataList
// 0x0010
struct FSQCoreStateDataList
{
	TArray<class USQCoreStateData*>                    Raw;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.WidgetGroup
// 0x0010
struct FWidgetGroup
{
	TArray<class USQCoreStateWidget*>                  List;                                                     // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct Squad.SQUsableWidgetData
// 0x0038
struct FSQUsableWidgetData
{
	struct FText                                       UsableText;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  CustomTexture;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CustomColor;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractWidgetItemClass;                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQUsableData
// 0x0040
struct FSQUsableData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FSQUsableWidgetData>                 InteractionData;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      InteractWidgetClass;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawLocationOffset;                                       // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESQInteractVisibility                              InteractVisiblity;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQEffectParticleSound
// 0x0018
struct FSQEffectParticleSound
{
	class UClass*                                      LastingEffectClass;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundEffect;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQDeployableChangeStateEffect
// 0x0020
struct FSQDeployableChangeStateEffect
{
	ESQBuildState                                      OldBuildState;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESQBuildState                                      NewBuildState;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CullingDistanceInMeters;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSQEffectParticleSound                      Effect;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Squad.SQDamageEffect
// 0x0018
struct FSQDamageEffect
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSQEffectParticleSound>              Effects;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Squad.SQDeployableStateDamageEffect
// 0x0018
struct FSQDeployableStateDamageEffect
{
	ESQBuildState                                      OldBuildState;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESQBuildState                                      NewBuildState;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CullingDistanceInMeters;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FSQDamageEffect>                     DamageEffects;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Squad.SQDamageModifier
// 0x0028
struct FSQDamageModifier
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForwardDamageToSoldier;                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ForwardDamageToSoldierModifier;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForwardDeathToSoldier;                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncapSoldierOnDeath;                                     // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyPassDamageIfDirectHit;                               // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              DirectHitDamageMultiplier;                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndirectHitDamageMultiplier;                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectHitRadialDamageMultiplier;                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQBoredMontageSet
// 0x0018
struct FSQBoredMontageSet
{
	class UAnimMontage*                                BoredWeaponMontage;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bored1pMontage;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Bored3pMontage;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQMutualWeapon
// 0x00D0
struct FSQMutualWeapon
{
	class UClass*                                      Weapon;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckCurrentMagazineForEquip;                            // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CheckCurrentMagazineForUnequip;                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckPreviousMagazineForEquip;                           // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	class UAnimMontage*                                BothEmptyWeaponEquipMontage;                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BothEmpty1pEquipMontage;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BothEmpty3pEquipMontage;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BothEmptyEquipDuration;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrentWeaponEquipMontage;           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent1pEquipMontage;               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PreviousEmptyOrIgnoreCurrent3pEquipMontage;               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PreviousEmptyOrIgnoreCurrentEquipDuration;                // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CurrentEmptyOrIgnorePreviousWeaponEquipMontage;           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious1pEquipMontage;               // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEmptyOrIgnorePrevious3pEquipMontage;               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentEmptyOrIgnorePreviousEquipDuration;                // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UAnimMontage*                                NoneEmptyOrIgnoreBothWeaponEquipMontage;                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth1pEquipMontage;                      // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NoneEmptyOrIgnoreBoth3pEquipMontage;                      // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NoneEmptyOrIgnoreBothEquipDuration;                       // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CurrentEmptyWeaponUnequipMontage;                         // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEmpty1pUnequipMontage;                             // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEmpty3pUnequipMontage;                             // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentEmptyUnequipDuration;                              // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UAnimMontage*                                NoneOrIgnoreCurrentWeaponUnequipMontage;                  // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NoneOrIgnoreCurrent1pUnequipMontage;                      // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NoneOrIgnoreCurrent3pUnequipMontage;                      // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NoneOrIgnoreCurrentUnequipDuration;                       // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQBasedMovementInfo
// 0x0030
struct FSQBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Squad.SQVehicleDestroyedConfig
// 0x0010
struct FSQVehicleDestroyedConfig
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DestroyedVehicleClass;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleSeatAnimationState
// 0x0058
struct FSQVehicleSeatAnimationState
{
	class UAnimMontage*                                PawnAnimation;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SeatAnimation;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               BaseAnimation;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 AimOffsets;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseWheelBlendSpace1D;                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UBlendSpace1D*                               WheelBlendSpace1D;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHandIK;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseWeaponForHandIK;                                      // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              LeftHandIKAlpha;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftHandIKSocketName;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightHandIKAlpha;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       RightHandIKSocketName;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SteeringWheelSingleFrameAnimSequence;                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleSeatTransitionState
// 0x0020
struct FSQVehicleSeatTransitionState
{
	ESQSoldierSeatState                                SoldierSeatState;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CollisionDamageMultipler;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSoldierCanTakeDirectRadialDamage;                        // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDetachSoldier;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEjectDeadSoldier;                                        // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEjectIncappedSoldier;                                    // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeatIsInTheOpen;                                         // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlyPlayExteriorVehicleSounds;                           // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class USoundMix*                                   SoundMix;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQListenerType                                    ListenerTypeOverride;                                     // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQVehicleSeatState
// 0x0078
struct FSQVehicleSeatState
{
	struct FSQVehicleSeatAnimationState                AnimationState;                                           // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSQVehicleSeatTransitionState               TransitionState;                                          // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Squad.SQVehicleSeatConfig
// 0x0050
struct FSQVehicleSeatConfig
{
	ESQVehicleRoleAbility                              SeatAbilityRequirement;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDetachSoldier;                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              SeatHealth;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRepairToolLimit;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPassDamageToVehicle;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              CollisionDamageMultipler;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPassPointDamageToVehicle;                                // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSoldierCanTakeDirectRadialDamage;                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPassRadialDamageToVehicle;                               // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	struct FName                                       SeatAttachSocket;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SoldierAttachSocket;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SeatPawn;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialState;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FSQVehicleSeatState>                 SeatStates;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShouldAlwaysStayRegistered;                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSoldierInSeatCanCapture;                                 // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRotationComponentForControlRotation;                  // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	float                                              PlayerEnterDuration;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQDamageTypeEffects
// 0x0028
struct FSQDamageTypeEffects
{
	struct FSQDamageEffect                             DefaultDamageEffect;                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FSQDamageEffect>                     DamageEffects;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Squad.SQVehicleQueueEntry
// 0x0020
struct FSQVehicleQueueEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class ASQPlayerController*                         Player;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQVehicleDestroyEffectConfig
// 0x0010
struct FSQVehicleDestroyEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQHUDMessage
// 0x0030
struct FSQHUDMessage
{
	struct FString                                     Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExpireTime;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQMessageBoxInfo
// 0x0080
struct FSQMessageBoxInfo
{
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0000(0x0058) (Edit, BlueprintVisible)
	TArray<struct FSQHUDMessage>                       Messages;                                                 // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   MessageBoxLocation;                                       // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfMessagesToShow;                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MessagesLifetime;                                         // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MessagesFadeTime;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESQTextHorizontalAlignment                         MessageHorizontalAlignment;                               // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESQTextVerticalAlignment                           MessageVerticalAlignment;                                 // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScrollUp;                                                // 0x007E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007F(0x0001) MISSED OFFSET
};

// ScriptStruct Squad.SQDrawChatStruct
// 0x00B8
struct FSQDrawChatStruct
{
	struct FVector2D                                   RenderPosition;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0008(0x0018)
	struct FLinearColor                                Color;                                                    // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FSQMessageBoxInfo                           Info;                                                     // 0x0030(0x0080)
	int                                                Index;                                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQSessionFlagStruct
// 0x0008
struct FSQSessionFlagStruct
{
	int                                                ServerHealth;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bIsAnticheatProtected : 1;                                // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQFlagScoreInfo
// 0x001C
struct FSQFlagScoreInfo
{
	int                                                ScoreForFlagNeutralize;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreForCapture;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreForDefense;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreOnCaptureTick;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreOnDefenseTick;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               CaptureReportChannel;                                     // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               NeutralizeReportChannel;                                  // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               DefenseReportChannel;                                     // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyPlayerOnNeutral;                                   // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyPlayerOnCapture;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyPlayerOnDefense;                                   // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyPlayerOnTick;                                      // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Squad.SQRepMovement
// 0x0040
struct FSQRepMovement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     LocationZeroBased;                                        // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationalVelocity;                                       // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ServerTimestamp;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQRotator_NetQuantizeBytes
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeBytes : public FRotator
{

};

// ScriptStruct Squad.SQBlueprintFriend
// 0x0060
struct FSQBlueprintFriend
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StatusString;                                             // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsOnline;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingThisGame;                                       // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoinable;                                              // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0034(0x002C) MISSED OFFSET
};

// ScriptStruct Squad.SQMapData
// 0x0040
struct FSQMapData
{
	struct FString                                     ShortName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     LoadingScreenTexturePath;                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             MapPaths;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQSoliderNetPriorityObject
// 0x000C
struct FSQSoliderNetPriorityObject
{
	float                                              distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NetPriority;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NetPriorityWhenBehind;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQOnlineInventorySetting
// 0x0008
struct FSQOnlineInventorySetting
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQDesignLink
// 0x0010
struct FSQDesignLink
{
	class AActor*                                      NodeA;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NodeB;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRoute2
// 0x0050
struct FSQRoute2
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Squad.SQRoute2.Links
};

// ScriptStruct Squad.SQGrenadeData
// 0x0048
struct FSQGrenadeData
{
	bool                                               bInfiniteAmmo;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                InitialAmmo;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverhandThrowVelocity;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderhandThrowVelocity;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowReadyTime;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverhandThrowTime;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderhandThrowTime;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverhandThrowDuration;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderhandThrowDuration;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowModeTransitionTime;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTimeMin;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTimeMax;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ProjectileOriginSocketName;                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQProjectileImpactEffect
// 0x0088
struct FSQProjectileImpactEffect
{
	TArray<class UParticleSystem*>                     Particles;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Shockwave;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundCue*>                           Sounds;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           FirstPersonSounds;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           RicochetSounds;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           RicochetFirstPersonSounds;                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  decals;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bDoParticlesUseRotation : 1;                              // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              MinDecalSize;                                             // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDecalSize;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkewDecalSize;                                           // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              DecalDepth;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalLifeSpan;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomizeDecalRotation;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQVehicleEffectsQualitySetting
// 0x0008
struct FSQVehicleEffectsQualitySetting
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CullingDistance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleEffectConfig
// 0x0030
struct FSQVehicleEffectConfig
{
	class UParticleSystem*                             ParticleSystemTemplate;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableSounds;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       WheelBoneName;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UVehicleWheel>                VehicleWheel;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USQPhysicalMaterial>          PhysMaterial;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQEngineMovementSoundObject
// 0x0028
struct FSQEngineMovementSoundObject
{
	class USoundCue*                                   EngineSound;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Gear;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAcceleratingSound;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       AttachBoneName;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutEndVolume;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Squad.SQInputState
// 0x0020
struct FSQInputState
{
	struct FString                                     RequestReason;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUserWidget*                                 Focus;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameInput;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayMouse;                                            // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUIInput;                                                 // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct Squad.SQRemoteTalkerDisplayInfo
// 0x0010
struct FSQRemoteTalkerDisplayInfo
{
	class ASQPlayerState*                              PlayerState;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESQRemoteTalkerDisplayChannel                      Channel;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQLedColorScheme
// 0x0078
struct FSQLedColorScheme
{
	struct FColor                                      DefaultColor;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BgColor;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DeadColor;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      InjuredColor;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FColor>                  ControlsColors;                                           // 0x0010(0x0050) (Edit, ZeroConstructor)
	float                                              UpdateFrequency;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowAmmoTreshold;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowStaminaTreshold;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Squad.SQPlayerLimiter
// 0x0008
struct FSQPlayerLimiter
{
	int                                                NumberOfPlayers;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQServerSlot
// 0x0028
struct FSQServerSlot
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class ASQJoinBeaconClient*                         ClientBeacon;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleDeathTicket
// 0x0038
struct FSQVehicleDeathTicket
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Squad.SQVehicleDeathTicket.VehicleType
	int                                                TicketsLostOnVehicleDestroy;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForVehicleDestroy;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayVehicleDestroyScore;                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQKillDeathSettings
// 0x0050
struct FSQKillDeathSettings
{
	TArray<struct FSQVehicleDeathTicket>               VehicleSettings;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TicketsLostOnKill;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TicketsLostOnSuicide;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TicketsLostOnTeamkill;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TicketsLostOnKillCommander;                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               KillChannel;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               SuicideChannel;                                           // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESQKillReportChannel                               TeamkillChannel;                                          // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              PointsForKill;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForWounded;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForSuicide;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForTeamkill;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForDeath;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForKill;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForSuicide;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForTeamkill;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForDeath;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotifyKillerOnKill;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotifyKillerOnTeamkill;                                   // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayKillScore;                                           // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayTeamkillScore;                                       // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayDeathScore;                                          // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQHealSettings
// 0x0024
struct FSQHealSettings
{
	int                                                TicketsLostOnRevive;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TicketsLostOnHeal;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TicketsLostOnSelfHeal;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForHeal;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointsForSelfHeal;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForRevive;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForHeal;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamPointsForSelfHeal;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayHealScore;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelaySelfHealScore;                                       // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Squad.SQBlueprintLoginResult
// 0x0010
struct FSQBlueprintLoginResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQLogisticsSettings
// 0x000C
struct FSQLogisticsSettings
{
	float                                              AmmoToScore;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstructionToScore;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassengerPercent;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQMapListItem
// 0x0060
struct FSQMapListItem
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMapListItem.Map
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Squad.SQMapListItem.Loadingscreen
};

// ScriptStruct Squad.SQSoldierInfo
// 0x0028
struct FSQSoldierInfo
{
	int                                                SquadId;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FireteamID;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsSquadLeader : 1;                                       // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsFireTeamLeader : 1;                                    // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class USQRoleSettings*                             CurrentRole;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Squad.SQVehicleOccupantInfo
// 0x0010 (0x0038 - 0x0028)
struct FSQVehicleOccupantInfo : public FSQSoldierInfo
{
	unsigned char                                      bIsOccupied : 1;                                          // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class ASQPlayerState*                              PlayerState;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQMenuItemStyle
// 0x0198 (0x01A0 - 0x0008)
struct FSQMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0088) (Edit)
	struct FSlateBrush                                 LeftArrowImage;                                           // 0x0090(0x0088) (Edit)
	struct FSlateBrush                                 RightArrowImage;                                          // 0x0118(0x0088) (Edit)
};

// ScriptStruct Squad.SQMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                           // 0x0008(0x0018) (Edit)
	struct FSlateSound                                 ExitGameSound;                                            // 0x0020(0x0018) (Edit)
};

// ScriptStruct Squad.SQMenuStyle
// 0x01F8 (0x0200 - 0x0008)
struct FSQMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                    // 0x0008(0x0088) (Edit)
	struct FSlateBrush                                 LeftBackgroundBrush;                                      // 0x0090(0x0088) (Edit)
	struct FSlateBrush                                 RightBackgroundBrush;                                     // 0x0118(0x0088) (Edit)
	struct FSlateSound                                 MenuEnterSound;                                           // 0x01A0(0x0018) (Edit)
	struct FSlateSound                                 MenuBackSound;                                            // 0x01B8(0x0018) (Edit)
	struct FSlateSound                                 OptionChangeSound;                                        // 0x01D0(0x0018) (Edit)
	struct FSlateSound                                 MenuItemChangeSound;                                      // 0x01E8(0x0018) (Edit)
};

// ScriptStruct Squad.SQNotificationLayout
// 0x0030
struct FSQNotificationLayout
{
	class UTexture2D*                                  Icon;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQOptionsStyle
// 0x0030 (0x0038 - 0x0008)
struct FSQOptionsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 AcceptChangesSound;                                       // 0x0008(0x0018) (Edit)
	struct FSlateSound                                 DiscardChangesSound;                                      // 0x0020(0x0018) (Edit)
};

// ScriptStruct Squad.SQWeaponGroupData
// 0x001C (0x0028 - 0x000C)
struct FSQWeaponGroupData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class ASQEquipableItem*>                    Weapons;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Index;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedWeaponOffset;                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQWeaponGroupDataArray
// 0x0010 (0x00C0 - 0x00B0)
struct FSQWeaponGroupDataArray : public FFastArraySerializer
{
	TArray<struct FSQWeaponGroupData>                  Items;                                                    // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Squad.SQSecondaryExplosionDesc
// 0x0010
struct FSQSecondaryExplosionDesc
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetScalar;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQExplosionEffect
// 0x0020 (0x00A8 - 0x0088)
struct FSQExplosionEffect : public FSQProjectileImpactEffect
{
	class UParticleSystem*                             ShockwaveParticleEffect;                                  // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ShockwaveSound;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ShockwaveDecalMaterial;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DebrisSound;                                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQEffectsSet
// 0x0248
struct FSQEffectsSet
{
	struct FSQProjectileImpactEffect                   ImpactEffects;                                            // 0x0000(0x0088) (Edit, BlueprintVisible)
	struct FSQProjectileImpactEffect                   ThrowableEffects;                                         // 0x0088(0x0088) (Edit, BlueprintVisible)
	struct FSQExplosionEffect                          ExplosionEffects;                                         // 0x0110(0x00A8) (Edit, BlueprintVisible)
	struct FSQProjectileImpactEffect                   BlastEffects;                                             // 0x01B8(0x0088) (Edit, BlueprintVisible)
	bool                                               bOverlapsThrowableProjectiles;                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQPhysMatVehicleFXData
// 0x0030
struct FSQPhysMatVehicleFXData
{
	float                                              Asphalt;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Dirt;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Grass;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravel;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Metal;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mud;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sand;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Snow;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnowWet;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TallGrass;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Water;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wood;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleEffect
// 0x0058
struct FSQVehicleEffect
{
	struct FSQPhysMatVehicleFXData                     VehicleFXData;                                            // 0x0000(0x0030) (Edit, BlueprintVisible)
	class USoundCue*                                   VehicleLightImpactSound;                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             VehicleLightImpactEffect;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   VehicleImpactSound;                                       // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             VehicleImpactEffect;                                      // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoVehicleParticlesUseRotation;                           // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQSoldierEffect
// 0x0038
struct FSQSoldierEffect
{
	class UCurveFloat*                                 SoldierInclineMovementSpeedCurve;                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayFootstepEffectWhenMovementInteractionTriggered;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UParticleSystem*                             FootstepEffect;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FootstepSound;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MovementInteractionParticleEffect;                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   MovementInteractionSound;                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   LandedSound;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.DeployableItem
// 0x000C (0x0018 - 0x000C)
struct FDeployableItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ASQDeployable*                               Deployable;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.DeployableItemsArray
// 0x0010 (0x00C0 - 0x00B0)
struct FDeployableItemsArray : public FFastArraySerializer
{
	TArray<struct FDeployableItem>                     Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.PlayerStateDataObject
// 0x0060
struct FPlayerStateDataObject
{
	int                                                Lives;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumKills;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDeaths;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWoundeds;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWounds;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTeamkills;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealPoints;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RevivedPoints;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TeamWorkScore;                                            // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ObjectiveScore;                                           // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAdmin;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDev;                                                     // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bQA;                                                      // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMember;                                                  // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCommander;                                               // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                FireTeamIndex;                                            // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FireTeamPosition;                                         // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerNamePrefix;                                         // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UTexture*                                    SupporterPatch;                                           // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ReplicationKey;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class ASQPlayerState*                              Owner;                                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Squad.SQPersistedAmmoGroup
// 0x0010
struct FSQPersistedAmmoGroup
{
	TArray<struct FSQPersistedAmmoCount>               AmmoCounts;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.SQPersistedAmmoState
// 0x0018
struct FSQPersistedAmmoState
{
	TArray<struct FSQPersistedAmmoGroup>               AmmoGroups;                                               // 0x0000(0x0010) (ZeroConstructor)
	class USQRoleSettings*                             PersistedRole;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.TeamSquadId
// 0x0008
struct FTeamSquadId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.SQRoleLimit
// 0x0024
struct FSQRoleLimit
{
	int                                                MinPerTeam;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinPerSquad;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SquadMembersToUnlockNextKit;                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnlocksAtSquadSize;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StopScalingAtSquadSize;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamMembersToUnlockNextKit;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnlocksAtTeamSize;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StopScalingAtTeamSize;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSquadLeaderOnly;                                         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNonDeployable;                                           // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Squad.SQInventoryWeaponGroupData
// 0x0010
struct FSQInventoryWeaponGroupData
{
	TArray<struct FSQInventoryData>                    WeaponItems;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Squad.SQRotationConstraints
// 0x001C
struct FSQRotationConstraints
{
	struct FVector2D                                   PitchInterval;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   YawInterval;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RollInterval;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockPitch;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockYaw;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockRoll;                                                // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Squad.SQRotationRepMovement
// 0x0000 (0x0040 - 0x0040)
struct FSQRotationRepMovement : public FSQRepMovement
{

};

// ScriptStruct Squad.PlayerWidgetPair
// 0x0010
struct FPlayerWidgetPair
{
	class USQScoreboardPlayer*                         PlayerWidget;                                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASQPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SquadWidgetPair
// 0x0010
struct FSquadWidgetPair
{
	class USQScoreboardSquad*                          SquadWidget;                                              // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASQSquadState*                               SquadState;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQScoreboardStyle
// 0x0100 (0x0108 - 0x0008)
struct FSQScoreboardStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 ItemBorderBrush;                                          // 0x0008(0x0088) (Edit)
	struct FSlateColor                                 KillStatColor;                                            // 0x0090(0x0028) (Edit)
	struct FSlateColor                                 DeathStatColor;                                           // 0x00B8(0x0028) (Edit)
	struct FSlateColor                                 ScoreStatColor;                                           // 0x00E0(0x0028) (Edit)
};

// ScriptStruct Squad.SQShockwaveQualitySetting
// 0x0010
struct FSQShockwaveQualitySetting
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                VerticalSteps;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HorizontalSteps;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullingDistance;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQCameraShake
// 0x0020
struct FSQCameraShake
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      Shake;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Falloff;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientShakeTowardsEpicenter;                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQClimbTypeData
// 0x0030
struct FSQClimbTypeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              EndSpace;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredAnimationTime;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFiringDisabled;                                          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              StaminaCost;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Montage1P;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage3P;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQClimbOverTypeData
// 0x0018 (0x0048 - 0x0030)
struct FSQClimbOverTypeData : public FSQClimbTypeData
{
	float                                              MinVerticalSpace;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateTimeToMidStart;                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateTimeToMidEnd;                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolateTimeToEnd;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MidHorizonalSpace;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQClimbOverData
// 0x00A0
struct FSQClimbOverData
{
	float                                              MaxMoveDistance;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMiddleMoveDistance;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MidCollisionShapeScale;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSQClimbOverTypeData                        Low;                                                      // 0x0010(0x0048) (Edit, BlueprintVisible)
	struct FSQClimbOverTypeData                        Mid;                                                      // 0x0058(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Squad.SQClimbOntoTypeData
// 0x0008 (0x0038 - 0x0030)
struct FSQClimbOntoTypeData : public FSQClimbTypeData
{
	float                                              InterpolateTime;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQClimbOntoData
// 0x00A8
struct FSQClimbOntoData
{
	struct FSQClimbOntoTypeData                        Low;                                                      // 0x0000(0x0038) (Edit, BlueprintVisible)
	struct FSQClimbOntoTypeData                        Mid;                                                      // 0x0038(0x0038) (Edit, BlueprintVisible)
	struct FSQClimbOntoTypeData                        High;                                                     // 0x0070(0x0038) (Edit, BlueprintVisible)
};

// ScriptStruct Squad.SQClimbData
// 0x0178
struct FSQClimbData
{
	float                                              MinHeight;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSQClimbOverData                            OverData;                                                 // 0x0008(0x00A0) (Edit, BlueprintVisible)
	struct FSQClimbOntoData                            OntoData;                                                 // 0x00A8(0x00A8) (Edit, BlueprintVisible)
	float                                              MinMoveToStartSpeed;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchDistance;                                           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxClimbableAngle;                                        // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchCorrectionTime;                                      // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchCorrectionMidPoint;                                  // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CielingNormalTollerance;                                  // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverlapDetectionScale;                                    // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActorLocationAcceptanceDistance;                          // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ServerAcceptanceDistance;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQClimbInfo
// 0x0030
struct FSQClimbInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	EClimbType                                         PendingType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x0002(0x0016) MISSED OFFSET
	TArray<struct FVector_NetQuantize10>               PendingClimbMovePathZeroBased;                            // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0028(0x0001) MISSED OFFSET
	EClimbState                                        PendingState;                                             // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Squad.SQVoipAnim
// 0x0020
struct FSQVoipAnim
{
	class UAnimMontage*                                FirstPersonAnim;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThirdPersonAnim;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FirstPersonEndAnim;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThirdPersonEndAnim;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQDistanceDatum
// 0x0014
struct FSQDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQSoundWeight
// 0x0010
struct FSQSoundWeight
{
	class USoundWave*                                  Sound;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenUsed;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Squad.SQFireTeam
// 0x0018
struct FSQFireTeam
{
	TArray<class ASQPlayerController*>                 Players;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.VehicleOccupantsItem
// 0x0044 (0x0050 - 0x000C)
struct FVehicleOccupantsItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSQVehicleOccupantInfo                      VehicleOccupantInfo;                                      // 0x0010(0x0038)
	int8_t                                             SeatId;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DirtyCount;                                               // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Squad.VehicleOccupantsArray
// 0x0010 (0x00C0 - 0x00B0)
struct FVehicleOccupantsArray : public FFastArraySerializer
{
	TArray<struct FVehicleOccupantsItem>               Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.SQRoleGroupLimit
// 0x0014
struct FSQRoleGroupLimit
{
	ESQRoleTypeEnum                                    RoleGroup;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinLimit;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLimit;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SquadMembersPerSlotIncrease;                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SlotsPerIncrease;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQDeployableLimit
// 0x0010
struct FSQDeployableLimit
{
	class UClass*                                      DeployableClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPerFob;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQRoleLimitFASItem
// 0x0024 (0x0030 - 0x000C)
struct FSQRoleLimitFASItem : public FFastArraySerializerItem
{
	struct FSQRoleLimit                                Content;                                                  // 0x000C(0x0024)
};

// ScriptStruct Squad.SQRoleLimitArray
// 0x0010 (0x00C0 - 0x00B0)
struct FSQRoleLimitArray : public FFastArraySerializer
{
	TArray<struct FSQRoleLimitFASItem>                 Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.SQSettingsRestriction
// 0x0018
struct FSQSettingsRestriction
{
	struct FString                                     Setting;                                                  // 0x0000(0x0010) (ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQVehicleWeaponConfig
// 0x0008
struct FSQVehicleWeaponConfig
{
	class UClass*                                      WeaponClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Squad.SQRotationVelocityRepMovement
// 0x0010 (0x0050 - 0x0040)
struct FSQRotationVelocityRepMovement : public FSQRepMovement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQMeshTransitionSettings
// 0x0040
struct FSQMeshTransitionSettings
{
	float                                              TransitionValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  MeshTransform;                                            // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct Squad.SQAdjustableSightMontageSet
// 0x0040
struct FSQAdjustableSightMontageSet
{
	class UAnimMontage*                                BaseAdjustAds3pMontage;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AdjustAdsTransition3pMontage;                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AdjustFromAdsTransition3pMontage;                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LineOfFireAngle;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FText                                       DistanceText;                                             // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Squad.SQMinimapMakerSettings
// 0x0500
struct FSQMinimapMakerSettings
{
	ESQTileResolution                                  TileResolution;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESQTileCount                                       TileCount;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	struct FPostProcessSettings                        MinimapPostProcessor;                                     // 0x0010(0x04E0) (Edit)
	int                                                MinimapFOV;                                               // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04F4(0x000C) MISSED OFFSET
};

// ScriptStruct Squad.SQRoleLimitOverride
// 0x0030
struct FSQRoleLimitOverride
{
	class USQRoleSettings*                             Role;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSQRoleLimit                                Limit;                                                    // 0x0008(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.BlueprintOnlineItemDefinition
// 0x0010
struct FBlueprintOnlineItemDefinition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.HeatMapRecording
// 0x0088
struct FHeatMapRecording
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Squad.HeatMapRecordingSample
// 0x0020
struct FHeatMapRecordingSample
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Squad.SQMarkerReference
// 0x0028
struct FSQMarkerReference
{
	class UClass*                                      MarkerType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSquadOnly;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class USQ_HexMenu_BaseAction*>              Markers;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	int                                                ConcurrentMarkersLimit;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQCachedTransitionData
// 0x0028
struct FSQCachedTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQCachedRelevantAnimData
// 0x0020
struct FSQCachedRelevantAnimData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQCachedAssetPlayerData
// 0x0020
struct FSQCachedAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       InstanceName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.SQCachedStateData
// 0x0020
struct FSQCachedStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Squad.SQCachedStateArray
// 0x0018
struct FSQCachedStateArray
{
	TArray<struct FSQCachedStateData>                  States;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.SQAnimNode_BoneDrivenController
// 0x0078 (0x0168 - 0x00F0)
struct FSQAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00F0(0x0018) (Edit)
	TEnumAsByte<ESQComponentType>                      SourceComponent;                                          // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	float                                              RangeMin;                                                 // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESQDrivenDestinationMode                           DestinationMode;                                          // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x0140(0x0018) (Edit)
	TEnumAsByte<EBoneControlSpace>                     TargetComponentSpace;                                     // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESQComponentType>                      TargetComponent;                                          // 0x0159(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x015C(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x015D(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	ESQDrivenBoneModificationMode                      ModificationMode;                                         // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
};

// ScriptStruct Squad.SQAnimNode_WheelHandler
// 0x0030 (0x0120 - 0x00F0)
struct FSQAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	float                                              Smoothing;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00F4(0x001C) MISSED OFFSET
	TArray<struct FVector>                             PreviousWheelLocations;                                   // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct Squad.SQRemoteGameConfig
// 0x000C
struct FSQRemoteGameConfig
{
	bool                                               bLicensingEnabled;                                        // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bServerHealthEnabled;                                     // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ServerHealthHigh;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ServerHealthLow;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRemoteServerConfig
// 0x0001
struct FSQRemoteServerConfig
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Squad.SQServerSettings
// 0x0078
struct FSQServerSettings
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Squad.SQConfigValueLoader
// 0x0008
struct FSQConfigValueLoader
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Squad.SQConfigMappedValueLoader
// 0x0050 (0x0058 - 0x0008)
struct FSQConfigMappedValueLoader : public FSQConfigValueLoader
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Squad.SQConsoleCommand
// 0x0038 (0x0060 - 0x0028)
struct FSQConsoleCommand : public FAutoCompleteCommand
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
};

// ScriptStruct Squad.SQAnimPlayTime
// 0x000C
struct FSQAnimPlayTime
{
	float                                              WeaponPlayTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Soldier1pPlayTime;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Soldier3pPlayTime;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRoute
// 0x0020
struct FSQRoute
{
	TArray<struct FSQGraphLink>                        Links;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class USQCaptureZoneComponent*                     Source;                                                   // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USQCaptureZoneComponent*                     Destination;                                              // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Squad.SQGroundVehicleWheelParameters
// 0x003C
struct FSQGroundVehicleWheelParameters
{
	float                                              RPM;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LongSlip;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LatSlip;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Asphalt;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Dirt;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Grass;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Gravel;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Metal;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mud;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sand;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Snow;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SnowWet;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TallGrass;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Water;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Wood;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRejectedLicenseInfo
// 0x0018
struct FSQRejectedLicenseInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Squad.SQRoleKitIconLookup
// 0x0008 (0x0010 - 0x0008)
struct FSQRoleKitIconLookup : public FTableRowBase
{
	class USQRoleSettings*                             RoleSetting;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQRotator_NetQuantizeShorts
// 0x0000 (0x000C - 0x000C)
struct FSQRotator_NetQuantizeShorts : public FRotator
{

};

// ScriptStruct Squad.SQClimbTraceHitResults
// 0x002C
struct FSQClimbTraceHitResults
{
	struct FVector                                     EndingPoint1;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockingHit;                                             // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FRotator                                    ClimbFrontNormal;                                         // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClimbDistanceFromWall;                                    // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimbTraceHit2;                                           // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQVaultTraceHitResults
// 0x00B0
struct FSQVaultTraceHitResults
{
	struct FHitResult                                  bVaultLineTrace1Hit;                                      // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     VaultOppSideWallHit;                                      // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VaultDistanceFromOppSideWall;                             // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VaultEndingPointLineTraceImpact;                          // 0x0098(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVaultLineTrace2Hit;                                      // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              DistanceToNewLocation;                                    // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQWaypoint
// 0x0030
struct FSQWaypoint
{
	struct FVector                                     WorldPosition;                                            // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MapPosition;                                              // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           PathPoints;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  IconTexture;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Squad.SQFontInfo
// 0x0060
struct FSQFontInfo
{
	class UFont*                                       Font;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESQTextHorizontalAlignment                         HorizontalAlignment;                                      // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESQTextVerticalAlignment                           VerticalAlignment;                                        // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowDirection;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawOutline;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x004C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQTestInventoryData
// 0x0010
struct FSQTestInventoryData
{
	TArray<struct FSQInventoryWeaponGroupData>         GroupItems;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Squad.SQExplosiveShotInfo
// 0x000C (0x0038 - 0x002C)
struct FSQExplosiveShotInfo : public FSQShotInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Squad.SQFTEText
// 0x0030
struct FSQFTEText
{
	struct FText                                       FTEText;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               ActionKeys;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              LifeTime;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Squad.SQRadialDamageEvent
// 0x0090 (0x00D0 - 0x0040)
struct FSQRadialDamageEvent : public FRadialDamageEvent
{
	bool                                               bDirectHit;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0048(0x0088) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
};

// ScriptStruct Squad.SQRangeConstraints
// 0x0038
struct FSQRangeConstraints
{
	bool                                               bEnablePitchInterval;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableYawInterval;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRollInterval;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector2D                                   PitchInterval;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   YawInterval;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RollInterval;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSQRotationConstraints                      Constraints;                                              // 0x001C(0x001C) (Edit, BlueprintVisible)
};

// ScriptStruct Squad.SQFireTriggerMontage
// 0x0010
struct FSQFireTriggerMontage
{
	class UAnimMontage*                                FireWeaponMontage;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireTriggerMontage;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
