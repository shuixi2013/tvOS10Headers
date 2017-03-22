/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setExpirationDate:(id)arg1 ;
-(SSItemOffer *)defaultItemOffer;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreName;
-(id)genreIdentifier;
-(id)indexInCollection;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)videoDetails;
-(id)softwareType;
-(BOOL)isHighDefinition;
-(id)playableMedia;
-(SSItemImageCollection *)imageCollection;
-(id)releaseDateString;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)_offers;
-(id)tellAFriendBody;
-(id)_tellAFriendDictionary;
-(id)priceDisplay;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(float)averageUserRating;
-(BOOL)isGameCenterEnabled;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(NSArray *)thumbnailImages;
-(id)tweetInitialText;
-(id)tweetURL;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
-(void)dealloc;
-(NSString *)description;
-(id)bundleIdentifier;
-(NSString *)itemTitle;
-(id)shortDescription;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isRestricted;
-(id)mediaKind;
-(id)bundleVersion;
-(NSDate *)expirationDate;
-(id)contentRating;
-(id)seriesName;
-(NSString *)itemKind;
-(NSString *)artistName;
-(id)composerName;
-(BOOL)isCompilation;
-(id)releaseDate;
-(id)buyParameters;
-(NSNumber *)ITunesStoreIdentifier;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)seasonNumber;
-(id)podcastFeedURL;
-(id)podcastEpisodeGUID;
-(id)networkName;
-(id)longDescription;
-(id)collectionName;
-(id)collectionIdentifier;
-(id)collectionArtistName;
-(long long)numberOfUserRatings;
@end

