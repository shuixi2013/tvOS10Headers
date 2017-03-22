/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlayerItem.h>

@class MPAVItem;

@interface MPCMediaPlayerLegacyItem : MPCPlayerItem {

	SCD_Struct_MP2 _snapshot;
	MPAVItem* _avItem;

}

@property (nonatomic,readonly) MPAVItem * avItem;              //@synthesize avItem=_avItem - In the implementation block
-(void)dealloc;
-(id)title;
-(MPAVItem *)avItem;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(id)artistName;
-(id)artworkCatalog;
-(BOOL)isExplicit;
-(id)albumName;
-(id)modelSongRepresentation;
-(id)initWithAVItem:(id)arg1 ;
-(void)_artworkDidChangeNotification:(id)arg1 ;
-(void)_titlesDidChangeNotification:(id)arg1 ;
-(void)_durationAvailablityDidChangeNotification:(id)arg1 ;
-(void)_modelSongDidChangeNotification:(id)arg1 ;
-(void)_explicitDidChangeNotification:(id)arg1 ;
-(void)_updateSnapshot;
-(SCD_Struct_MP2)durationSnapshot;
-(id)modelPlaylistEntryRepresentation;
@end

