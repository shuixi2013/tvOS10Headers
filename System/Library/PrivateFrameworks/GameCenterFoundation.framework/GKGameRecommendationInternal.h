/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal {

	NSString* _reason;
	NSString* _engineID;

}

@property (nonatomic,retain) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * engineID;              //@synthesize engineID=_engineID - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)serverRepresentation;
-(NSString *)engineID;
-(id)initWithGame:(id)arg1 ;
-(void)setEngineID:(NSString *)arg1 ;
@end

