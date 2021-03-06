/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MiroPosterEffectPool : NSObject {

	NSMutableDictionary* _pool;
	NSLock* _poolLock;

}
-(id)init;
-(void)clear;
-(void)preloadAndPoolEffectIfNeeded:(id)arg1 ;
-(id)pooledEffectForID:(id)arg1 ;
-(void)returnEffectToPool:(id)arg1 ;
@end

