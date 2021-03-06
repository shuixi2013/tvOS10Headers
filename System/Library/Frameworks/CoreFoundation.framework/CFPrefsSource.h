/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences;

@interface CFPrefsSource : NSObject {

	_CFXPreferences* _containingPreferences;
	CFDictionaryRef _dict;
	CFArrayRef _observers;
	Aq _generationCount;
	A(?)* shmemEntry;
	opaque_pthread_mutex_t* _lock;
	SCD_Union_CF27 lastKnownShmemState;
	BOOL _isSearchList;

}
-(BOOL)managed;
-(id)initWithContainingPreferences:(id)arg1 ;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)alreadylocked_clearCache;
-(CFStringRef)copyOSLogDescription;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(BOOL)isByHost;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(BOOL)alreadylocked_requestNewData;
-(long long)alreadylocked_generationCount;
-(void)alreadylocked_updateObservingRemoteChanges;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)lockObservers;
-(void)alreadylocked_addPreferencesObserver:(id)arg1 ;
-(void)alreadylocked_removePreferencesObserver:(id)arg1 ;
-(void)unlockObservers;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)addPreferencesObserver:(id)arg1 ;
-(void)removePreferencesObserver:(id)arg1 ;
-(void)willChangeValuesForKeys:(const _CFString*)arg1 count:(long long)arg2 ;
-(void)didChangeValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 removeValuesForKeys:(const _CFString*)arg4 count:(long long)arg5 ;
-(CFArrayRef)copyKeyList;
-(void)replaceAllValuesWithValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(CFDictionaryRef)copyDictionary;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)description;
-(BOOL)synchronize;
-(CFStringRef)container;
-(void)lock;
-(void)unlock;
-(long long)generationCount;
-(CFStringRef)domainIdentifier;
-(BOOL)isVolatile;
-(CFStringRef)userIdentifier;
-(void)removeAllValues;
@end

