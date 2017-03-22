/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionDeleting.h>
#import <libobjc.A.dylib/_CDInteractionQuerying.h>
#import <libobjc.A.dylib/_CDInteractionRecording.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {

	NSXPCConnection* _connection;
	_CDInteractionPolicies* _policies;
	BOOL _enforceDataLimits;
	BOOL _enforcePrivacy;

}

@property (assign) BOOL enforceDataLimits;              //@synthesize enforceDataLimits=_enforceDataLimits - In the implementation block
@property (assign) BOOL enforcePrivacy;                 //@synthesize enforcePrivacy=_enforcePrivacy - In the implementation block
+(id)interactionRecorder;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)recordInteractions:(id)arg1 ;
-(unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)recordInteraction:(id)arg1 ;
-(void)recordInteractions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)enforceDataLimits;
-(BOOL)enforcePrivacy;
-(void)setEnforceDataLimits:(BOOL)arg1 ;
-(void)setEnforcePrivacy:(BOOL)arg1 ;
@end

