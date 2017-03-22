/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface CFPrefsPlistSource : CFPrefsSource {

	NSObject*<OS_dispatch_group> _synchGroup;
	CFStringRef userIdentifier;
	CFStringRef domainIdentifier;
	CFStringRef container;
	A{__CFDictionary}* _locallySetDict;
	A* accessPath;
	AB _isByHost;
	AB _volatile;
	AB _readonly;
	AB _avoidsDaemonCache;
	AB _restrictedAccess;
	AB _checkedInvalidHome;
	AB _lastWriteFailed;
	AB _observing;
	AB _disableBackup;

}
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)alreadylocked_clearCache;
-(long long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_goReadOnlyOrVolatileAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(BOOL)handleErrorReply:(id)arg1 fromMessageSettingKey:(CFStringRef)arg2 toValue:(void*)arg3 retryCount:(int)arg4 retryContinuation:(/*^block*/id)arg5 ;
-(void)goVolatileAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)goReadOnlyAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(BOOL)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2 ;
-(void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValue:(void*)arg3 forKey:(CFStringRef)arg4 retryCount:(int)arg5 ;
-(id)createSynchronizeMessage;
-(void)addPIDImpersonationIfNecessary:(id)arg1 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(BOOL*)arg4 ;
-(BOOL)volatilizeIfInvalidHomeDir;
-(BOOL)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(/*^block*/id)arg3 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(void)_sharedCleanup;
-(BOOL)isByHost;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)setBackupDisabled:(BOOL)arg1 ;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(BOOL)alreadylocked_requestNewData;
-(long long)alreadylocked_generationCount;
-(void)alreadylocked_updateObservingRemoteChanges;
-(void)dealloc;
-(BOOL)synchronize;
-(CFStringRef)container;
-(void)setContainer:(CFStringRef)arg1 ;
-(long long)generationCount;
-(void)setDomainIdentifier:(CFStringRef)arg1 ;
-(CFStringRef)domainIdentifier;
-(void)setUserIdentifier:(CFStringRef)arg1 ;
-(BOOL)isVolatile;
-(CFStringRef)userIdentifier;
@end

