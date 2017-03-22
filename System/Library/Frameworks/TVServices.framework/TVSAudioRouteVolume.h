/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface TVSAudioRouteVolume : NSObject {

	float _stepSize;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSNumber * volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) float stepSize;                       //@synthesize stepSize=_stepSize - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)category;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)_volumeDidChange:(id)arg1 ;
-(void)_listenForAVSystemControllerNotifications;
-(void)_mediaServerDied:(id)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(BOOL)increase;
-(BOOL)decrease;
-(float)stepSize;
-(BOOL)isMuted;
@end

