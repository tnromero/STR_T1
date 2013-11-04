// koptions.h - RTXC Quadros Version 1.0.0 Kernel Options

// This file was generated on 11/03/2013 22:03:50 -- RTXCgen v1.12 Build 411

/*
 *    RTXC Quadros Version 1.0.0
 *    Copyright (c) 1999-2013
 *    Quadros Systems, Inc.
 *    ALL RIGHTS RESERVED
 *
 *    THE INFORMATION HEREIN IS CONFIDENTIAL AND PROPRIETARY.
 *    UNAUTHORIZED DISCLOSURE OR DISTRIBUTION IS PROHIBITED.
*/

/*
 *            ** WARNING **
 *
 *    Do **NOT** Edit this File by Hand
 *
 *    It was computer-generated by RTXCgen from
 *    an Application specification file.
*/

//     Project Name: Exemplo-modelo
//         CPU Name: CPU name
// Application Name: Application name

#ifndef _KOPTIONS_H // {
#define _KOPTIONS_H

// Begin - Revision Information, Top
// End - Revision Information, Top

#define HAS_RTXCss // Kernel Options
#define HAS_RTXCms // Kernel Options
#undef HAS_RTXCmp // Kernel Options

#include "aoptions.h"

#define TRAP_NO 0 // Kernel Model Option

#define HAS_Levels // Class

#ifdef HAS_Levels // {

#define HAS_LevelStaticNames // Option

#ifdef HAS_LevelStaticNames // {
#endif // } HAS_LevelStaticNames

#define HAS_MultiLevelScheduling // Option

#ifdef HAS_MultiLevelScheduling // {
#endif // } HAS_MultiLevelScheduling

#define HAS_RoundRobinScheduling // Option

#ifdef HAS_RoundRobinScheduling // {
#endif // } HAS_RoundRobinScheduling

#endif // } HAS_Levels

#define HAS_Threads // Class

#ifdef HAS_Threads // {

#define HAS_ThreadStaticNames // Option

#ifdef HAS_ThreadStaticNames // {
#endif // } HAS_ThreadStaticNames

#define HAS_ThreadGates // Option

#ifdef HAS_ThreadGates // {
#define HAS_ThreadGateZ1Services // Option

#ifdef HAS_ThreadGateZ1Services // {
#define HAS_IS_ClearThreadGateBits // Option-Services
#define HAS_IS_DecrThreadGate // Option-Services
#define HAS_IS_IncrThreadGate // Option-Services
#define HAS_IS_ORThreadGateBits // Option-Services
#endif // } HAS_ThreadGateZ1Services

#define HAS_ThreadGateZ2Services // Option

#ifdef HAS_ThreadGateZ2Services // {
#define HAS_TS_ClearThreadGateBits // Option-Services
#define HAS_TS_DecrThreadGate // Option-Services
#define HAS_TS_GetThreadGate // Option-Services
#define HAS_TS_PresetThreadGate // Option-Services
#define HAS_TS_GetThreadGateLoadPreset // Option-Services
#define HAS_TS_GetThreadGatePreset // Option-Services
#define HAS_TS_IncrThreadGate // Option-Services
#define HAS_TS_ORThreadGateBits // Option-Services
#define HAS_TS_SetThreadGate // Option-Services
#define HAS_TS_SetThreadGatePreset // Option-Services
#endif // } HAS_ThreadGateZ2Services

#define HAS_ThreadGateZ3Services // Option

#ifdef HAS_ThreadGateZ3Services // {
#define HAS_KS_ClearThreadGateBits // Option-Services
#define HAS_KS_DecrThreadGate // Option-Services
#define HAS_KS_GetThreadGate // Option-Services
#define HAS_KS_PresetThreadGate // Option-Services
#define HAS_KS_GetThreadGatePreset // Option-Services
#define HAS_KS_IncrThreadGate // Option-Services
#define HAS_KS_ORThreadGateBits // Option-Services
#define HAS_KS_SetThreadGate // Option-Services
#define HAS_KS_SetThreadGatePreset // Option-Services
#endif // } HAS_ThreadGateZ3Services

#endif // } HAS_ThreadGates

#define HAS_ThreadArg // Option

#ifdef HAS_ThreadArg // {
#define HAS_ThreadArgsZ1Services // Option

#ifdef HAS_ThreadArgsZ1Services // {
#define HAS_IS_DefThreadArg // Option-Services
#define HAS_IS_ScheduleThreadArg // Option-Services
#endif // } HAS_ThreadArgsZ1Services

#define HAS_ThreadArgsZ2Services // Option

#ifdef HAS_ThreadArgsZ2Services // {
#define HAS_TS_DefThreadArg // Option-Services
#define HAS_TS_GetThreadArg // Option-Services
#define HAS_TS_ScheduleThreadArg // Option-Services
#endif // } HAS_ThreadArgsZ2Services

#define HAS_ThreadArgsZ3Services // Option

#ifdef HAS_ThreadArgsZ3Services // {
#define HAS_KS_DefThreadArg // Option-Services
#define HAS_KS_ScheduleThreadArg // Option-Services
#endif // } HAS_ThreadArgsZ3Services

#endif // } HAS_ThreadArg

#define HAS_ThreadEnvArg // Option

#ifdef HAS_ThreadEnvArg // {
#define HAS_ThreadEnvArgsZ2Services // Option

#ifdef HAS_ThreadEnvArgsZ2Services // {
#define HAS_TS_DefThreadEnvArg // Option-Services
#define HAS_TS_GetThreadEnvArg // Option-Services
#endif // } HAS_ThreadEnvArgsZ2Services

#define HAS_ThreadEnvArgsZ3Services // Option

#ifdef HAS_ThreadEnvArgsZ3Services // {
#define HAS_KS_DefThreadEnvArg // Option-Services
#define HAS_KS_GetThreadEnvArg // Option-Services
#endif // } HAS_ThreadEnvArgsZ3Services

#endif // } HAS_ThreadEnvArg

#define HAS_ThreadZ1Services // Option

#ifdef HAS_ThreadZ1Services // {
#define HAS_IS_DefThreadEntry // Option-Services
#define HAS_IS_GetThreadProp // Option-Services
#define HAS_IS_ScheduleThread // Option-Services
#define HAS_IS_UnscheduleThread // Option-Services
#endif // } HAS_ThreadZ1Services

#define HAS_ThreadZ2Services // Option

#ifdef HAS_ThreadZ2Services // {
#define HAS_TS_DefThreadEntry // Option-Services
#define HAS_TS_DisableThreadScheduler // Option-Services
#define HAS_TS_EnableThreadScheduler // Option-Services
#define HAS_TS_GetThreadBaseLevel // Option-Services
#define HAS_TS_GetThreadClassProp // Option-Services
#define HAS_TS_GetThreadCurrentLevel // Option-Services
#define HAS_TS_GetThreadID // Option-Services
#define HAS_TS_GetThreadProp // Option-Services
#define HAS_TS_LowerThreadLevel // Option-Services
#define HAS_TS_RaiseThreadLevel // Option-Services
#define HAS_TS_ScheduleThread // Option-Services
#define HAS_TS_UnscheduleThread // Option-Services
#endif // } HAS_ThreadZ2Services

#define HAS_ThreadZ3Services // Option

#ifdef HAS_ThreadZ3Services // {
#define HAS_KS_DefThreadEntry // Option-Services
#define HAS_KS_GetThreadClassProp // Option-Services
#define HAS_KS_GetThreadProp // Option-Services
#define HAS_KS_ScheduleThread // Option-Services
#define HAS_KS_LookupThread // Option-Services
#endif // } HAS_ThreadZ3Services

#endif // } HAS_Threads

#define HAS_Exceptions // Class

#ifdef HAS_Exceptions // {

#define HAS_ExceptionStaticNames // Option

#ifdef HAS_ExceptionStaticNames // {
#endif // } HAS_ExceptionStaticNames

#define HAS_ExceptionDynamics // Option

#ifdef HAS_ExceptionDynamics // {
#define HAS_KS_CloseException // Option-Services
#define HAS_KS_DefExceptionName // Option-Services
#define HAS_KS_GetExceptionName // Option-Services
#define HAS_KS_OpenException // Option-Services
#define HAS_KS_UseException // Option-Services
#endif // } HAS_ExceptionDynamics

#define HAS_ExceptionZ2Services // Option

#ifdef HAS_ExceptionZ2Services // {
#define HAS_TS_GetExceptionProp // Option-Services
#endif // } HAS_ExceptionZ2Services

#define HAS_ExceptionZ3Services // Option

#ifdef HAS_ExceptionZ3Services // {
#define HAS_KS_GetExceptionClassProp // Option-Services
#define HAS_KS_GetExceptionProp // Option-Services
#define HAS_KS_LookupException // Option-Services
#endif // } HAS_ExceptionZ3Services

#define HAS_RAM_VECTORS // Option

#ifdef HAS_RAM_VECTORS // {
#endif // } HAS_RAM_VECTORS

#endif // } HAS_Exceptions

#define HAS_EventSources // Class

#ifdef HAS_EventSources // {

#define HAS_EventSourceStaticNames // Option

#ifdef HAS_EventSourceStaticNames // {
#endif // } HAS_EventSourceStaticNames

#define HAS_EventSourceDynamics // Option

#ifdef HAS_EventSourceDynamics // {
#define HAS_KS_CloseEventSource // Option-Services
#define HAS_KS_DefEventSourceName // Option-Services
#define HAS_KS_GetEventSourceName // Option-Services
#define HAS_KS_OpenEventSource // Option-Services
#define HAS_KS_UseEventSource // Option-Services
#endif // } HAS_EventSourceDynamics

#define HAS_EventSourceZ1Services // Option

#ifdef HAS_EventSourceZ1Services // {
#define HAS_IS_ProcessEventSourceTick // Option-Services
#define HAS_IS_GetEventSourceAcc // Option-Services
#endif // } HAS_EventSourceZ1Services

#define HAS_EventSourceZ2Services // Option

#ifdef HAS_EventSourceZ2Services // {
#define HAS_TS_ProcessEventSourceTick // Option-Services
#define HAS_TS_SetEventSourceAttr // Option-Services
#define HAS_TS_ClearEventSourceAttr // Option-Services
#define HAS_TS_GetEventSourceAcc // Option-Services
#define HAS_TS_SetEventSourceAcc // Option-Services
#define HAS_TS_GetEventSourceProp // Option-Services
#endif // } HAS_EventSourceZ2Services

#define HAS_EventSourceZ3Services // Option

#ifdef HAS_EventSourceZ3Services // {
#define HAS_KS_ProcessEventSourceTick // Option-Services
#define HAS_KS_SetEventSourceAttr // Option-Services
#define HAS_KS_ClearEventSourceAttr // Option-Services
#define HAS_KS_GetEventSourceAcc // Option-Services
#define HAS_KS_SetEventSourceAcc // Option-Services
#define HAS_KS_GetEventSourceClassProp // Option-Services
#define HAS_KS_GetEventSourceProp // Option-Services
#define HAS_KS_LookupEventSource // Option-Services
#endif // } HAS_EventSourceZ3Services

#endif // } HAS_EventSources

#define HAS_Counters // Class

#ifdef HAS_Counters // {

#define HAS_CounterStaticNames // Option

#ifdef HAS_CounterStaticNames // {
#endif // } HAS_CounterStaticNames

#define HAS_CounterDynamics // Option

#ifdef HAS_CounterDynamics // {
#define HAS_KS_CloseCounter // Option-Services
#define HAS_KS_DefCounterName // Option-Services
#define HAS_KS_GetCounterName // Option-Services
#define HAS_KS_OpenCounter // Option-Services
#define HAS_KS_UseCounter // Option-Services
#endif // } HAS_CounterDynamics

#define HAS_CounterZ1Services // Option

#ifdef HAS_CounterZ1Services // {
#define HAS_IS_GetCounterAcc // Option-Services
#endif // } HAS_CounterZ1Services

#define HAS_CounterZ2Services // Option

#ifdef HAS_CounterZ2Services // {
#define HAS_TS_ClearCounterAttr // Option-Services
#define HAS_TS_GetCounterAcc // Option-Services
#define HAS_TS_GetCounterProp // Option-Services
#define HAS_TS_GetElapsedCounterTicks // Option-Services
#define HAS_TS_SetCounterAcc // Option-Services
#define HAS_TS_SetCounterAttr // Option-Services
#endif // } HAS_CounterZ2Services

#define HAS_CounterZ3Services // Option

#ifdef HAS_CounterZ3Services // {
#define HAS_KS_ClearCounterAttr // Option-Services
#define HAS_KS_GetCounterAcc // Option-Services
#define HAS_KS_GetCounterClassProp // Option-Services
#define HAS_KS_GetCounterProp // Option-Services
#define HAS_KS_GetElapsedCounterTicks // Option-Services
#define HAS_KS_SetCounterAcc // Option-Services
#define HAS_KS_SetCounterAttr // Option-Services
#define HAS_KS_LookupCounter // Option-Services
#endif // } HAS_CounterZ3Services

#endif // } HAS_Counters

#define HAS_Alarms // Class

#ifdef HAS_Alarms // {

#define HAS_AlarmStaticNames // Option

#ifdef HAS_AlarmStaticNames // {
#endif // } HAS_AlarmStaticNames

#define HAS_AlarmDynamics // Option

#ifdef HAS_AlarmDynamics // {
#define HAS_KS_CloseAlarm // Option-Services
#define HAS_KS_DefAlarmName // Option-Services
#define HAS_KS_GetAlarmName // Option-Services
#define HAS_KS_OpenAlarm // Option-Services
#define HAS_KS_UseAlarm // Option-Services
#endif // } HAS_AlarmDynamics

#define HAS_AlarmWaiters // Option

#ifdef HAS_AlarmWaiters // {
#define HAS_KS_TestAlarmW // Option-Services
#define HAS_AlarmTickout // Option

#ifdef HAS_AlarmTickout // {
#define HAS_KS_TestAlarmT // Option-Services
#endif // } HAS_AlarmTickout

#define HAS_AlarmPriorityWaiters // Option

#ifdef HAS_AlarmPriorityWaiters // {
#endif // } HAS_AlarmPriorityWaiters

#endif // } HAS_AlarmWaiters

#define HAS_AlarmSemaphores // Option

#ifdef HAS_AlarmSemaphores // {
#define HAS_KS_DefAlarmSema // Option-Services
#define HAS_KS_GetAlarmSema // Option-Services
#endif // } HAS_AlarmSemaphores

#define HAS_AlarmActions // Option

#ifdef HAS_AlarmActions // {
#define HAS_AlarmActionsZ2Services // Option

#ifdef HAS_AlarmActionsZ2Services // {
#define HAS_TS_DefAlarmAction // Option-Services
#define HAS_TS_DefAlarmActionArm // Option-Services
#endif // } HAS_AlarmActionsZ2Services

#define HAS_AlarmActionsZ3Services // Option

#ifdef HAS_AlarmActionsZ3Services // {
#define HAS_KS_DefAlarmAction // Option-Services
#define HAS_KS_DefAlarmActionArm // Option-Services
#endif // } HAS_AlarmActionsZ3Services

#endif // } HAS_AlarmActions

#define HAS_AlarmZ2Services // Option

#ifdef HAS_AlarmZ2Services // {
#define HAS_TS_AbortAlarm // Option-Services
#define HAS_TS_ArmAlarm // Option-Services
#define HAS_TS_CancelAlarm // Option-Services
#define HAS_TS_GetAlarmProp // Option-Services
#define HAS_TS_GetAlarmTicks // Option-Services
#define HAS_TS_RearmAlarm // Option-Services
#endif // } HAS_AlarmZ2Services

#define HAS_AlarmZ3Services // Option

#ifdef HAS_AlarmZ3Services // {
#define HAS_KS_AbortAlarm // Option-Services
#define HAS_KS_ArmAlarm // Option-Services
#define HAS_KS_CancelAlarm // Option-Services
#define HAS_KS_GetAlarmClassProp // Option-Services
#define HAS_KS_GetAlarmProp // Option-Services
#define HAS_KS_GetAlarmTicks // Option-Services
#define HAS_KS_RearmAlarm // Option-Services
#define HAS_KS_TestAlarm // Option-Services
#define HAS_KS_LookupAlarm // Option-Services
#endif // } HAS_AlarmZ3Services

#endif // } HAS_Alarms

#define HAS_Pipes // Class

#ifdef HAS_Pipes // {

#define HAS_PipeStaticNames // Option

#ifdef HAS_PipeStaticNames // {
#endif // } HAS_PipeStaticNames

#define HAS_PipeDynamics // Option

#ifdef HAS_PipeDynamics // {
#define HAS_KS_ClosePipe // Option-Services
#define HAS_KS_DefPipeName // Option-Services
#define HAS_KS_GetPipeName // Option-Services
#define HAS_KS_OpenPipe // Option-Services
#define HAS_KS_UsePipe // Option-Services
#endif // } HAS_PipeDynamics

#define HAS_PipeActions // Option

#ifdef HAS_PipeActions // {
#define HAS_PipeActionsZ2Services // Option

#ifdef HAS_PipeActionsZ2Services // {
#define HAS_TS_DefPipeAction // Option-Services
#endif // } HAS_PipeActionsZ2Services

#define HAS_PipeActionsZ3Services // Option

#ifdef HAS_PipeActionsZ3Services // {
#define HAS_KS_DefPipeAction // Option-Services
#endif // } HAS_PipeActionsZ3Services

#endif // } HAS_PipeActions

#define HAS_PipeZ1Services // Option

#ifdef HAS_PipeZ1Services // {
#define HAS_IS_GetEmptyPipeBuf // Option-Services
#define HAS_IS_GetFullPipeBuf // Option-Services
#define HAS_IS_GetPipeBufSize // Option-Services
#define HAS_IS_JamFullGetEmptyPipeBuf // Option-Services
#define HAS_IS_JamFullPipeBuf // Option-Services
#define HAS_IS_PutEmptyGetFullPipeBuf // Option-Services
#define HAS_IS_PutEmptyPipeBuf // Option-Services
#define HAS_IS_PutFullGetEmptyPipeBuf // Option-Services
#define HAS_IS_PutFullPipeBuf // Option-Services
#endif // } HAS_PipeZ1Services

#define HAS_PipeZ2Services // Option

#ifdef HAS_PipeZ2Services // {
#define HAS_TS_ClearPipeAttr // Option-Services
#define HAS_TS_GetEmptyPipeBuf // Option-Services
#define HAS_TS_GetFullPipeBuf // Option-Services
#define HAS_TS_GetPipeBufSize // Option-Services
#define HAS_TS_GetPipeProp // Option-Services
#define HAS_TS_JamFullGetEmptyPipeBuf // Option-Services
#define HAS_TS_JamFullPipeBuf // Option-Services
#define HAS_TS_PutEmptyGetFullPipeBuf // Option-Services
#define HAS_TS_PutEmptyPipeBuf // Option-Services
#define HAS_TS_PutFullGetEmptyPipeBuf // Option-Services
#define HAS_TS_PutFullPipeBuf // Option-Services
#define HAS_TS_SetPipeAttr // Option-Services
#endif // } HAS_PipeZ2Services

#define HAS_PipeZ3Services // Option

#ifdef HAS_PipeZ3Services // {
#define HAS_KS_ClearPipeAttr // Option-Services
#define HAS_KS_GetEmptyPipeBuf // Option-Services
#define HAS_KS_GetFullPipeBuf // Option-Services
#define HAS_KS_GetPipeBufSize // Option-Services
#define HAS_KS_GetPipeClassProp // Option-Services
#define HAS_KS_GetPipeProp // Option-Services
#define HAS_KS_JamFullGetEmptyPipeBuf // Option-Services
#define HAS_KS_JamFullPipeBuf // Option-Services
#define HAS_KS_PutEmptyGetFullPipeBuf // Option-Services
#define HAS_KS_PutEmptyPipeBuf // Option-Services
#define HAS_KS_PutFullGetEmptyPipeBuf // Option-Services
#define HAS_KS_PutFullPipeBuf // Option-Services
#define HAS_KS_SetPipeAttr // Option-Services
#define HAS_KS_LookupPipe // Option-Services
#endif // } HAS_PipeZ3Services

#endif // } HAS_Pipes

#define HAS_Tasks // Class

#ifdef HAS_Tasks // {
#define HAS_KS_GetTaskClassProp // Services
#define HAS_KS_GetTaskProp // Services
#define HAS_KS_ExecuteTask // Services
#define HAS_KS_TerminateTask // Services
#define HAS_KS_AbortTask // Services
#define HAS_KS_SuspendTask // Services
#define HAS_KS_ResumeTask // Services
#define HAS_KS_YieldTask // Services
#define HAS_KS_GetTaskID // Services
#define HAS_KS_GetTaskState // Services
#define HAS_KS_DefTaskPriority // Services
#define HAS_KS_GetTaskPriority // Services
#define HAS_KS_LookupTask // Services

#define HAS_TaskStaticNames // Option

#ifdef HAS_TaskStaticNames // {
#endif // } HAS_TaskStaticNames

#define HAS_TaskDynamics // Option

#ifdef HAS_TaskDynamics // {
#define HAS_KS_CloseTask // Option-Services
#define HAS_KS_DefTaskName // Option-Services
#define HAS_KS_GetTaskName // Option-Services
#define HAS_KS_OpenTask // Option-Services
#define HAS_KS_UseTask // Option-Services
#endif // } HAS_TaskDynamics

#define HAS_TaskSemaphores // Option

#ifdef HAS_TaskSemaphores // {
#define HAS_KS_DefTaskSema // Option-Services
#define HAS_KS_GetTaskSema // Option-Services
#endif // } HAS_TaskSemaphores

#define HAS_TaskTickSlice // Option

#ifdef HAS_TaskTickSlice // {
#define HAS_KS_DefTickSlice // Option-Services
#define HAS_KS_GetTickSlice // Option-Services
#endif // } HAS_TaskTickSlice

#define HAS_TaskEnvironmentArgs // Option

#ifdef HAS_TaskEnvironmentArgs // {
#define HAS_KS_DefTaskEnvArg // Option-Services
#define HAS_KS_GetTaskEnvArg // Option-Services
#define HAS_KS_GetSelfTaskEnvArg // Option-Services
#endif // } HAS_TaskEnvironmentArgs

#define HAS_TaskTickout // Option

#ifdef HAS_TaskTickout // {
#define HAS_KS_SleepTask // Option-Services
#endif // } HAS_TaskTickout

#define HAS_TaskZ1Services // Option

#ifdef HAS_TaskZ1Services // {
#define HAS_IS_ResumeTask // Option-Services
#endif // } HAS_TaskZ1Services

#define HAS_TaskZ2Services // Option

#ifdef HAS_TaskZ2Services // {
#define HAS_TS_ResumeTask // Option-Services
#endif // } HAS_TaskZ2Services

#endif // } HAS_Tasks

#define HAS_Semaphores // Class

#ifdef HAS_Semaphores // {
#define HAS_KS_DefSemaCount // Services
#define HAS_KS_GetSemaClassProp // Services
#define HAS_KS_GetSemaCount // Services
#define HAS_KS_GetSemaProp // Services
#define HAS_KS_SignalSema // Services
#define HAS_KS_SignalSemaM // Services
#define HAS_KS_TestSema // Services
#define HAS_KS_TestSemaM // Services
#define HAS_KS_LookupSema // Services

#define HAS_SemaphoreStaticNames // Option

#ifdef HAS_SemaphoreStaticNames // {
#endif // } HAS_SemaphoreStaticNames

#define HAS_SemaDynamics // Option

#ifdef HAS_SemaDynamics // {
#define HAS_KS_CloseSema // Option-Services
#define HAS_KS_DefSemaName // Option-Services
#define HAS_KS_GetSemaName // Option-Services
#define HAS_KS_OpenSema // Option-Services
#define HAS_KS_UseSema // Option-Services
#endif // } HAS_SemaDynamics

#define HAS_SemaWaiters // Option

#ifdef HAS_SemaWaiters // {
#define HAS_KS_TestSemaMW // Option-Services
#define HAS_KS_TestSemaW // Option-Services
#define HAS_SemaTickout // Option

#ifdef HAS_SemaTickout // {
#define HAS_KS_TestSemaT // Option-Services
#define HAS_KS_TestSemaMT // Option-Services
#endif // } HAS_SemaTickout

#define HAS_SemaPriorityWaiters // Option

#ifdef HAS_SemaPriorityWaiters // {
#endif // } HAS_SemaPriorityWaiters

#endif // } HAS_SemaWaiters

#define HAS_SemaZ1Services // Option

#ifdef HAS_SemaZ1Services // {
#define HAS_IS_SignalSema // Option-Services
#define HAS_IS_SignalSemaM // Option-Services
#endif // } HAS_SemaZ1Services

#define HAS_SemaZ2Services // Option

#ifdef HAS_SemaZ2Services // {
#define HAS_TS_SignalSema // Option-Services
#define HAS_TS_SignalSemaM // Option-Services
#endif // } HAS_SemaZ2Services

#endif // } HAS_Semaphores

#define HAS_Queues // Class

#ifdef HAS_Queues // {
#define HAS_KS_GetQueueClassProp // Services
#define HAS_KS_GetQueueProp // Services
#define HAS_KS_PutQueueData // Services
#define HAS_KS_GetQueueData // Services
#define HAS_KS_LookupQueue // Services

#define HAS_QueueStaticNames // Option

#ifdef HAS_QueueStaticNames // {
#endif // } HAS_QueueStaticNames

#define HAS_QueueDynamics // Option

#ifdef HAS_QueueDynamics // {
#define HAS_KS_CloseQueue // Option-Services
#define HAS_KS_DefQueueName // Option-Services
#define HAS_KS_GetQueueName // Option-Services
#define HAS_KS_OpenQueue // Option-Services
#define HAS_KS_UseQueue // Option-Services
#endif // } HAS_QueueDynamics

#define HAS_QueueSemaphores // Option

#ifdef HAS_QueueSemaphores // {
#define HAS_KS_DefQueueSema // Option-Services
#define HAS_KS_GetQueueSema // Option-Services
#endif // } HAS_QueueSemaphores

#define HAS_QueueWaiters // Option

#ifdef HAS_QueueWaiters // {
#define HAS_KS_PutQueueDataW // Option-Services
#define HAS_KS_GetQueueDataW // Option-Services
#define HAS_QueueTickout // Option

#ifdef HAS_QueueTickout // {
#define HAS_KS_PutQueueDataT // Option-Services
#define HAS_KS_GetQueueDataT // Option-Services
#endif // } HAS_QueueTickout

#define HAS_QueuePriorityWaiters // Option

#ifdef HAS_QueuePriorityWaiters // {
#endif // } HAS_QueuePriorityWaiters

#endif // } HAS_QueueWaiters

#endif // } HAS_Queues

#define HAS_Mailboxes // Class

#ifdef HAS_Mailboxes // {
#define HAS_KS_AckMsg // Services
#define HAS_KS_ForwardMsg // Services
#define HAS_KS_GetMboxClassProp // Services
#define HAS_KS_GetMboxProp // Services
#define HAS_KS_ReceiveMsg // Services
#define HAS_KS_SendMsg // Services
#define HAS_KS_TestAck // Services
#define HAS_KS_LookupMbox // Services

#define HAS_MailboxStaticNames // Option

#ifdef HAS_MailboxStaticNames // {
#endif // } HAS_MailboxStaticNames

#define HAS_MboxDynamics // Option

#ifdef HAS_MboxDynamics // {
#define HAS_KS_CloseMbox // Option-Services
#define HAS_KS_DefMboxName // Option-Services
#define HAS_KS_GetMboxName // Option-Services
#define HAS_KS_OpenMbox // Option-Services
#define HAS_KS_UseMbox // Option-Services
#endif // } HAS_MboxDynamics

#define HAS_MboxSemaphores // Option

#ifdef HAS_MboxSemaphores // {
#define HAS_KS_DefMboxSema // Option-Services
#define HAS_KS_GetMboxSema // Option-Services
#endif // } HAS_MboxSemaphores

#define HAS_MboxWaiters // Option

#ifdef HAS_MboxWaiters // {
#define HAS_KS_SendMsgW // Option-Services
#define HAS_KS_ReceiveMsgW // Option-Services
#define HAS_KS_TestAckW // Option-Services
#define HAS_MboxTickout // Option

#ifdef HAS_MboxTickout // {
#define HAS_KS_SendMsgT // Option-Services
#define HAS_KS_ReceiveMsgT // Option-Services
#define HAS_KS_TestAckT // Option-Services
#endif // } HAS_MboxTickout

#define HAS_MboxPriorityWaiters // Option

#ifdef HAS_MboxPriorityWaiters // {
#endif // } HAS_MboxPriorityWaiters

#endif // } HAS_MboxWaiters

#endif // } HAS_Mailboxes

#define HAS_Partitions // Class

#ifdef HAS_Partitions // {
#define HAS_KS_AllocBlk // Services
#define HAS_KS_FreeBlk // Services
#define HAS_KS_GetFreeBlkCount // Services
#define HAS_KS_GetPartClassProp // Services
#define HAS_KS_GetPartProp // Services
#define HAS_KS_LookupPart // Services

#define HAS_PartitionStaticNames // Option

#ifdef HAS_PartitionStaticNames // {
#endif // } HAS_PartitionStaticNames

#define HAS_PartDynamics // Option

#ifdef HAS_PartDynamics // {
#define HAS_KS_ClosePart // Option-Services
#define HAS_KS_DefPartName // Option-Services
#define HAS_KS_GetPartName // Option-Services
#define HAS_KS_OpenPart // Option-Services
#define HAS_KS_UsePart // Option-Services
#endif // } HAS_PartDynamics

#define HAS_PartSemaphores // Option

#ifdef HAS_PartSemaphores // {
#define HAS_KS_DefPartSema // Option-Services
#define HAS_KS_GetPartSema // Option-Services
#endif // } HAS_PartSemaphores

#define HAS_PartWaiters // Option

#ifdef HAS_PartWaiters // {
#define HAS_KS_AllocBlkW // Option-Services
#define HAS_PartTickout // Option

#ifdef HAS_PartTickout // {
#define HAS_KS_AllocBlkT // Option-Services
#endif // } HAS_PartTickout

#define HAS_PartPriorityWaiters // Option

#ifdef HAS_PartPriorityWaiters // {
#endif // } HAS_PartPriorityWaiters

#endif // } HAS_PartWaiters

#define HAS_PartZ1Services // Option

#ifdef HAS_PartZ1Services // {
#define HAS_IS_AllocBlk // Option-Services
#endif // } HAS_PartZ1Services

#define HAS_PartZ2Services // Option

#ifdef HAS_PartZ2Services // {
#define HAS_TS_AllocBlk // Option-Services
#endif // } HAS_PartZ2Services

#endif // } HAS_Partitions

#define HAS_Mutexes // Class

#ifdef HAS_Mutexes // {
#define HAS_KS_GetMutxClassProp // Services
#define HAS_KS_GetMutxOwner // Services
#define HAS_KS_GetMutxProp // Services
#define HAS_KS_ReleaseMutx // Services
#define HAS_KS_TestMutx // Services
#define HAS_KS_LookupMutx // Services

#define HAS_MutexStaticNames // Option

#ifdef HAS_MutexStaticNames // {
#endif // } HAS_MutexStaticNames

#define HAS_MutxDynamics // Option

#ifdef HAS_MutxDynamics // {
#define HAS_KS_CloseMutx // Option-Services
#define HAS_KS_DefMutxName // Option-Services
#define HAS_KS_GetMutxName // Option-Services
#define HAS_KS_OpenMutx // Option-Services
#define HAS_KS_UseMutx // Option-Services
#endif // } HAS_MutxDynamics

#define HAS_MutxSemaphores // Option

#ifdef HAS_MutxSemaphores // {
#define HAS_KS_DefMutxSema // Option-Services
#define HAS_KS_GetMutxSema // Option-Services
#endif // } HAS_MutxSemaphores

#define HAS_PriorityInversion // Option

#ifdef HAS_PriorityInversion // {
#endif // } HAS_PriorityInversion

#define HAS_MutxWaiters // Option

#ifdef HAS_MutxWaiters // {
#define HAS_KS_TestMutxW // Option-Services
#define HAS_MutxTickout // Option

#ifdef HAS_MutxTickout // {
#define HAS_KS_TestMutxT // Option-Services
#endif // } HAS_MutxTickout

#define HAS_MutxPriorityWaiters // Option

#ifdef HAS_MutxPriorityWaiters // {
#endif // } HAS_MutxPriorityWaiters

#endif // } HAS_MutxWaiters

#endif // } HAS_Mutexes

#define HAS_SpecialServices // Class

#ifdef HAS_SpecialServices // {

#define HAS_SpecialServicesZ2Services // Option

#ifdef HAS_SpecialServicesZ2Services // {
#define HAS_TS_DefFatalErrorHandler // Option-Services
#define HAS_TS_GetFatalErrorHandler // Option-Services
#define HAS_TS_AllocSysRAM // Option-Services
#define HAS_TS_GetFreeSysRAMSize // Option-Services
#endif // } HAS_SpecialServicesZ2Services

#define HAS_SpecialServicesZ3Services // Option

#ifdef HAS_SpecialServicesZ3Services // {
#define HAS_KS_AllocSysRAM // Option-Services
#define HAS_KS_DefFatalErrorHandler // Option-Services
#define HAS_KS_DisableTaskScheduler // Option-Services
#define HAS_KS_EnableTaskScheduler // Option-Services
#define HAS_KS_GetFreeSysRAMSize // Option-Services
#define HAS_KS_GetFatalErrorHandler // Option-Services
#define HAS_KS_GetSysProp // Option-Services
#define HAS_KS_GetVersion // Option-Services
#define HAS_KS_Nop // Option-Services
#define HAS_KS_UserService // Option-Services
#endif // } HAS_SpecialServicesZ3Services

#endif // } HAS_SpecialServices


// Begin - User Include Information
// End - User Include Information

// Begin - Revision Information, Bottom
// End - Revision Information, Bottom

#endif // } _KOPTIONS_H

// end of file - koptions.h
