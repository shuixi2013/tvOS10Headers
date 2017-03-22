/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * tagNames; 
@property (nonatomic,readonly) NSArray * standardLocalizedTagNames; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(NSArray *)tagNames;
-(NSArray *)standardLocalizedTagNames;
-(id)componentsMatchingPredicate:(id)arg1 ;
-(id)componentsPassingTest:(/*^block*/id)arg1 ;
-(id)componentsMatchingDescription:(AudioComponentDescription)arg1 ;
@end

