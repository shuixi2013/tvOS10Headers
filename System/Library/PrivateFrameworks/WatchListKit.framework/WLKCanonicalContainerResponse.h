/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, WLKBasicEpisodeMetadata, NSArray;

@interface WLKCanonicalContainerResponse : NSObject {

	BOOL _watchListable;
	BOOL _watchListed;
	NSDictionary* _dictionary;
	NSString* _canonicalID;
	unsigned long long _contentType;
	WLKBasicEpisodeMetadata* _currentEpisode;
	NSDictionary* _defaultSeason;
	NSArray* _channels;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                                //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                             //@synthesize contentType=_contentType - In the implementation block
@property (getter=isWatchListable,nonatomic,readonly) BOOL watchListable;                  //@synthesize watchListable=_watchListable - In the implementation block
@property (getter=isWatchListed,nonatomic,readonly) BOOL watchListed;                      //@synthesize watchListed=_watchListed - In the implementation block
@property (nonatomic,copy,readonly) WLKBasicEpisodeMetadata * currentEpisode;              //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * defaultSeason;                          //@synthesize defaultSeason=_defaultSeason - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channels;                                    //@synthesize channels=_channels - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(unsigned long long)contentType;
-(NSArray *)channels;
-(NSString *)canonicalID;
-(WLKBasicEpisodeMetadata *)currentEpisode;
-(BOOL)isWatchListable;
-(BOOL)isWatchListed;
-(NSDictionary *)defaultSeason;
@end

