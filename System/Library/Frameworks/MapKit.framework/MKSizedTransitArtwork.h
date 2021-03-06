/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKArtworkImageSource.h>

@protocol GEOTransitArtworkDataSource;
@class MKArtworkDataSourceCache, NSString;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {

	id<GEOTransitArtworkDataSource> _artwork;
	long long _shieldSize;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;                //@synthesize artworkCache=_artworkCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id<GEOTransitArtworkDataSource>)artwork;
-(MKArtworkDataSourceCache *)artworkCache;
-(long long)shieldSize;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(id)badgeImageToDisplayInView:(id)arg1 ;
-(id)imageToDisplayInView:(id)arg1 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg1 ;
@end

