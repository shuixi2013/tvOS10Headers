/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCRadioStationPlaybackMetadata.h>

@class RadioArtworkCollection, NSString;

@interface MPCMutableRadioStationPlaybackMetadata : MPCRadioStationPlaybackMetadata

@property (nonatomic,retain) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationStringID; 
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationName:(NSString *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
@end

