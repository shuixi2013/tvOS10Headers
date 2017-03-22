/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, WLKChannelDetails, WLKBasicContentMetadata, NSArray, NSNumber, WLKLocale, NSDate, WLKPlayEvent, SSLookupItem, SSLookupItemOffer;

@interface WLKPlayable : NSObject {

	BOOL _entitled;
	BOOL _appInstalled;
	BOOL _itunes;
	BOOL _subtitled;
	NSDictionary* _dictionary;
	NSString* _playableID;
	NSString* _canonicalID;
	NSString* _channelID;
	WLKChannelDetails* _channelDetails;
	NSString* _contentID;
	long long _contentSourceType;
	WLKBasicContentMetadata* _content;
	NSArray* _adLocales;
	NSArray* _audioTrackLocales;
	NSArray* _audioTrackFormats;
	NSArray* _closedCaptionLocales;
	NSArray* _SDHLocales;
	NSNumber* _duration;
	WLKLocale* _primaryLocale;
	NSString* _externalID;
	NSString* _externalServiceID;
	NSArray* _subtitledLocales;
	NSString* _videoQuality;
	NSDate* _endTime;
	NSDate* _startTime;
	WLKPlayEvent* _playEvent;
	NSDictionary* _itsData;
	SSLookupItem* _lookupItem;
	NSDictionary* _punchoutUrls;
	NSArray* _movieClips;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                          //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * playableID;                              //@synthesize playableID=_playableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                             //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                               //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * channelDetails;                 //@synthesize channelDetails=_channelDetails - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentID;                               //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) long long contentSourceType;                             //@synthesize contentSourceType=_contentSourceType - In the implementation block
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled;                         //@synthesize entitled=_entitled - In the implementation block
@property (getter=isAppInstalled,nonatomic,readonly) BOOL appInstalled;                 //@synthesize appInstalled=_appInstalled - In the implementation block
@property (getter=isiTunes,nonatomic,readonly) BOOL itunes;                             //@synthesize itunes=_itunes - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSArray * adLocales;                                //@synthesize adLocales=_adLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackLocales;                        //@synthesize audioTrackLocales=_audioTrackLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackFormats;                        //@synthesize audioTrackFormats=_audioTrackFormats - In the implementation block
@property (nonatomic,copy,readonly) NSArray * closedCaptionLocales;                     //@synthesize closedCaptionLocales=_closedCaptionLocales - In the implementation block
@property (setter=DHLocales,nonatomic,copy,readonly) NSArray * SDHLocales;              //@synthesize SDHLocales=_SDHLocales - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) WLKLocale * primaryLocale;                          //@synthesize primaryLocale=_primaryLocale - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                              //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalServiceID;                       //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (getter=isSubtitled,nonatomic,readonly) BOOL subtitled;                       //@synthesize subtitled=_subtitled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subtitledLocales;                         //@synthesize subtitledLocales=_subtitledLocales - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoQuality;                            //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endTime;                                   //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) WLKPlayEvent * playEvent;                                //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itsData;                             //@synthesize itsData=_itsData - In the implementation block
@property (nonatomic,copy,readonly) SSLookupItem * lookupItem;                          //@synthesize lookupItem=_lookupItem - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;                        //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) SSLookupItemOffer * bestBuyOffer; 
@property (nonatomic,copy,readonly) SSLookupItemOffer * bestRentalOffer; 
@property (nonatomic,copy,readonly) NSArray * movieClips;                               //@synthesize movieClips=_movieClips - In the implementation block
+(id)playablesWithDictionaries:(id)arg1 canonicalID:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)duration;
-(NSDictionary *)dictionary;
-(WLKBasicContentMetadata *)content;
-(NSDate *)startTime;
-(NSString *)videoQuality;
-(NSDate *)endTime;
-(NSString *)contentID;
-(NSString *)externalID;
-(NSArray *)offers;
-(WLKPlayEvent *)playEvent;
-(SSLookupItem *)lookupItem;
-(NSString *)canonicalID;
-(NSDictionary *)punchoutUrls;
-(id)initWithDictionary:(id)arg1 canonicalID:(id)arg2 ;
-(id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2 ;
-(BOOL)isAppInstalled;
-(WLKChannelDetails *)channelDetails;
-(long long)contentSourceType;
-(BOOL)isEntitled;
-(NSString *)playableID;
-(id)_filteredContentSource:(id)arg1 ;
-(BOOL)_supportsHD;
-(SSLookupItemOffer *)bestBuyOffer;
-(SSLookupItemOffer *)bestRentalOffer;
-(NSString *)channelID;
-(BOOL)isiTunes;
-(NSArray *)adLocales;
-(NSArray *)audioTrackLocales;
-(NSArray *)audioTrackFormats;
-(NSArray *)closedCaptionLocales;
-(NSArray *)SDHLocales;
-(WLKLocale *)primaryLocale;
-(NSString *)externalServiceID;
-(BOOL)isSubtitled;
-(NSArray *)subtitledLocales;
-(NSDictionary *)itsData;
-(NSArray *)movieClips;
@end

