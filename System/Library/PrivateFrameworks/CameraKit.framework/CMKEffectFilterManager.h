/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CMKEffectFilterManager : NSObject {

	NSMutableArray* _effects;
	NSMutableArray* _names;
	NSMutableArray* _aggdNames;

}
+(id)sharedInstance;
-(id)init;
-(id)filterForIndex:(unsigned long long)arg1 ;
-(unsigned long long)blackAndWhiteFilterStartIndex;
-(void)_addEffectNamed:(id)arg1 aggdName:(id)arg2 filter:(id)arg3 ;
-(unsigned long long)filterCount;
-(unsigned long long)_indexForFilter:(id)arg1 ;
-(unsigned long long)blackAndWhiteFilterCount;
-(id)displayNameForIndex:(unsigned long long)arg1 ;
-(id)aggdNameForFilter:(id)arg1 ;
-(id)displayNameForFilter:(id)arg1 ;
@end

