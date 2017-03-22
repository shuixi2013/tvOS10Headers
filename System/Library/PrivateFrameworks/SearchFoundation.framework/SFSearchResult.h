/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFSearchResult.h>
@class NSString, SFImage, SFText, NSArray, NSURL, SFActionItem, SFPunchout, NSData, SFCard, SFMoreResults, NSDictionary, SFCustom, NSNumber;


@protocol SFSearchResult
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,retain) SFText * title; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SFImage * secondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * publishDate; 
@property (nonatomic,copy) NSString * sourceName; 
@property (nonatomic,copy) NSString * completion; 
@property (nonatomic,retain) SFImage * completionImage; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) unsigned long long auxiliaryBottomTextColor; 
@property (nonatomic,retain) SFActionItem * action; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (nonatomic,retain) NSData * mapsData; 
@property (nonatomic,copy) NSString * mapsResultType; 
@property (nonatomic,retain) NSURL * mapsMoreURL; 
@property (nonatomic,copy) NSString * mapsMoreString; 
@property (nonatomic,retain) SFImage * mapsMoreIcon; 
@property (nonatomic,copy) NSString * nearbyBusinessesString; 
@property (nonatomic,retain) SFCard * card; 
@property (nonatomic,retain) SFCard * inlineCard; 
@property (nonatomic,retain) SFMoreResults * moreResults; 
@property (nonatomic,retain) SFPunchout * moreResultsPunchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sectionBundleIdentifier; 
@property (assign,nonatomic) BOOL isLocalApplicationResult; 
@property (nonatomic,copy) NSString * userActivityRequiredString; 
@property (assign,nonatomic) unsigned long long topHit; 
@property (nonatomic,copy) NSString * sectionHeader; 
@property (nonatomic,copy) NSString * sectionHeaderMore; 
@property (nonatomic,copy) NSURL * sectionHeaderMoreURL; 
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; 
@property (assign,nonatomic) double rankingScore; 
@property (assign,nonatomic) unsigned long long placement; 
@property (assign,nonatomic) unsigned long long type; 
@property (assign,nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; 
@property (nonatomic,copy) NSString * mediaType; 
@property (assign,nonatomic) double serverScore; 
@property (nonatomic,copy) NSDictionary * topicDistribution; 
@property (nonatomic,copy) NSDictionary * featureScaling; 
@property (assign,nonatomic) double personalizationScore; 
@property (assign,nonatomic) unsigned long long origRank; 
@property (nonatomic,retain) SFCustom * customProperties; 
@property (nonatomic,copy) NSString * resultType; 
@property (nonatomic,copy) NSString * resultTemplate; 
@property (assign,nonatomic) BOOL isQuickGlance; 
@property (assign,nonatomic) BOOL isStreaming; 
@property (nonatomic,retain) NSNumber * engagementScore; 
@property (nonatomic,retain) NSNumber * queryIndependentScore; 
@property (nonatomic,retain) NSNumber * maxAge; 
@property (nonatomic,copy) NSString * titleNote; 
@property (nonatomic,retain) NSNumber * titleNoteSize; 
@property (nonatomic,copy) NSString * resultBundleId; 
@property (nonatomic,retain) SFImage * icon; 
@property (assign,nonatomic) BOOL isStaticCorrection; 
@property (nonatomic,copy) NSDictionary * localFeatures; 
@property (nonatomic,copy) NSString * intendedQuery; 
@property (nonatomic,copy) NSString * correctedQuery; 
@property (nonatomic,copy) NSString * completedQuery; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (assign,nonatomic) BOOL publiclyIndexable; 
@required
-(NSString *)storeIdentifier;
-(void)setTitle:(id)arg1;
-(NSString *)identifier;
-(NSURL *)url;
-(SFText *)title;
-(void)setType:(unsigned long long)arg1;
-(unsigned long long)type;
-(SFActionItem *)action;
-(void)setIdentifier:(id)arg1;
-(void)setAction:(id)arg1;
-(void)setSectionHeader:(id)arg1;
-(NSString *)completion;
-(void)setCompletion:(id)arg1;
-(unsigned long long)placement;
-(NSString *)calendarIdentifier;
-(void)setIcon:(id)arg1;
-(void)setUrl:(id)arg1;
-(SFImage *)icon;
-(void)setPlacement:(unsigned long long)arg1;
-(SFImage *)thumbnail;
-(NSString *)sectionHeader;
-(void)setThumbnail:(id)arg1;
-(BOOL)isStreaming;
-(NSString *)resultType;
-(void)setResultType:(id)arg1;
-(NSString *)sourceName;
-(void)setSourceName:(id)arg1;
-(SFCustom *)customProperties;
-(void)setCustomProperties:(id)arg1;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(void)setStoreIdentifier:(id)arg1;
-(void)setContactIdentifier:(id)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(SFPunchout *)punchout;
-(void)setPunchout:(id)arg1;
-(NSNumber *)maxAge;
-(void)setMaxAge:(id)arg1;
-(NSArray *)descriptions;
-(void)setDescriptions:(id)arg1;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(id)arg1;
-(NSString *)contactIdentifier;
-(NSData *)mapsData;
-(unsigned long long)queryId;
-(NSString *)mediaType;
-(void)setMediaType:(id)arg1;
-(void)setMapsData:(id)arg1;
-(void)setCalendarIdentifier:(id)arg1;
-(BOOL)isCentered;
-(NSString *)applicationBundleIdentifier;
-(unsigned long long)topHit;
-(void)setTopHit:(unsigned long long)arg1;
-(NSDictionary *)localFeatures;
-(void)setLocalFeatures:(id)arg1;
-(NSString *)resultBundleId;
-(void)setResultBundleId:(id)arg1;
-(NSString *)sectionBundleIdentifier;
-(void)setSectionBundleIdentifier:(id)arg1;
-(double)rankingScore;
-(void)setRankingScore:(double)arg1;
-(NSString *)correctedQuery;
-(void)setCorrectedQuery:(id)arg1;
-(BOOL)isStaticCorrection;
-(void)setIsStaticCorrection:(BOOL)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(BOOL)isLocalApplicationResult;
-(void)setIsLocalApplicationResult:(BOOL)arg1;
-(BOOL)publiclyIndexable;
-(void)setPubliclyIndexable:(BOOL)arg1;
-(double)serverScore;
-(void)setServerScore:(double)arg1;
-(NSDictionary *)featureScaling;
-(unsigned long long)origRank;
-(void)setOrigRank:(unsigned long long)arg1;
-(void)setPersonalizationScore:(double)arg1;
-(double)personalizationScore;
-(void)setIsCentered:(BOOL)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(unsigned long long)arg1;
-(SFCard *)card;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setPublishDate:(id)arg1;
-(void)setCompletionImage:(id)arg1;
-(void)setMapsResultType:(id)arg1;
-(void)setMapsMoreURL:(id)arg1;
-(void)setMapsMoreString:(id)arg1;
-(void)setMapsMoreIcon:(id)arg1;
-(void)setNearbyBusinessesString:(id)arg1;
-(void)setInlineCard:(id)arg1;
-(void)setCard:(id)arg1;
-(void)setMoreResults:(id)arg1;
-(void)setMoreResultsPunchout:(id)arg1;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
-(void)setSectionHeaderMore:(id)arg1;
-(void)setSectionHeaderMoreURL:(id)arg1;
-(void)setTopicDistribution:(id)arg1;
-(void)setFeatureScaling:(id)arg1;
-(NSString *)sectionHeaderMore;
-(void)setResultTemplate:(id)arg1;
-(void)setIsQuickGlance:(BOOL)arg1;
-(void)setIsStreaming:(BOOL)arg1;
-(void)setEngagementScore:(id)arg1;
-(void)setQueryIndependentScore:(id)arg1;
-(void)setTitleNote:(id)arg1;
-(void)setTitleNoteSize:(id)arg1;
-(void)setIntendedQuery:(id)arg1;
-(void)setCompletedQuery:(id)arg1;
-(NSDictionary *)topicDistribution;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(unsigned long long)auxiliaryBottomTextColor;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(NSString *)publishDate;
-(SFImage *)completionImage;
-(NSString *)mapsResultType;
-(NSURL *)mapsMoreURL;
-(NSString *)mapsMoreString;
-(SFImage *)mapsMoreIcon;
-(NSString *)nearbyBusinessesString;
-(SFCard *)inlineCard;
-(SFMoreResults *)moreResults;
-(SFPunchout *)moreResultsPunchout;
-(NSString *)userActivityRequiredString;
-(void)setUserActivityRequiredString:(id)arg1;
-(NSURL *)sectionHeaderMoreURL;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSString *)resultTemplate;
-(BOOL)isQuickGlance;
-(NSNumber *)engagementScore;
-(NSNumber *)queryIndependentScore;
-(NSString *)titleNote;
-(NSNumber *)titleNoteSize;
-(NSString *)intendedQuery;
-(NSString *)completedQuery;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SFImage, SFText, NSArray, NSURL, SFActionItem, SFPunchout, NSData, SFCard, SFMoreResults, NSDictionary, SFCustom, NSNumber;

@interface SFSearchResult : NSObject <SFSearchResult, NSSecureCoding, NSCopying> {

	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _isCentered;
	BOOL _isLocalApplicationResult;
	BOOL _renderHorizontallyWithOtherResultsInCategory;
	BOOL _isQuickGlance;
	BOOL _isStreaming;
	BOOL _isStaticCorrection;
	BOOL _publiclyIndexable;
	NSString* _identifier;
	SFImage* _thumbnail;
	SFText* _title;
	NSString* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _descriptions;
	NSString* _footnote;
	NSString* _publishDate;
	NSString* _sourceName;
	NSString* _completion;
	SFImage* _completionImage;
	NSURL* _url;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	unsigned long long _auxiliaryBottomTextColor;
	SFActionItem* _action;
	SFPunchout* _punchout;
	NSString* _storeIdentifier;
	NSString* _contactIdentifier;
	NSString* _calendarIdentifier;
	NSData* _mapsData;
	NSString* _mapsResultType;
	NSURL* _mapsMoreURL;
	NSString* _mapsMoreString;
	SFImage* _mapsMoreIcon;
	NSString* _nearbyBusinessesString;
	SFCard* _card;
	SFCard* _inlineCard;
	SFMoreResults* _moreResults;
	SFPunchout* _moreResultsPunchout;
	NSString* _applicationBundleIdentifier;
	NSString* _sectionBundleIdentifier;
	NSString* _userActivityRequiredString;
	unsigned long long _topHit;
	NSString* _sectionHeader;
	NSString* _sectionHeaderMore;
	NSURL* _sectionHeaderMoreURL;
	double _rankingScore;
	unsigned long long _placement;
	unsigned long long _type;
	unsigned long long _minimumRankOfTopHitToSuppressResult;
	NSString* _mediaType;
	double _serverScore;
	NSDictionary* _topicDistribution;
	NSDictionary* _featureScaling;
	double _personalizationScore;
	unsigned long long _origRank;
	SFCustom* _customProperties;
	NSString* _resultType;
	NSString* _resultTemplate;
	NSNumber* _engagementScore;
	NSNumber* _queryIndependentScore;
	NSNumber* _maxAge;
	NSString* _titleNote;
	NSNumber* _titleNoteSize;
	NSString* _resultBundleId;
	SFImage* _icon;
	NSDictionary* _localFeatures;
	NSString* _intendedQuery;
	NSString* _correctedQuery;
	NSString* _completedQuery;
	unsigned long long _queryId;

}

@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                                 //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                                   //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) SFText * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                             //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) SFImage * secondaryTitleImage;                                       //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                                       //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                                     //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                                //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                                   //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy) NSString * publishDate;                                                //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                 //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSString * completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SFImage * completionImage;                                           //@synthesize completionImage=_completionImage - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                                           //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                                        //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                                        //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) unsigned long long auxiliaryBottomTextColor;                         //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (nonatomic,retain) SFActionItem * action;                                               //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                               //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                          //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;                                         //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,retain) NSData * mapsData;                                                   //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,copy) NSString * mapsResultType;                                             //@synthesize mapsResultType=_mapsResultType - In the implementation block
@property (nonatomic,retain) NSURL * mapsMoreURL;                                                 //@synthesize mapsMoreURL=_mapsMoreURL - In the implementation block
@property (nonatomic,copy) NSString * mapsMoreString;                                             //@synthesize mapsMoreString=_mapsMoreString - In the implementation block
@property (nonatomic,retain) SFImage * mapsMoreIcon;                                              //@synthesize mapsMoreIcon=_mapsMoreIcon - In the implementation block
@property (nonatomic,copy) NSString * nearbyBusinessesString;                                     //@synthesize nearbyBusinessesString=_nearbyBusinessesString - In the implementation block
@property (nonatomic,retain) SFCard * card;                                                       //@synthesize card=_card - In the implementation block
@property (nonatomic,retain) SFCard * inlineCard;                                                 //@synthesize inlineCard=_inlineCard - In the implementation block
@property (nonatomic,retain) SFMoreResults * moreResults;                                         //@synthesize moreResults=_moreResults - In the implementation block
@property (nonatomic,retain) SFPunchout * moreResultsPunchout;                                    //@synthesize moreResultsPunchout=_moreResultsPunchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sectionBundleIdentifier;                                    //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isLocalApplicationResult;                                       //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (nonatomic,copy) NSString * userActivityRequiredString;                                 //@synthesize userActivityRequiredString=_userActivityRequiredString - In the implementation block
@property (assign,nonatomic) unsigned long long topHit;                                           //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,copy) NSString * sectionHeader;                                              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderMore;                                          //@synthesize sectionHeaderMore=_sectionHeaderMore - In the implementation block
@property (nonatomic,copy) NSURL * sectionHeaderMoreURL;                                          //@synthesize sectionHeaderMoreURL=_sectionHeaderMoreURL - In the implementation block
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory;                   //@synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory - In the implementation block
@property (assign,nonatomic) double rankingScore;                                                 //@synthesize rankingScore=_rankingScore - In the implementation block
@property (assign,nonatomic) unsigned long long placement;                                        //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;              //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) double serverScore;                                                  //@synthesize serverScore=_serverScore - In the implementation block
@property (nonatomic,copy) NSDictionary * topicDistribution;                                      //@synthesize topicDistribution=_topicDistribution - In the implementation block
@property (nonatomic,copy) NSDictionary * featureScaling;                                         //@synthesize featureScaling=_featureScaling - In the implementation block
@property (assign,nonatomic) double personalizationScore;                                         //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) unsigned long long origRank;                                         //@synthesize origRank=_origRank - In the implementation block
@property (nonatomic,retain) SFCustom * customProperties;                                         //@synthesize customProperties=_customProperties - In the implementation block
@property (nonatomic,copy) NSString * resultType;                                                 //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSString * resultTemplate;                                             //@synthesize resultTemplate=_resultTemplate - In the implementation block
@property (assign,nonatomic) BOOL isQuickGlance;                                                  //@synthesize isQuickGlance=_isQuickGlance - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                                    //@synthesize isStreaming=_isStreaming - In the implementation block
@property (nonatomic,retain) NSNumber * engagementScore;                                          //@synthesize engagementScore=_engagementScore - In the implementation block
@property (nonatomic,retain) NSNumber * queryIndependentScore;                                    //@synthesize queryIndependentScore=_queryIndependentScore - In the implementation block
@property (nonatomic,retain) NSNumber * maxAge;                                                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,copy) NSString * titleNote;                                                  //@synthesize titleNote=_titleNote - In the implementation block
@property (nonatomic,retain) NSNumber * titleNoteSize;                                            //@synthesize titleNoteSize=_titleNoteSize - In the implementation block
@property (nonatomic,copy) NSString * resultBundleId;                                             //@synthesize resultBundleId=_resultBundleId - In the implementation block
@property (nonatomic,retain) SFImage * icon;                                                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL isStaticCorrection;                                             //@synthesize isStaticCorrection=_isStaticCorrection - In the implementation block
@property (nonatomic,copy) NSDictionary * localFeatures;                                          //@synthesize localFeatures=_localFeatures - In the implementation block
@property (nonatomic,copy) NSString * intendedQuery;                                              //@synthesize intendedQuery=_intendedQuery - In the implementation block
@property (nonatomic,copy) NSString * correctedQuery;                                             //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,copy) NSString * completedQuery;                                             //@synthesize completedQuery=_completedQuery - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                                          //@synthesize queryId=_queryId - In the implementation block
@property (assign,nonatomic) BOOL publiclyIndexable;                                              //@synthesize publiclyIndexable=_publiclyIndexable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)storeIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(SFText *)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(SFText *)title;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(SFActionItem *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAction:(SFActionItem *)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(NSString *)completion;
-(void)setCompletion:(NSString *)arg1 ;
-(unsigned long long)placement;
-(NSString *)calendarIdentifier;
-(void)setIcon:(SFImage *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(SFImage *)icon;
-(void)setPlacement:(unsigned long long)arg1 ;
-(SFImage *)thumbnail;
-(NSString *)sectionHeader;
-(void)setThumbnail:(SFImage *)arg1 ;
-(BOOL)isStreaming;
-(NSString *)resultType;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(SFCustom *)customProperties;
-(void)setCustomProperties:(SFCustom *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(NSNumber *)maxAge;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(NSData *)mapsData;
-(unsigned long long)queryId;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)isCentered;
-(NSString *)applicationBundleIdentifier;
-(unsigned long long)topHit;
-(void)setTopHit:(unsigned long long)arg1 ;
-(NSDictionary *)localFeatures;
-(void)setLocalFeatures:(NSDictionary *)arg1 ;
-(NSString *)resultBundleId;
-(void)setResultBundleId:(NSString *)arg1 ;
-(NSString *)sectionBundleIdentifier;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(double)rankingScore;
-(void)setRankingScore:(double)arg1 ;
-(NSString *)correctedQuery;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(BOOL)isStaticCorrection;
-(void)setIsStaticCorrection:(BOOL)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(BOOL)isLocalApplicationResult;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(BOOL)publiclyIndexable;
-(void)setPubliclyIndexable:(BOOL)arg1 ;
-(double)serverScore;
-(void)setServerScore:(double)arg1 ;
-(NSDictionary *)featureScaling;
-(unsigned long long)origRank;
-(void)setOrigRank:(unsigned long long)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
-(void)setIsCentered:(BOOL)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(unsigned long long)arg1 ;
-(SFCard *)card;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setPublishDate:(NSString *)arg1 ;
-(void)setCompletionImage:(SFImage *)arg1 ;
-(void)setMapsResultType:(NSString *)arg1 ;
-(void)setMapsMoreURL:(NSURL *)arg1 ;
-(void)setMapsMoreString:(NSString *)arg1 ;
-(void)setMapsMoreIcon:(SFImage *)arg1 ;
-(void)setNearbyBusinessesString:(NSString *)arg1 ;
-(void)setInlineCard:(SFCard *)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(void)setMoreResults:(SFMoreResults *)arg1 ;
-(void)setMoreResultsPunchout:(SFPunchout *)arg1 ;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1 ;
-(void)setSectionHeaderMore:(NSString *)arg1 ;
-(void)setSectionHeaderMoreURL:(NSURL *)arg1 ;
-(void)setTopicDistribution:(NSDictionary *)arg1 ;
-(void)setFeatureScaling:(NSDictionary *)arg1 ;
-(NSString *)sectionHeaderMore;
-(void)setResultTemplate:(NSString *)arg1 ;
-(void)setIsQuickGlance:(BOOL)arg1 ;
-(void)setIsStreaming:(BOOL)arg1 ;
-(void)setEngagementScore:(NSNumber *)arg1 ;
-(void)setQueryIndependentScore:(NSNumber *)arg1 ;
-(void)setTitleNote:(NSString *)arg1 ;
-(void)setTitleNoteSize:(NSNumber *)arg1 ;
-(void)setIntendedQuery:(NSString *)arg1 ;
-(void)setCompletedQuery:(NSString *)arg1 ;
-(NSDictionary *)topicDistribution;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(unsigned long long)auxiliaryBottomTextColor;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(NSString *)publishDate;
-(SFImage *)completionImage;
-(NSString *)mapsResultType;
-(NSURL *)mapsMoreURL;
-(NSString *)mapsMoreString;
-(SFImage *)mapsMoreIcon;
-(NSString *)nearbyBusinessesString;
-(SFCard *)inlineCard;
-(SFMoreResults *)moreResults;
-(SFPunchout *)moreResultsPunchout;
-(NSString *)userActivityRequiredString;
-(void)setUserActivityRequiredString:(NSString *)arg1 ;
-(NSURL *)sectionHeaderMoreURL;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1 ;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSString *)resultTemplate;
-(BOOL)isQuickGlance;
-(NSNumber *)engagementScore;
-(NSNumber *)queryIndependentScore;
-(NSString *)titleNote;
-(NSNumber *)titleNoteSize;
-(NSString *)intendedQuery;
-(NSString *)completedQuery;
@end

